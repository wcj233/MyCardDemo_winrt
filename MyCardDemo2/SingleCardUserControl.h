#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "SingleCardUserControl.g.h"
#include "CardViewModel.h"
#include "CardModel.h"
#include "winrt/Windows.UI.Xaml.Input.h"
#include "MyConverter.h"
#include "winrt/Windows.UI.Xaml.Media.Animation.h"
#include "winrt/Windows.UI.Xaml.Shapes.h"
#include "winrt/Windows.ApplicationModel.DataTransfer.h"
#include "winrt/Windows.UI.Notifications.h"

namespace winrt::MyCardDemo2::implementation
{
	struct SingleCardUserControl : SingleCardUserControlT<SingleCardUserControl>
	{
		SingleCardUserControl();
		~SingleCardUserControl()
		{
			MyDeleteEventHandler(deleteList_eventToken);
			ListViewChangeItemEventHandler(changeItem_eventToken);
			ListViewAddItemEventHandler(addItem_eventToken);
		}

		
		MyCardDemo2::CardViewModel CardTitleVM();
		void CardTitleVM(MyCardDemo2::CardViewModel value);
		winrt::event_token MyDeleteEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel> const& handler);
		void MyDeleteEventHandler(winrt::event_token const& token) noexcept;

		winrt::event_token ListViewChangeItemEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardModel> const& handler);
		void ListViewChangeItemEventHandler(winrt::event_token const& token) noexcept;
		winrt::event_token ListViewAddItemEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel> const& handler);
		void ListViewAddItemEventHandler(winrt::event_token const& token) noexcept;

	private:
		MyCardDemo2::CardViewModel cardTitleVM{ nullptr };
		MyCardDemo2::CardModel dragCardContent{ nullptr };
		winrt::event_token deleteList_eventToken;
		winrt::event_token changeItem_eventToken;
		winrt::event_token addItem_eventToken;

	public:
		winrt::event<Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel>> deleteCardListEvent;
		winrt::event<Windows::Foundation::EventHandler<MyCardDemo2::CardModel>> listViewChangeItemEvent;
		winrt::event<Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel>> listViewaddItemEvent;
		void AddImage_Tapped_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e);
		void CardContentNum_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
		void DeleteImage_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e);
		void MenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);


		void CardContentListView_DragOver(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::DragEventArgs const& e);
		void CardContentListView_Drop(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::DragEventArgs const& e);
		void CardContentListView_DragItemsStarting(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs const& e);
		void CardContentListView_DragItemsCompleted(winrt::Windows::UI::Xaml::Controls::ListViewBase const& sender, winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs const& args);
	};

}

namespace winrt::MyCardDemo2::factory_implementation
{
    struct SingleCardUserControl : SingleCardUserControlT<SingleCardUserControl, implementation::SingleCardUserControl>
    {
    };
}
