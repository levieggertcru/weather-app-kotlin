package com.example.weatherapp.features.currentweather.data_domaininterface

import com.example.weatherapp.features.currentweather.domain.entities.CurrentWeatherDomainModel
import com.example.weatherapp.features.currentweather.domain.interfaces.GetCurrentWeatherRepositoryInterface
import com.example.weatherapp.share.common.flowwrapper.FlowWrapper
import com.example.weatherapp.share.data.weatherrepository.WeatherRepository
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.callbackFlow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.launch

class GetCurrentWeatherRepository(
    private val weatherRepository: WeatherRepository
): GetCurrentWeatherRepositoryInterface {

    override fun getCurrentWeather(zipCode: String): FlowWrapper<CurrentWeatherDomainModel> {

        return FlowWrapper(getCurrentWeatherFlow(zipCode))
    }

    private fun getCurrentWeatherFlow(zipCode: String): Flow<CurrentWeatherDomainModel> = callbackFlow {

        getCurrentWeather(zipCode) {
            trySend(it)
        }
    }

    private fun getCurrentWeather(zipCode: String, completion: (currentWeather: CurrentWeatherDomainModel) -> Unit): CancellableInterface {

        return weatherRepository.getCurrentWeather(zipCode, {

            val currentWeather = CurrentWeatherDomainModel(
                it.locationName,
                it.locationRegion,
                it.tempFahrenheit.toString() + " degrees fahrenheit"
            )

            completion(currentWeather)
        })
    }
}