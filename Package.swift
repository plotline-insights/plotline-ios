// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Plotline",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "Plotline",
            targets: ["Plotline"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .binaryTarget(
            name: "Plotline",
            path: "Plotline.xcframework")
    ]
)
