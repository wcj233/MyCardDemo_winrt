#pragma once
#include "SingleCardUserControl.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct SingleCardUserControl : SingleCardUserControlT<SingleCardUserControl>
    {
        SingleCardUserControl() = default;

        MyCardDemo2::CardViewModel CardTitleVM();
        void CardTitleVM(MyCardDemo2::CardViewModel value);
        winrt::event_token MyDeleteEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel> const& handler);
        void MyDeleteEventHandler(winrt::event_token const& token) noexcept;
        winrt::event_token ListViewChangeItemEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardModel> const& handler);
        void ListViewChangeItemEventHandler(winrt::event_token const& token) noexcept;
        winrt::event_token ListViewAddItemEventHandler(Windows::Foundation::EventHandler<MyCardDemo2::CardViewModel> const& handler);
        void ListViewAddItemEventHandler(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::MyCardDemo2::factory_implementation
{
    struct SingleCardUserControl : SingleCardUserControlT<SingleCardUserControl, implementation::SingleCardUserControl>
    {
    };
}
