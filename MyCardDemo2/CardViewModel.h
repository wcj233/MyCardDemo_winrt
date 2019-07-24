#pragma once
#include "CardViewModel.g.h"
#include "winrt/Windows.Data.Json.h"
#include "CardModel.h"

namespace winrt::MyCardDemo2::implementation
{
	struct CardViewModel : CardViewModelT<CardViewModel>
	{
		CardViewModel();
		CardViewModel(winrt::hstring const& m_cardId, winrt::hstring const& m_headerTitle, Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> const& m_contents);
		CardViewModel(Windows::Data::Json::JsonObject myJsonObject);

		winrt::hstring CardId();
		void CardId(winrt::hstring value);
		winrt::hstring HeaderTitle();
		void HeaderTitle(winrt::hstring value);
		Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> Contents();
		void Contents(Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> const& value);
		winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
		void PropertyChanged(winrt::event_token const& token) noexcept;
		hstring Stringify();
		Windows::Data::Json::JsonObject ToJsonObject();

	private:
		winrt::hstring cardId;
		winrt::hstring headerTitle;
		Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> contents;
		winrt::event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;

		winrt::hstring cardIdKey = L"cardId";
		winrt::hstring headerTitleKey = L"headerTitle";
		winrt::hstring contentsKey = L"contents";
		winrt::hstring cardVMKey = L"cardVM";

		Windows::Data::Json::JsonObject myToJsonObject;
		winrt::hstring myStringify;
	};
}
