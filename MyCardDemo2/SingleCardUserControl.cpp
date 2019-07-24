#include "pch.h"
#include "SingleCardUserControl.h"
#if __has_include("SingleCardUserControl.g.cpp")
#include "SingleCardUserControl.g.cpp"
#endif


using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml::Media::Animation;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::ApplicationModel::DataTransfer;
using namespace Windows::UI::Notifications;

namespace winrt::MyCardDemo2::implementation
{
	SingleCardUserControl::SingleCardUserControl() {
		InitializeComponent();
		cardTitleVM = winrt::make<MyCardDemo2::implementation::CardViewModel>();
		dragCardContent = winrt::make<MyCardDemo2::implementation::CardModel>();
		
	}

	MyCardDemo2::CardViewModel SingleCardUserControl::CardTitleVM()
	{
		return cardTitleVM;
	}


	void SingleCardUserControl::CardTitleVM(MyCardDemo2::CardViewModel value)
	{
		hstring title = value.HeaderTitle();
		hstring cardId = value.CardId();
		IObservableVector<Windows::Foundation::IInspectable> contents = value.Contents();
		cardTitleVM.HeaderTitle(title);
		cardTitleVM.CardId(cardId);
		//cardTitleVM.Contents().Append(winrt::make<MyCardDemo2::implementation::CardModel>(L"", L"123", L"", L"", L""));
		cardTitleVM.Contents(contents);
	}

	winrt::event_token SingleCardUserControl::MyDeleteEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel> const& handler)
	{
		deleteList_eventToken = deleteCardListEvent.add(handler);
		return deleteList_eventToken;
	}
	void SingleCardUserControl::MyDeleteEventHandler(winrt::event_token const& token) noexcept
	{
		deleteCardListEvent.remove(token);
	}

	winrt::event_token SingleCardUserControl::ListViewChangeItemEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardModel> const& handler)
	{
		changeItem_eventToken = listViewChangeItemEvent.add(handler);
		return changeItem_eventToken;
	}
	void SingleCardUserControl::ListViewChangeItemEventHandler(winrt::event_token const& token) noexcept
	{
		listViewChangeItemEvent.remove(token);
	}
	winrt::event_token SingleCardUserControl::ListViewAddItemEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel> const& handler)
	{
		addItem_eventToken = listViewaddItemEvent.add(handler);
		return addItem_eventToken;
	}
	void SingleCardUserControl::ListViewAddItemEventHandler(winrt::event_token const& token) noexcept
	{
		listViewaddItemEvent.remove(token);
	}

}


void winrt::MyCardDemo2::implementation::SingleCardUserControl::AddImage_Tapped_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e)
{
	auto content = Window::Current().Content();
	Windows::UI::Xaml::Controls::Frame rootFrame = content.try_as<Windows::UI::Xaml::Controls::Frame>();
	auto m_suppress = DrillInNavigationTransitionInfo();
	//animation
	rootFrame.Navigate(xaml_typename<MyCardDemo2::AddCardContentPage>(), cardTitleVM, m_suppress);

	//cardTitleVM.Contents().Append(winrt::make<MyCardDemo2::implementation::CardModel>(L"", L"123", L"", L"", L""));

}


void winrt::MyCardDemo2::implementation::SingleCardUserControl::CardContentNum_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{

}

//delete list
void winrt::MyCardDemo2::implementation::SingleCardUserControl::DeleteImage_Tapped(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e)
{
	deleteCardListEvent(*this, cardTitleVM);
}


//delete on card
void winrt::MyCardDemo2::implementation::SingleCardUserControl::MenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	MenuFlyoutItem item = sender.try_as<MenuFlyoutItem>();
	uint32_t indexOf = 0;
	cardTitleVM.Contents().IndexOf(item.DataContext(),indexOf);
	//remove toast notification
	MyCardDemo2::CardModel model = unbox_value<MyCardDemo2::CardModel>(item.DataContext());
	if (model.ToastId() != L"") {
		IVectorView<ScheduledToastNotification> notis = ToastNotificationManager::CreateToastNotifier().GetScheduledToastNotifications();
		for (ScheduledToastNotification noti : notis) {
			if (noti.Id() == model.ToastId()) {
				ToastNotificationManager::CreateToastNotifier().RemoveFromSchedule(noti);
			}
		}
	}
	cardTitleVM.Contents().RemoveAt(indexOf);
	

}


void winrt::MyCardDemo2::implementation::SingleCardUserControl::CardContentListView_DragOver(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::DragEventArgs const& e)
{
	e.AcceptedOperation(DataPackageOperation::Copy);
}


void winrt::MyCardDemo2::implementation::SingleCardUserControl::CardContentListView_Drop(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::DragEventArgs const& e)
{
	listViewaddItemEvent(*this, cardTitleVM);
}


void winrt::MyCardDemo2::implementation::SingleCardUserControl::CardContentListView_DragItemsStarting(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs const& e)
{
	IVector<IInspectable> lists = e.Items();
	dragCardContent = lists.GetAt(0).as<MyCardDemo2::CardModel>();
	listViewChangeItemEvent(*this, dragCardContent);
}


void winrt::MyCardDemo2::implementation::SingleCardUserControl::CardContentListView_DragItemsCompleted(winrt::Windows::UI::Xaml::Controls::ListViewBase const& sender, winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs const& args)
{
	if (args.DropResult() == DataPackageOperation::Copy) {
		uint32_t indexOf = 0;
		cardTitleVM.Contents().IndexOf(dragCardContent, indexOf);
		cardTitleVM.Contents().RemoveAt(indexOf);
	}
	else if (args.DropResult() == DataPackageOperation::Move)
	{
		
	}
}

