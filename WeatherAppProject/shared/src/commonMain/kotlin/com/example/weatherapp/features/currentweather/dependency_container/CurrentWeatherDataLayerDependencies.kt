package com.example.weatherapp.features.currentweather.dependency_container

import com.example.weatherapp.features.currentweather.data_domaininterface.GetCurrentWeatherRepository
import com.example.weatherapp.features.currentweather.data_domaininterface.GetLatestWeatherSearchesRepository
import com.example.weatherapp.features.currentweather.data_domaininterface.StoreSearchedWeatherRepository
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.features.currentweather.domain.interfaces.GetLatestWeatherSearchesRepositoryInterface
import com.example.weatherapp.features.currentweather.domain.interfaces.StoreSearchedWeatherRepositoryInterface
import com.example.weatherapp.share.data.appdatabase.AppDatabase
import com.example.weatherapp.share.data.searchedweatherrepository.SearchedWeatherRepository
import com.example.weatherapp.share.data.weatherapirepository.api.WeatherAPI
import com.example.weatherapp.share.data.weatherrepository.WeatherRepository
import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class CurrentWeatherDataLayerDependencies(
    private val networkRequester: NetworkRequesterInterface,
    private val database: AppDatabase
) {

    private fun getSearchedWeatherRepository(): SearchedWeatherRepository {
        return SearchedWeatherRepository(database)
    }

    private fun getWeatherRepository(): WeatherRepository {
        return WeatherRepository(WeatherAPI(networkRequester))
    }

    fun getCurrentWeatherRepository(): GetCurrentWeatherRepositoryInterface {
        return GetCurrentWeatherRepository(
            getWeatherRepository()
        )
    }

    fun getLatestWeatherSearchesRepository(): GetLatestWeatherSearchesRepositoryInterface {
        return GetLatestWeatherSearchesRepository(
            getSearchedWeatherRepository()
        )
    }

    fun getStoreSearchedWeatherRepository(): StoreSearchedWeatherRepositoryInterface {
        return StoreSearchedWeatherRepository(
            getSearchedWeatherRepository()
        )
    }
}