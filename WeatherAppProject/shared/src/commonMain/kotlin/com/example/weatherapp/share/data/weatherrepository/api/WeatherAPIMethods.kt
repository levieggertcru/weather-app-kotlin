package com.example.weatherapp.share.data.weatherapirepository.api

import com.example.weatherapp.share.data.weatherapirepository.api.environment.WeatherAPIEnvironment
import com.example.weatherapp.share.data.weatherapirepository.api.methods.WeatherAPICurrentWeatherMethod
import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class WeatherAPIMethods(
    private val networkRequester: NetworkRequesterInterface,
    private val environment: WeatherAPIEnvironment
) {

    val currentWeather: WeatherAPICurrentWeatherMethod = WeatherAPICurrentWeatherMethod(networkRequester, environment)
}