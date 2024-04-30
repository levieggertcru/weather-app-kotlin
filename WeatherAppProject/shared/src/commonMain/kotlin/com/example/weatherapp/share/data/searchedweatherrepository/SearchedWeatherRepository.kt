package com.example.weatherapp.share.data.searchedweatherrepository

import com.example.weatherapp.UUIDString
import com.example.weatherapp.getUUIDString
import com.example.weatherapp.share.data.appdatabase.AppDatabase
import com.example.weatherapp.share.data.appdatabase.schema.SearchedWeatherObject
import io.realm.kotlin.Realm
import io.realm.kotlin.ext.query
import io.realm.kotlin.query.RealmResults
import io.realm.kotlin.types.RealmInstant
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.datetime.Clock
import kotlinx.datetime.Instant

class SearchedWeatherRepository(private val database: AppDatabase) {

    fun getSearchedWeather() {

        val realm: Realm = database.openRealm()

        val queryAllSearchedWeather: RealmResults<SearchedWeatherObject> = realm.query<SearchedWeatherObject>().find()
    }

    fun storeSearchedWeather(zipCode: String): SearchedWeatherDataModel {

        val uuidString: UUIDString = getUUIDString()
        val date: Instant = Clock.System.now()

        val dataModel = SearchedWeatherDataModel(
            uuidString.newUUIDString(),
            date,
            zipCode
        )

        GlobalScope.launch {

            val realm: Realm = database.openRealm()

            realm.write {

                val unmanagedSearch = SearchedWeatherObject().apply {
                    this.createdAt = RealmInstant.now()
                    this.id = uuidString.newUUIDString()
                    this.zipCode = zipCode
                }

                val managedSearch = copyToRealm(unmanagedSearch)
            }
        }

        return dataModel
    }
}