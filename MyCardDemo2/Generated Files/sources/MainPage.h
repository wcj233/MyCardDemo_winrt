#pragma once
#include "MainPage.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage() = default;

        MyCardDemo2::CardListViewModel CardListVM();
        void CardListVM(MyCardDemo2::CardListViewModel value);
    };
}
namespace winrt::MyCardDemo2::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
