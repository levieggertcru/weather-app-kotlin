package com.example.weatherapp.features.currentweather.data_domaininterface

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.share.data.weatherrepository.WeatherRepository

class GetCurrentWeatherRepository(
    private val weatherRepository: WeatherRepository
): GetCurrentWeatherRepositoryInterface {

    override fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> Unit) {

        weatherRepository.getCurrentWeather(zipCode, {

            val currentWeather = CurrentWeatherDomainModel(
                it.locationName,
                it.locationRegion,
                it.tempFahrenheit.toString() + " degrees fahrenheit"
            )

            completion(currentWeather)
        })
    }
}