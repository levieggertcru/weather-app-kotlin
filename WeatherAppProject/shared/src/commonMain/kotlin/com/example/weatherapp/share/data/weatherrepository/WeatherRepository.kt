package com.example.weatherapp.share.data.weatherrepository

import com.example.weatherapp.share.data.weatherapirepository.api.WeatherAPI
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface

class WeatherRepository(
    private val api: WeatherAPI
) {

    fun getCurrentWeather(zipCode: String, completion: (currentWeather: WeatherDataModel) -> CancellableInterface) {

        api.method.currentWeather.getCurrent(zipCode, completion)
    }
}