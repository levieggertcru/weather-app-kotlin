package com.example.weatherapp.share.data.appdatabase

import com.example.weatherapp.share.data.appdatabase.schema.SearchedWeatherObject
import com.example.weatherapp.share.data.realmdatabase.RealmDatabase
import io.realm.kotlin.types.TypedRealmObject
import kotlin.reflect.KClass

class AppDatabase: RealmDatabase(schema = setOf(
    SearchedWeatherObject::class
)) {

}