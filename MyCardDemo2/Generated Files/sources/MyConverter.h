#pragma once
#include "MyConverter.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct MyConverter : MyConverterT<MyConverter>
    {
        MyConverter() = default;

        Windows::Foundation::IInspectable Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language);
        Windows::Foundation::IInspectable ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language);
    };
}
namespace winrt::MyCardDemo2::factory_implementation
{
    struct MyConverter : MyConverterT<MyConverter, implementation::MyConverter>
    {
    };
}
