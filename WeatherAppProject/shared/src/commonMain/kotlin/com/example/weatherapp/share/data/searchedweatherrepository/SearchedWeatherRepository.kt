package com.example.weatherapp.share.data.searchedweatherrepository

import com.example.weatherapp.UUIDString
import com.example.weatherapp.getUUIDString
import com.example.weatherapp.share.data.appdatabase.AppDatabase
import com.example.weatherapp.share.data.appdatabase.schema.SearchedWeatherObject
import io.realm.kotlin.Realm
import io.realm.kotlin.ext.query
import io.realm.kotlin.notifications.ResultsChange
import io.realm.kotlin.query.RealmResults
import io.realm.kotlin.types.RealmInstant
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.launch
import kotlinx.datetime.Clock
import kotlinx.datetime.Instant

class SearchedWeatherRepository(
    private val database: AppDatabase
) {

    fun getSearchedWeatherFlow(): Flow<ResultsChange<SearchedWeatherObject>> {

        val realm: Realm = database.openRealm()
        val results: RealmResults<SearchedWeatherObject> = realm.query<SearchedWeatherObject>().find()

        return results.asFlow()
    }

    fun getAllSearchedWeather(): List<SearchedWeatherDataModel> {

        val realm: Realm = database.openRealm()

        val allSearchedWeather: RealmResults<SearchedWeatherObject> = realm.query<SearchedWeatherObject>().find()

        return mapResults(allSearchedWeather)
    }

    fun getSearchedWeather(zipCode: String): List<SearchedWeatherDataModel> {

        val realm: Realm = database.openRealm()

        val results: RealmResults<SearchedWeatherObject> = realm
            .query<SearchedWeatherObject>("zipCode == $0", zipCode)
            .find()

        return mapResults(results)
    }

    private fun mapResults(results: RealmResults<SearchedWeatherObject>): List<SearchedWeatherDataModel> {

        val objects: List<SearchedWeatherDataModel> = results
            .map {
                SearchedWeatherDataModel(it._id.toString(), it.zipCode)
            }

        return objects
    }

    fun storeSearchedWeather(zipCode: String): Unit {

        if (database.openRealm().query<SearchedWeatherObject>().find().isNotEmpty()) {
            return
        }

        val uuidString: UUIDString = getUUIDString()

        GlobalScope.launch {

            val realm: Realm = database.openRealm()

            realm.write {

                val unmanagedSearch = SearchedWeatherObject().apply {
                    this.createdAt = RealmInstant.now()
                    this.zipCode = zipCode
                    this.uuid = uuidString.newUUIDString()
                }

                val managedSearch = copyToRealm(unmanagedSearch)
            }
        }
    }
}