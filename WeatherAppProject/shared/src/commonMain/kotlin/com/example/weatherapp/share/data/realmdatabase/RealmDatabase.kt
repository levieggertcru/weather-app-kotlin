package com.example.weatherapp.share.data.realmdatabase

import io.realm.kotlin.Realm
import io.realm.kotlin.RealmConfiguration
import io.realm.kotlin.types.TypedRealmObject
import kotlin.reflect.KClass

open class RealmDatabase(schema: Set<KClass<out TypedRealmObject>>) {

    private val config: RealmConfiguration

    init {

        config = RealmConfiguration.create(
            schema = schema
        )
    }

    fun openRealm(): Realm {
        return Realm.open(config)
    }
}