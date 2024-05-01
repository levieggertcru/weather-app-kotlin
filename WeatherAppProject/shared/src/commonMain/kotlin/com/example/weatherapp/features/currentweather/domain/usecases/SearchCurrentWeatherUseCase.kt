package com.example.weatherapp.features.currentweather.domain.usecases

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.features.currentweather.domain.interfaces.StoreSearchedWeatherRepositoryInterface
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper

class SearchCurrentWeatherUseCase(
    private val getCurrentWeatherRepository: GetCurrentWeatherRepositoryInterface,
    private val storeSearchedWeatherRepository: StoreSearchedWeatherRepositoryInterface
) {

    fun search(zipCode: String): FlowWrapper<CurrentWeatherDomainModel> {

        storeSearchedWeatherRepository.storeSearch(zipCode)

        return getCurrentWeatherRepository.getCurrentWeather(zipCode)
    }
}