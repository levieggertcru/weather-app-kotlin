package com.example.weatherapp

import platform.Foundation.NSUUID

class IOSUUIDString: UUIDString {
    override fun newUUIDString(): String {
        return NSUUID().UUIDString()
    }
}

actual fun getUUIDString(): UUIDString = IOSUUIDString()