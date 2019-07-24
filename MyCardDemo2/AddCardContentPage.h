#pragma once
#include "AddCardContentPage.g.h"
#include "CardViewModel.h"
#include "CardModel.h"
#include <chrono>
#include <winrt/Windows.UI.Notifications.h>
#include <winrt/Windows.Data.Xml.Dom.h>

namespace winrt::MyCardDemo2::implementation
{
    struct AddCardContentPage : AddCardContentPageT<AddCardContentPage>
    {
        AddCardContentPage();

		MyCardDemo2::CardViewModel AddCardTitleVM();
		void AddCardTitleVM(MyCardDemo2::CardViewModel value);

		void Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
		void MyColorPicker_ColorChanged(winrt::Windows::UI::Xaml::Controls::ColorPicker const& sender, winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs const& args);
		void AlarmTime_SelectedTimeChanged(winrt::Windows::UI::Xaml::Controls::TimePicker const& sender, winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs const& args);
		void AddCardContentPage::OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e);
	private:
		hstring myColorString;
		hstring selectedAlarmTime;
		MyCardDemo2::CardViewModel myCardVM{ nullptr };
	};
}
namespace winrt::MyCardDemo2::factory_implementation
{
    struct AddCardContentPage : AddCardContentPageT<AddCardContentPage, implementation::AddCardContentPage>
    {
    };
}
