package com.example.weatherapp.share.common.flowwrapper

import com.example.weatherapp.share.common.cancellablejob.CancellableJob
import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.flow.onCompletion
import kotlinx.coroutines.flow.onEach
import kotlinx.coroutines.launch

class FlowWrapper<out T>(
    val flow: Flow<T & Any>
) {

    fun collect(onEach: (T & Any) -> Unit, onCompletion: (Throwable?) -> Unit): CancellableInterface {

        val scope = CoroutineScope(Dispatchers.Default)

        val job = scope.launch {

            flow.onEach {
                onEach(it)
            }.onCompletion {
                onCompletion(it)
            }.collect()
        }

        return CancellableJob(job)
    }
}