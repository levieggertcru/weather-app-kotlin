package com.example.weatherapp.share.data.weatherapirepository.api.environment

class WeatherAPIEnvironment(
    val apiKey: String,
    val baseUrl: String
) {

    companion object {
        fun production() : WeatherAPIEnvironment {
            return WeatherAPIEnvironment("f691573293c349ae89a185600242404", "https://api.weatherapi.com")
        }
    }
}