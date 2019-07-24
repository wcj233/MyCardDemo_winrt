// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Custom_1_H
#define WINRT_Windows_Devices_Custom_1_H
#include "winrt/impl/Windows.Devices.Custom.0.h"
namespace winrt::Windows::Devices::Custom
{
    struct WINRT_EBO ICustomDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomDevice>
    {
        ICustomDevice(std::nullptr_t = nullptr) noexcept {}
        ICustomDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICustomDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomDeviceStatics>
    {
        ICustomDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        ICustomDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IIOControlCode :
        Windows::Foundation::IInspectable,
        impl::consume_t<IIOControlCode>
    {
        IIOControlCode(std::nullptr_t = nullptr) noexcept {}
        IIOControlCode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IIOControlCodeFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IIOControlCodeFactory>
    {
        IIOControlCodeFactory(std::nullptr_t = nullptr) noexcept {}
        IIOControlCodeFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IKnownDeviceTypesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IKnownDeviceTypesStatics>
    {
        IKnownDeviceTypesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownDeviceTypesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
