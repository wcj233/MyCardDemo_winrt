#pragma once
#include "CardListViewModel.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct CardListViewModel : CardListViewModelT<CardListViewModel>
    {
        CardListViewModel() = default;

        hstring Stringify();
        Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> CardLists();
        void CardLists(Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> value);
    };
}
