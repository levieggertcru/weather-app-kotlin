package com.example.weatherapp.features.currentweather.data_domaininterface

import com.example.weatherapp.features.currentweather.domain.entities.LatestWeatherSearchesDomainModel
import com.example.weatherapp.features.currentweather.domain.entities.WeatherSearchDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetLatestWeatherSearchesRepositoryInterface
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper
import com.example.weatherapp.share.data.appdatabase.schema.SearchedWeatherObject
import com.example.weatherapp.share.data.searchedweatherrepository.SearchedWeatherRepository
import io.realm.kotlin.notifications.ResultsChange
import kotlinx.coroutines.flow.map

class GetLatestWeatherSearchesRepository(
    private val searchedWeatherRepository: SearchedWeatherRepository
): GetLatestWeatherSearchesRepositoryInterface {

    override fun getSearches(): FlowWrapper<LatestWeatherSearchesDomainModel> {

        return FlowWrapper<LatestWeatherSearchesDomainModel>(
            searchedWeatherRepository.getSearchedWeatherFlow().map { mapToDomainModels(it) }
        )
    }

    private fun mapToDomainModels(results: ResultsChange<SearchedWeatherObject>): LatestWeatherSearchesDomainModel {

        val weatherSearches: List<WeatherSearchDomainModel> = results.list.map {
            WeatherSearchDomainModel(it.zipCode)
        }

        return LatestWeatherSearchesDomainModel(weatherSearches)
    }
}