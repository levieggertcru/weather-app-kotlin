package com.example.weatherapp.features.currentweather.dependency_container

import com.example.weatherapp.features.currentweather.domain.usecases.GetCurrentWeatherUseCase

class CurrentWeatherDomainLayerDependencies(
    private val dataLayer: CurrentWeatherDataLayerDependencies
) {

    fun getCurrentWeatherUseCase(): GetCurrentWeatherUseCase {
        return GetCurrentWeatherUseCase(
            dataLayer.getCurrentWeatherRepository()
        )
    }
}