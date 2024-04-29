package com.example.weatherapp.share.data.weatherrepository

import com.example.weatherapp.share.data.weatherapirepository.api.WeatherAPI

class WeatherRepository(
    private val api: WeatherAPI
) {

    fun getCurrentWeather(zipCode: String, completion: (currentWeather: WeatherDataModel) -> Unit) {

        api.method.currentWeather.getCurrent(zipCode, completion)
    }
}