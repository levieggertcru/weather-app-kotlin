package com.example.weatherapp.features.currentweather.domain.interfaces

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface

interface GetCurrentWeatherRepositoryInterface {

    fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> Unit): CancellableInterface
}