package com.example.weatherapp.share.data.appdatabase.schema

import io.realm.kotlin.types.RealmInstant
import io.realm.kotlin.types.RealmObject
import io.realm.kotlin.types.annotations.PrimaryKey
import org.mongodb.kbson.ObjectId

class SearchedWeatherObject: RealmObject {

    @PrimaryKey
    var id: String = ""

    var createdAt: RealmInstant? = null
    var zipCode: String = ""
}