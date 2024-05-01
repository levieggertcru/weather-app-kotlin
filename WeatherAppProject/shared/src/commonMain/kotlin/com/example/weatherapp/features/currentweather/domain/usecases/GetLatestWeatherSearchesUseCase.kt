package com.example.weatherapp.features.currentweather.domain.usecases

import com.example.weatherapp.features.currentweather.domain.entities.WeatherSearchDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetLatestWeatherSearchesRepositoryInterface
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface

class GetLatestWeatherSearchesUseCase(
    private val getLatestWeatherSearchesRepository: GetLatestWeatherSearchesRepositoryInterface
) {

    fun getSearches(): FlowWrapper<List<WeatherSearchDomainModel>> {

        return getLatestWeatherSearchesRepository.getSearches()
    }
}