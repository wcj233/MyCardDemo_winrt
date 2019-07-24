#pragma once
#include "CardViewModel.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct CardViewModel : CardViewModelT<CardViewModel>
    {
        CardViewModel() = default;

        hstring CardId();
        void CardId(hstring value);
        hstring HeaderTitle();
        void HeaderTitle(hstring value);
        Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> Contents();
        void Contents(Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> value);
        hstring Stringify();
        Windows::Data::Json::JsonObject ToJsonObject();
        winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;
    };
}
