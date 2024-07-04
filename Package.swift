// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "WeatherAppKotlin",
    platforms: [
        .iOS(.v16)
    ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "WeatherAppKotlin",
            targets: ["WeatherAppKotlin", "WeatherAppKotlinBinaryPackage"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .target(
            name: "WeatherAppKotlin"),
        .testTarget(
            name: "WeatherAppKotlinTests",
            dependencies: ["WeatherAppKotlin"]),
        .binaryTarget(
            name: "WeatherAppKotlinBinaryPackage", 
            url: "https://github.com/levieggertcru/weather-app-kotlin/tree/main/XCFrameworks/release/e1b5d35a9c2deedc3067f4ca85bf248158776c86ea71330db924505789e2df12/shared.xcframework.zip", 
            checksum: "e1b5d35a9c2deedc3067f4ca85bf248158776c86ea71330db924505789e2df12"
        )
    ]
)
