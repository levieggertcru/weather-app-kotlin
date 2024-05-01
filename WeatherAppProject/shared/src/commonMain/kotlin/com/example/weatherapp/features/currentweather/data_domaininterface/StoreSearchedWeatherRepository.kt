package com.example.weatherapp.features.currentweather.data_domaininterface

import com.example.weatherapp.features.currentweather.domain.interfaces.StoreSearchedWeatherRepositoryInterface
import com.example.weatherapp.share.data.searchedweatherrepository.SearchedWeatherRepository

class StoreSearchedWeatherRepository(
    private val searchedWeatherRepository: SearchedWeatherRepository
): StoreSearchedWeatherRepositoryInterface {

    override fun storeSearch(zipCode: String) {
        searchedWeatherRepository.storeSearchedWeather(zipCode)
    }
}