// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Phone_Devices_Notification_1_H
#define WINRT_Windows_Phone_Devices_Notification_1_H
#include "winrt/impl/Windows.Phone.Devices.Notification.0.h"
namespace winrt::Windows::Phone::Devices::Notification
{
    struct WINRT_EBO IVibrationDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVibrationDevice>
    {
        IVibrationDevice(std::nullptr_t = nullptr) noexcept {}
        IVibrationDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IVibrationDeviceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVibrationDeviceStatics>
    {
        IVibrationDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        IVibrationDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
