package com.example.weatherapp.features.currentweather.dependency_container

import com.example.weatherapp.share.data.appdatabase.AppDatabase
import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class CurrentWeatherDiContainer(
    private val networkRequester: NetworkRequesterInterface,
    private val database: AppDatabase
) {

    val dataLayer: CurrentWeatherDataLayerDependencies
    val domainLayer: CurrentWeatherDomainLayerDependencies

    init {

        dataLayer = CurrentWeatherDataLayerDependencies(networkRequester, database)
        domainLayer = CurrentWeatherDomainLayerDependencies(dataLayer)
    }
}