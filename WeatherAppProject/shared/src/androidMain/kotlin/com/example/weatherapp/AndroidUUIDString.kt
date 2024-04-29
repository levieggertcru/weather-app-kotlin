package com.example.weatherapp

import java.util.UUID

class AndroidUUIDString: UUIDString {
    override fun newUUIDString(): String {
        return UUID.randomUUID().toString()
    }
}

actual fun getUUIDString(): UUIDString = AndroidUUIDString()