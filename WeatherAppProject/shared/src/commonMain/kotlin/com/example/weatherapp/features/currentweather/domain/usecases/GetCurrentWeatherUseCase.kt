package com.example.weatherapp.features.currentweather.domain.usecases

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.launch

class GetCurrentWeatherUseCase(
    private val getCurrentWeatherInterface: GetCurrentWeatherRepositoryInterface
) {

    fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> CancellableInterface) {

        return getCurrentWeatherInterface.getCurrentWeather(zipCode, completion)
    }
}