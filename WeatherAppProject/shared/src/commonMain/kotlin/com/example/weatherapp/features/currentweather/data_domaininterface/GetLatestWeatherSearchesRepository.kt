package com.example.weatherapp.features.currentweather.data_domaininterface

import com.example.weatherapp.features.currentweather.domain.entities.WeatherSearchDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetLatestWeatherSearchesRepositoryInterface
import com.example.weatherapp.share.common.cancellablejob.CancellableJob
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper
import com.example.weatherapp.share.data.appdatabase.schema.SearchedWeatherObject
import com.example.weatherapp.share.data.searchedweatherrepository.SearchedWeatherRepository
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface
import io.realm.kotlin.notifications.ResultsChange
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.launch

class GetLatestWeatherSearchesRepository(
    private val searchedWeatherRepository: SearchedWeatherRepository
): GetLatestWeatherSearchesRepositoryInterface {

    override fun getSearches(): FlowWrapper<List<WeatherSearchDomainModel>> {

        return FlowWrapper<List<WeatherSearchDomainModel>>(
            searchedWeatherRepository.getSearchedWeatherFlow().map { mapToDomainModels(it) }
        )
    }

    private fun mapToDomainModels(results: ResultsChange<SearchedWeatherObject>): List<WeatherSearchDomainModel> {

        val weatherSearches: List<WeatherSearchDomainModel> = results.list.map {
            WeatherSearchDomainModel(it.zipCode)
        }

        return weatherSearches
    }
}