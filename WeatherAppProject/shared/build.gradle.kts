import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    id("io.realm.kotlin") version "1.11.0" // realm

    //kotlin("multiplatform")
    //kotlin("native.cocoapods")
}

kotlin {

    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    val xcframeworkName = "shared"
    val xcf = XCFramework()

    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {

            baseName = xcframeworkName

            // Specify CFBundleIdentifier to uniquely identify the framework
            binaryOption("bundleId", "org.example.${xcframeworkName}")

            xcf.add(this)
            isStatic = true
        }
    }

    /*
    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.staticLib {
            baseName = "shared"
        }
    }

    cocoapods {
        version = "0.4.1"
        summary = ""
        homepage = ""
        name = "WeatherApp"

        framework {

            baseName = "shared"
            isStatic = true
            export(project(":shared"))
            transitiveExport = false
        }
    }*/

    sourceSets {
        commonMain.dependencies {
            //put your multiplatform dependencies here
            implementation("org.jetbrains.kotlinx:kotlinx-datetime:0.4.0")
            implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.5.2")

            // realm
            implementation("io.realm.kotlin:library-base:1.11.0")
            implementation("io.realm.kotlin:library-sync:1.11.0") // If using Device Sync
            implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.7.0") // If using coroutines with the SDK
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
