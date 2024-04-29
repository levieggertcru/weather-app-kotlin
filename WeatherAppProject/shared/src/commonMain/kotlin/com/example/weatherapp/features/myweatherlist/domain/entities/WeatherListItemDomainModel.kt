package com.example.weatherapp.features.myweatherlist.domain.entities

import kotlinx.datetime.Clock

class WeatherListItemDomainModel constructor(val id: String, val location: String, val temperature: String) {

    val systemClockNow: String

    init {

        val systemClock: Clock = Clock.System

        systemClockNow = systemClock.now().toString()
    }
}