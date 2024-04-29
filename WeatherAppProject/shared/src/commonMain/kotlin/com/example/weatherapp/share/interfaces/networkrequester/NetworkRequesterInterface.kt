package com.example.weatherapp.share.interfaces.networkrequester

interface NetworkRequesterInterface {

    fun sendGetRequest(url: String, completion: (jsonObjects: List<Map<String, Any>>) -> Unit)
}