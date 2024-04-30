package com.example.weatherapp.share.common.cancellablejob

import com.example.weatherapp.share.interfaces.cancellable.CancellableInterface
import kotlinx.coroutines.Job

class CancellableJob(private val job: Job): CancellableInterface {

    override fun cancel() {
        job.cancel()
    }
}