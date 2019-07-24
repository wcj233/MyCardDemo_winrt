#pragma once
#include "CardModel.h"
#include "MainPage.g.h"
#include "CardViewModel.h"
#include "CardListViewModel.h"
#include <winrt/coroutine.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Foundation.h>
#include "winrt/Windows.Data.Json.h"
#include <time.h>
#include <winrt/Windows.UI.Notifications.h>
#include <winrt/Windows.Data.Xml.Dom.h>
//#include <SingleCardUserControl.h>

namespace winrt::MyCardDemo2::implementation
{
	/*public static MyCardDemo2::MainPage Current();*/
	struct MainPage : MainPageT<MainPage>
	{
		MainPage();
	public:
		//static MyCardDemo2::MainPage mycurrent;
		MyCardDemo2::CardListViewModel CardListVM();
		void CardListVM(MyCardDemo2::CardListViewModel value);
		void AddListButton_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
		void AddSuccess_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
		Windows::Foundation::IAsyncAction getJsonFile();

	private:
		MyCardDemo2::CardListViewModel cardListViewModel{ nullptr };
		Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> cardLists{ nullptr };
		Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> cardUCLists{ nullptr };
		MyCardDemo2::CardModel dragCardContent{ nullptr };
		Windows::Foundation::IAsyncAction MainPage::DeleteCardList(int index, std::string headTitle);
		MyCardDemo2::CardViewModel originalCardTitleVM{ nullptr };
		hstring tbname;
		//MyCardDemo2::MainPage current;
	public:
		void SureButton_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e);
		void Image_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e);
	};
}

namespace winrt::MyCardDemo2::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
