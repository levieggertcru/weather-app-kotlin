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
            url: "https://github.com/levieggertcru/weather-app-kotlin/tree/main/XCFrameworks/release/6ba9f7879f93ecb3181d61e4c26086e129ba854278f43e2439c3ada786606c9a/shared.xcframework.zip", 
            checksum: "6ba9f7879f93ecb3181d61e4c26086e129ba854278f43e2439c3ada786606c9a"
        )
    ]
)
