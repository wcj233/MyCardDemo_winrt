#pragma once
#include "AddCardContentPage.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct AddCardContentPage : AddCardContentPageT<AddCardContentPage>
    {
        AddCardContentPage() = default;

        MyCardDemo2::CardViewModel AddCardTitleVM();
        void AddCardTitleVM(MyCardDemo2::CardViewModel value);
    };
}
namespace winrt::MyCardDemo2::factory_implementation
{
    struct AddCardContentPage : AddCardContentPageT<AddCardContentPage, implementation::AddCardContentPage>
    {
    };
}
