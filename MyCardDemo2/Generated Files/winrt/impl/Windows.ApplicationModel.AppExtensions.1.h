// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_AppExtensions_1_H
#define WINRT_Windows_ApplicationModel_AppExtensions_1_H
#include "winrt/impl/Windows.ApplicationModel.AppExtensions.0.h"
namespace winrt::Windows::ApplicationModel::AppExtensions
{
    struct WINRT_EBO IAppExtension :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtension>
    {
        IAppExtension(std::nullptr_t = nullptr) noexcept {}
        IAppExtension(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAppExtensionCatalog :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionCatalog>
    {
        IAppExtensionCatalog(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionCatalog(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAppExtensionCatalogStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionCatalogStatics>
    {
        IAppExtensionCatalogStatics(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionCatalogStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAppExtensionPackageInstalledEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageInstalledEventArgs>
    {
        IAppExtensionPackageInstalledEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageInstalledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAppExtensionPackageStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageStatusChangedEventArgs>
    {
        IAppExtensionPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAppExtensionPackageUninstallingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageUninstallingEventArgs>
    {
        IAppExtensionPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageUninstallingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAppExtensionPackageUpdatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageUpdatedEventArgs>
    {
        IAppExtensionPackageUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAppExtensionPackageUpdatingEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppExtensionPackageUpdatingEventArgs>
    {
        IAppExtensionPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppExtensionPackageUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
