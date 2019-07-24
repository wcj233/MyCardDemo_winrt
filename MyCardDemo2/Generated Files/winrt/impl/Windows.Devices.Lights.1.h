// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Lights_1_H
#define WINRT_Windows_Devices_Lights_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Lights.0.h"
namespace winrt::Windows::Devices::Lights
{
    struct WINRT_EBO ILamp :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILamp>,
        impl::require<Windows::Devices::Lights::ILamp, Windows::Foundation::IClosable>
    {
        ILamp(std::nullptr_t = nullptr) noexcept {}
        ILamp(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ILampArray :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILampArray>
    {
        ILampArray(std::nullptr_t = nullptr) noexcept {}
        ILampArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ILampArrayStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILampArrayStatics>
    {
        ILampArrayStatics(std::nullptr_t = nullptr) noexcept {}
        ILampArrayStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ILampAvailabilityChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILampAvailabilityChangedEventArgs>
    {
        ILampAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILampAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ILampInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILampInfo>
    {
        ILampInfo(std::nullptr_t = nullptr) noexcept {}
        ILampInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ILampStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILampStatics>
    {
        ILampStatics(std::nullptr_t = nullptr) noexcept {}
        ILampStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
