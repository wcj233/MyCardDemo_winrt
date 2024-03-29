// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_System_Diagnostics_DevicePortal_1_H
#define WINRT_Windows_System_Diagnostics_DevicePortal_1_H
#include "winrt/impl/Windows.System.Diagnostics.DevicePortal.0.h"
namespace winrt::Windows::System::Diagnostics::DevicePortal
{
    struct WINRT_EBO IDevicePortalConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePortalConnection>
    {
        IDevicePortalConnection(std::nullptr_t = nullptr) noexcept {}
        IDevicePortalConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDevicePortalConnectionClosedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePortalConnectionClosedEventArgs>
    {
        IDevicePortalConnectionClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDevicePortalConnectionClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDevicePortalConnectionRequestReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePortalConnectionRequestReceivedEventArgs>
    {
        IDevicePortalConnectionRequestReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDevicePortalConnectionRequestReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDevicePortalConnectionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePortalConnectionStatics>
    {
        IDevicePortalConnectionStatics(std::nullptr_t = nullptr) noexcept {}
        IDevicePortalConnectionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDevicePortalWebSocketConnection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePortalWebSocketConnection>
    {
        IDevicePortalWebSocketConnection(std::nullptr_t = nullptr) noexcept {}
        IDevicePortalWebSocketConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDevicePortalWebSocketConnectionRequestReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePortalWebSocketConnectionRequestReceivedEventArgs>
    {
        IDevicePortalWebSocketConnectionRequestReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDevicePortalWebSocketConnectionRequestReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
