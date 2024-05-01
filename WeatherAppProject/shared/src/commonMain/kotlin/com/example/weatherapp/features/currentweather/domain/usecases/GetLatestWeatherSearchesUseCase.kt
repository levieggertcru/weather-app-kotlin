package com.example.weatherapp.features.currentweather.domain.usecases

import com.example.weatherapp.features.currentweather.domain.entities.LatestWeatherSearchesDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetLatestWeatherSearchesRepositoryInterface
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper

class GetLatestWeatherSearchesUseCase(
    private val getLatestWeatherSearchesRepository: GetLatestWeatherSearchesRepositoryInterface
) {

    fun getSearches(): FlowWrapper<LatestWeatherSearchesDomainModel> {

        return getLatestWeatherSearchesRepository.getSearches()
    }
}