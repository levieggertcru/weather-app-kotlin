package com.example.weatherapp.features.currentweather.domain.usecases

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface

class GetCurrentWeatherUseCase(
    private val getCurrentWeatherInterface: GetCurrentWeatherRepositoryInterface
) {

    fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> Unit): CancellableInterface {

        return getCurrentWeatherInterface.getCurrentWeather(zipCode, completion)
    }
}