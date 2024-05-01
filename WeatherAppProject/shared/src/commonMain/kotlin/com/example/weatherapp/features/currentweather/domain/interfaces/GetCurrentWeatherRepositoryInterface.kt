package com.example.weatherapp.features.currentweather.domain.interfaces

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper

interface GetCurrentWeatherRepositoryInterface {

    fun getCurrentWeather(zipCode: String): FlowWrapper<CurrentWeatherDomainModel>
}