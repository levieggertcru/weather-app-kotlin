package com.example.weatherapp.share.data.searchedweatherrepository

import com.example.weatherapp.UUIDString
import com.example.weatherapp.getUUIDString
import com.example.weatherapp.share.data.appdatabase.AppDatabase
import kotlinx.datetime.Clock
import kotlinx.datetime.Instant

class SearchedWeatherRepository(private val database: AppDatabase) {

    fun storeSearchedWeather(zipCode: String): SearchedWeatherDataModel {

        val uuidString: UUIDString = getUUIDString()
        val date: Instant = Clock.System.now()

        val dataModel = SearchedWeatherDataModel(
            uuidString.newUUIDString(),
            date,
            zipCode
        )

        return dataModel
    }
}