package com.example.weatherapp.share.interfaces.networkrequester

import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface

interface NetworkRequesterInterface {

    fun sendGetRequest(url: String, completion: (jsonObjects: List<Map<String, Any>>) -> Unit): CancellableInterface
}