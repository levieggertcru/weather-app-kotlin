package com.example.weatherapp.features.currentweather.dependency_container

import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class CurrentWeatherDiContainer(
    private val networkRequester: NetworkRequesterInterface
) {

    val dataLayer: CurrentWeatherDataLayerDependencies
    val domainLayer: CurrentWeatherDomainLayerDependencies

    init {

        dataLayer = CurrentWeatherDataLayerDependencies(networkRequester)
        domainLayer = CurrentWeatherDomainLayerDependencies(dataLayer)
    }
}