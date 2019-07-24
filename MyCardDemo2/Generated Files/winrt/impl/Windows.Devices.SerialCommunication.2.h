// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_SerialCommunication_2_H
#define WINRT_Windows_Devices_SerialCommunication_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.SerialCommunication.1.h"
namespace winrt::Windows::Devices::SerialCommunication
{
    struct WINRT_EBO ErrorReceivedEventArgs : Windows::Devices::SerialCommunication::IErrorReceivedEventArgs
    {
        ErrorReceivedEventArgs(std::nullptr_t) noexcept {}
        ErrorReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SerialCommunication::IErrorReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PinChangedEventArgs : Windows::Devices::SerialCommunication::IPinChangedEventArgs
    {
        PinChangedEventArgs(std::nullptr_t) noexcept {}
        PinChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SerialCommunication::IPinChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SerialDevice : Windows::Devices::SerialCommunication::ISerialDevice
    {
        SerialDevice(std::nullptr_t) noexcept {}
        SerialDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SerialCommunication::ISerialDevice(ptr, take_ownership_from_abi) {}
        static hstring GetDeviceSelector();
        static hstring GetDeviceSelector(param::hstring const& portName);
        static hstring GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> FromIdAsync(param::hstring const& deviceId);
    };
}
#endif
