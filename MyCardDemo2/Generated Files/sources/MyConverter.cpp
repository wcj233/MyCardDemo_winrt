#include "pch.h"
#include "MyConverter.h"
#include "MyConverter.g.cpp"

namespace winrt::MyCardDemo2::implementation
{
    Windows::Foundation::IInspectable MyConverter::Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IInspectable MyConverter::ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language)
    {
        throw hresult_not_implemented();
    }
}
