package com.example.weatherapp.features.currentweather.dependency_container

import com.example.weatherapp.features.currentweather.data_domaininterface.GetCurrentWeatherRepository
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.share.data.weatherapirepository.api.WeatherAPI
import com.example.weatherapp.share.data.weatherrepository.WeatherRepository
import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class CurrentWeatherDataLayerDependencies(
    private val networkRequester: NetworkRequesterInterface
) {

    fun getCurrentWeatherRepository(): GetCurrentWeatherRepositoryInterface {
        return GetCurrentWeatherRepository(
            WeatherRepository(WeatherAPI(networkRequester))
        )
    }
}