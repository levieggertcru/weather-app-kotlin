package com.example.weatherapp.share.data.weatherapirepository.api.methods

import com.example.weatherapp.share.data.weatherapirepository.api.environment.WeatherAPIEnvironment
import com.example.weatherapp.share.data.weatherrepository.WeatherDataModel
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface
import com.example.weatherapp.share.interfaces.networkrequester.NetworkRequesterInterface

class WeatherAPICurrentWeatherMethod(
    private val networkRequester: NetworkRequesterInterface,
    private val environment: WeatherAPIEnvironment
) {

    fun getCurrent(zipCode: String, completion: (currentWeather: WeatherDataModel) -> Unit): CancellableInterface {

        val apiKey: String = environment.apiKey
        val q: String = zipCode

        val urlString: String = environment.baseUrl + "/" + "v1/current.json" + "?key=$apiKey&q=$q"

        return networkRequester.sendGetRequest(urlString, {

            val weatherObject: Map<String, Any> = it.firstOrNull() ?: emptyMap()

            val locationObject: Map<String, Any> = anyToMap(weatherObject["location"])
            val currentObject: Map<String, Any> = anyToMap(weatherObject["current"])

            val currentWeather = WeatherDataModel(
                (locationObject["name"] as? String) ?: "",
                (locationObject["region"] as? String) ?: "",
                (currentObject["temp_f"] as? Double)
            )

            completion(currentWeather)
        })
    }

    private fun anyToMap(anyObject: Any?): Map<String, Any> {

        anyObject?.let {

            if ((it as? Map<String, Any>) != null) {
                return it
            }
        }

        return emptyMap()
    }
}