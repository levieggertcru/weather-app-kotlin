package com.example.weatherapp.features.currentweather.domain.interfaces

import com.example.weatherapp.features.currentweather.domain.entities.LatestWeatherSearchesDomainModel
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper

interface GetLatestWeatherSearchesRepositoryInterface {
    fun getSearches(): FlowWrapper<LatestWeatherSearchesDomainModel>
}