#pragma once
#include "XamlMetaDataProvider.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct XamlMetaDataProvider : XamlMetaDataProviderT<XamlMetaDataProvider>
    {
        XamlMetaDataProvider() = default;

        Windows::UI::Xaml::Markup::IXamlType GetXamlType(Windows::UI::Xaml::Interop::TypeName const& type);
        Windows::UI::Xaml::Markup::IXamlType GetXamlType(hstring const& fullName);
        com_array<Windows::UI::Xaml::Markup::XmlnsDefinition> GetXmlnsDefinitions();
    };
}
namespace winrt::MyCardDemo2::factory_implementation
{
    struct XamlMetaDataProvider : XamlMetaDataProviderT<XamlMetaDataProvider, implementation::XamlMetaDataProvider>
    {
    };
}
