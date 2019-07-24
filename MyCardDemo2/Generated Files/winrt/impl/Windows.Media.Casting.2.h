// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Media_Casting_2_H
#define WINRT_Windows_Media_Casting_2_H
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Casting.1.h"
namespace winrt::Windows::Media::Casting
{
    struct WINRT_EBO CastingConnection : Windows::Media::Casting::ICastingConnection
    {
        CastingConnection(std::nullptr_t) noexcept {}
        CastingConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Casting::ICastingConnection(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CastingConnectionErrorOccurredEventArgs : Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs
    {
        CastingConnectionErrorOccurredEventArgs(std::nullptr_t) noexcept {}
        CastingConnectionErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CastingDevice : Windows::Media::Casting::ICastingDevice
    {
        CastingDevice(std::nullptr_t) noexcept {}
        CastingDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Casting::ICastingDevice(ptr, take_ownership_from_abi) {}
        static hstring GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes const& type);
        static Windows::Foundation::IAsyncOperation<hstring> GetDeviceSelectorFromCastingSourceAsync(Windows::Media::Casting::CastingSource const& castingSource);
        static Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> FromIdAsync(param::hstring const& value);
        static Windows::Foundation::IAsyncOperation<bool> DeviceInfoSupportsCastingAsync(Windows::Devices::Enumeration::DeviceInformation const& device);
    };
    struct WINRT_EBO CastingDevicePicker : Windows::Media::Casting::ICastingDevicePicker
    {
        CastingDevicePicker(std::nullptr_t) noexcept {}
        CastingDevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Casting::ICastingDevicePicker(ptr, take_ownership_from_abi) {}
        CastingDevicePicker();
    };
    struct WINRT_EBO CastingDevicePickerFilter : Windows::Media::Casting::ICastingDevicePickerFilter
    {
        CastingDevicePickerFilter(std::nullptr_t) noexcept {}
        CastingDevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Casting::ICastingDevicePickerFilter(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CastingDeviceSelectedEventArgs : Windows::Media::Casting::ICastingDeviceSelectedEventArgs
    {
        CastingDeviceSelectedEventArgs(std::nullptr_t) noexcept {}
        CastingDeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Casting::ICastingDeviceSelectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CastingSource : Windows::Media::Casting::ICastingSource
    {
        CastingSource(std::nullptr_t) noexcept {}
        CastingSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Casting::ICastingSource(ptr, take_ownership_from_abi) {}
    };
}
#endif
