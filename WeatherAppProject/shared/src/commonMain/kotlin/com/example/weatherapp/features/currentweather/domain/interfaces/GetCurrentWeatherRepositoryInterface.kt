package com.example.weatherapp.features.currentweather.domain.interfaces

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel

interface GetCurrentWeatherRepositoryInterface {

    fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> Unit)
}