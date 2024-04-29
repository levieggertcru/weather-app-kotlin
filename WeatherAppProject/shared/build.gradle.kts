import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
}

kotlin {

    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    val xcf = XCFramework()
    val iosTargets = listOf(iosX64(), iosArm64(), iosSimulatorArm64())

    iosTargets.forEach {
        it.binaries.framework {
            baseName = "shared"
            xcf.add(this)
        }
    }

    sourceSets {
        commonMain.dependencies {
            //put your multiplatform dependencies here
            implementation("org.jetbrains.kotlinx:kotlinx-datetime:0.4.0")
            implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.5.2")
        }
        commonTest.dependencies {
            implementation(libs.kotlin.test)
        }
    }

    task("testClasses")
}

android {
    namespace = "com.example.weatherapp"
    compileSdk = 34
    defaultConfig {
        minSdk = 26
    }
}
