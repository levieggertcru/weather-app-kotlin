package com.example.weatherapp.dependency_container

import com.example.weatherapp.features.currentweather.dependency_container.CurrentWeatherDataLayerDependencies
import com.example.weatherapp.features.currentweather.dependency_container.CurrentWeatherDiContainer
import com.example.weatherapp.features.currentweather.dependency_container.CurrentWeatherDomainLayerDependencies
import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class AppDiContainer(
    private val networkRequester: NetworkRequesterInterface
) {
    val feature: AppFeatureDiContainer

    init {

        val currentWeather = CurrentWeatherDiContainer(networkRequester)

        feature = AppFeatureDiContainer(currentWeather)
    }
}