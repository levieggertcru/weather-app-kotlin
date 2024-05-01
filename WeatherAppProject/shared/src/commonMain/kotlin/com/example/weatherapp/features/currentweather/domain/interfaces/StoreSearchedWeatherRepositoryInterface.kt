package com.example.weatherapp.features.currentweather.domain.interfaces

interface StoreSearchedWeatherRepositoryInterface {

    fun storeSearch(zipCode: String)
}