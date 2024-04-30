package com.example.weatherapp.features.currentweather.domain.usecases

import com.example.weatherapp.share.common.cancellablejob.CancellableJob
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.cancel
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.launch
import kotlin.coroutines.CoroutineContext

class GetSearchedWeatherUseCase {

    private val context: CoroutineContext = Dispatchers.Main
    private val scope = CoroutineScope(context + SupervisorJob())

    fun getLatestSearches(emitValue: (value: Int) -> Unit): CancellableJob {

        val job = scope.launch {
            countNumbersFlow().collect() {
                emitValue(it)
            }
        }

        return CancellableJob(job)
    }

    private fun countNumbersFlow(): Flow<Int> = flow {

        repeat(60) {
            emit(it+1)
            delay(1000)
        }
    }
}