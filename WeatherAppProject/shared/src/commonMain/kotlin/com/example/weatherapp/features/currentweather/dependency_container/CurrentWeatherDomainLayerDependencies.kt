package com.example.weatherapp.features.currentweather.dependency_container

import com.example.weatherapp.features.currentweather.domain.usecases.GetLatestWeatherSearchesUseCase
import com.example.weatherapp.features.currentweather.domain.usecases.SearchCurrentWeatherUseCase

class CurrentWeatherDomainLayerDependencies(
    private val dataLayer: CurrentWeatherDataLayerDependencies
) {

    fun getLatestWeatherSearchesUseCase(): GetLatestWeatherSearchesUseCase {
        return GetLatestWeatherSearchesUseCase(
            dataLayer.getLatestWeatherSearchesRepository()
        )
    }

    fun getSearchCurrentWeatherUseCase(): SearchCurrentWeatherUseCase {
        return SearchCurrentWeatherUseCase(
            dataLayer.getCurrentWeatherRepository(),
            dataLayer.getStoreSearchedWeatherRepository()
        )
    }
}