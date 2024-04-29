package com.example.weatherapp

interface UUIDString {
    fun newUUIDString(): String
}

expect fun getUUIDString(): UUIDString