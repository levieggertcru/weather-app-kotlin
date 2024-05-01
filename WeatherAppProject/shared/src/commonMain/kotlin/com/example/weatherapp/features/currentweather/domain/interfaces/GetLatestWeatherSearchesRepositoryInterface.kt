package com.example.weatherapp.features.currentweather.domain.interfaces

import com.example.weatherapp.features.currentweather.domain.entities.WeatherSearchDomainModel
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface

interface GetLatestWeatherSearchesRepositoryInterface {
    fun getSearches(): FlowWrapper<List<WeatherSearchDomainModel>>
}