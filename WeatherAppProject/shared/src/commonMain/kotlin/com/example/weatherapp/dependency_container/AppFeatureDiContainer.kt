package com.example.weatherapp.dependency_container

import com.example.weatherapp.features.currentweather.dependency_container.CurrentWeatherDiContainer

class AppFeatureDiContainer(
    val currentWeather: CurrentWeatherDiContainer
) {

}