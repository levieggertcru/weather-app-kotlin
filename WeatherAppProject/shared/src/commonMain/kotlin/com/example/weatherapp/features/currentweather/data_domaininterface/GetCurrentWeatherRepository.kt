package com.example.weatherapp.features.currentweather.data_domaininterface

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.share.data.weatherrepository.WeatherRepository
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface

class GetCurrentWeatherRepository(
    private val weatherRepository: WeatherRepository
): GetCurrentWeatherRepositoryInterface {

    override fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> CancellableInterface) {

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