package com.example.weatherapp.features.myweatherlist.domain.usecases

import com.example.weatherapp.features.myweatherlist.domain.entities.ViewMyWeatherListDomainModel
import com.example.weatherapp.features.myweatherlist.domain.entities.WeatherListItemDomainModel

class ViewMyWeatherListUseCase {

    fun view(): ViewMyWeatherListDomainModel {

        val spokane = WeatherListItemDomainModel("0", "Spokane, WA", "52")
        val phoenix = WeatherListItemDomainModel("1", "Phoenix, AZ", "130")
        val fortLauderdale = WeatherListItemDomainModel("2", "Fort Lauderdale, FL", "82")

        val items = listOf<WeatherListItemDomainModel>(spokane, phoenix, fortLauderdale)

        return ViewMyWeatherListDomainModel(items)
    }
}