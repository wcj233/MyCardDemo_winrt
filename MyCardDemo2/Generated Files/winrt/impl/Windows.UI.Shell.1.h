// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_UI_Shell_1_H
#define WINRT_Windows_UI_Shell_1_H
#include "winrt/impl/Windows.UI.Shell.0.h"
namespace winrt::Windows::UI::Shell
{
    struct WINRT_EBO IAdaptiveCard :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCard>
    {
        IAdaptiveCard(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IAdaptiveCardBuilderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCardBuilderStatics>
    {
        IAdaptiveCardBuilderStatics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCardBuilderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ISecurityAppManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISecurityAppManager>
    {
        ISecurityAppManager(std::nullptr_t = nullptr) noexcept {}
        ISecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ITaskbarManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager>
    {
        ITaskbarManager(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ITaskbarManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager2>,
        impl::require<Windows::UI::Shell::ITaskbarManager2, Windows::UI::Shell::ITaskbarManager>
    {
        ITaskbarManager2(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ITaskbarManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManagerStatics>
    {
        ITaskbarManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
