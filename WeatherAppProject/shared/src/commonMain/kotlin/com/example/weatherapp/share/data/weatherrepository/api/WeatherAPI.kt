package com.example.weatherapp.share.data.weatherapirepository.api

import com.example.weatherapp.share.data.weatherapirepository.api.environment.WeatherAPIEnvironment
import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class WeatherAPI(
    private val networkRequester: NetworkRequesterInterface
) {

    private val environment: WeatherAPIEnvironment = WeatherAPIEnvironment.production()

    val method: WeatherAPIMethods = WeatherAPIMethods(networkRequester, environment)
}