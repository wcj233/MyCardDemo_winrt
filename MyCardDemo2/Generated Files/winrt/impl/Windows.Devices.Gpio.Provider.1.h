// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Gpio_Provider_1_H
#define WINRT_Windows_Devices_Gpio_Provider_1_H
#include "winrt/impl/Windows.Devices.Gpio.Provider.0.h"
namespace winrt::Windows::Devices::Gpio::Provider
{
    struct WINRT_EBO IGpioControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioControllerProvider>
    {
        IGpioControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IGpioControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGpioPinProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioPinProvider>
    {
        IGpioPinProvider(std::nullptr_t = nullptr) noexcept {}
        IGpioPinProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGpioPinProviderValueChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioPinProviderValueChangedEventArgs>
    {
        IGpioPinProviderValueChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGpioPinProviderValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGpioPinProviderValueChangedEventArgsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioPinProviderValueChangedEventArgsFactory>
    {
        IGpioPinProviderValueChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
        IGpioPinProviderValueChangedEventArgsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IGpioProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGpioProvider>
    {
        IGpioProvider(std::nullptr_t = nullptr) noexcept {}
        IGpioProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
