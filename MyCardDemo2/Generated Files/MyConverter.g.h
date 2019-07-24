// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#pragma once
#include "winrt/MyCardDemo2.h"
#include "winrt/Windows.UI.Xaml.Data.h"
namespace winrt::MyCardDemo2::implementation
{
    template <typename D, typename... I>
    struct WINRT_EBO MyConverter_base : implements<D, MyCardDemo2::MyConverter, Windows::UI::Xaml::Data::IValueConverter, I...>
    {
        using base_type = MyConverter_base;
        using class_type = MyCardDemo2::MyConverter;
        using implements_type = typename MyConverter_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"MyCardDemo2.MyConverter";
        }
    };
}
namespace winrt::MyCardDemo2::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct WINRT_EBO MyConverterT : implements<D, Windows::Foundation::IActivationFactory, I...>
    {
        using instance_type = MyCardDemo2::MyConverter;

        hstring GetRuntimeClassName() const
        {
            return L"MyCardDemo2.MyConverter";
        }
        auto ActivateInstance() const
        {
            return make<T>();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_MYCONVERTER_XAML_G_H) || __has_include("MyConverter.xaml.g.h")
#include "MyConverter.xaml.g.h"
#else

namespace winrt::MyCardDemo2::implementation
{
    template <typename D, typename... I>
    using MyConverterT = MyConverter_base<D, I...>;
}

#endif
