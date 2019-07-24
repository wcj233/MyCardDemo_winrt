#pragma once
#include "App.xaml.g.h"
#include "winrt/Windows.Foundation.h"
#include "MainPage.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::MyCardDemo2::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const&);
		void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);
        void OnNavigationFailed(IInspectable const&, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const&);
	//private:
		//Windows::Foundation::IAsyncAction myName(MyCardDemo2::MainPage page, Windows::ApplicationModel::SuspendingDeferral deferral);
    };
}
