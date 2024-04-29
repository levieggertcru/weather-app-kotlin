import SwiftUI
import shared

@main
struct iOSApp: App {
	
    var body: some Scene {
		
        WindowGroup {
            
            let viewModel = WeatherListViewModel(
                viewMyWeatherListUseCase: ViewMyWeatherListUseCase()
            )
            
			WeatherListView(viewModel: viewModel)
		}
	}
}
