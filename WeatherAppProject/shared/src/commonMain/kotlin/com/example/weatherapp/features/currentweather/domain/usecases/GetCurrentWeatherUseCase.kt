package com.example.weatherapp.features.currentweather.domain.usecases

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.launch

class GetCurrentWeatherUseCase(
    private val getCurrentWeatherInterface: GetCurrentWeatherRepositoryInterface
) {

    fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> Unit) {

        getCurrentWeatherInterface.getCurrentWeather(zipCode, completion)
    }

    fun getCurrentWeatherFlow(zipCode: String): Flow<CurrentWeatherDomainModel> = flow {

        getCurrentWeatherInterface.getCurrentWeather(zipCode, {

            GlobalScope.launch {
                emit(it)
            }
        })
    }
}