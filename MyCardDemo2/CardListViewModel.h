#pragma once
#include "CardListViewModel.g.h"
#include "winrt/Windows.Data.Json.h"
#include "CardViewModel.h"

namespace winrt::MyCardDemo2::implementation
{
    struct CardListViewModel : CardListViewModelT<CardListViewModel>
    {
        CardListViewModel();
		CardListViewModel(winrt::hstring jsonString);

        hstring Stringify();
        Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> CardLists();
        void CardLists(Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> value);
	private:
		winrt::hstring cardListsKey = L"cardLists";
		Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> cardLists;
    };
}
