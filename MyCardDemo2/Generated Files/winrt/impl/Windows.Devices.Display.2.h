// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Display_2_H
#define WINRT_Windows_Devices_Display_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Display.1.h"
namespace winrt::Windows::Devices::Display
{
    struct WINRT_EBO DisplayMonitor : Windows::Devices::Display::IDisplayMonitor
    {
        DisplayMonitor(std::nullptr_t) noexcept {}
        DisplayMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::IDisplayMonitor(ptr, take_ownership_from_abi) {}
        static hstring GetDeviceSelector();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> FromIdAsync(param::hstring const& deviceId);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> FromInterfaceIdAsync(param::hstring const& deviceInterfaceId);
    };
}
#endif
