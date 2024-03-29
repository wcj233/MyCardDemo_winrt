// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Media_Miracast_2_H
#define WINRT_Windows_Media_Miracast_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Miracast.1.h"
namespace winrt::Windows::Media::Miracast
{
    struct WINRT_EBO MiracastReceiver : Windows::Media::Miracast::IMiracastReceiver
    {
        MiracastReceiver(std::nullptr_t) noexcept {}
        MiracastReceiver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiver(ptr, take_ownership_from_abi) {}
        MiracastReceiver();
    };
    struct WINRT_EBO MiracastReceiverApplySettingsResult : Windows::Media::Miracast::IMiracastReceiverApplySettingsResult
    {
        MiracastReceiverApplySettingsResult(std::nullptr_t) noexcept {}
        MiracastReceiverApplySettingsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverApplySettingsResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverConnection : Windows::Media::Miracast::IMiracastReceiverConnection,
        impl::require<MiracastReceiverConnection, Windows::Foundation::IClosable>
    {
        MiracastReceiverConnection(std::nullptr_t) noexcept {}
        MiracastReceiverConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverConnection(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverConnectionCreatedEventArgs : Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs
    {
        MiracastReceiverConnectionCreatedEventArgs(std::nullptr_t) noexcept {}
        MiracastReceiverConnectionCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverConnectionCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverCursorImageChannel : Windows::Media::Miracast::IMiracastReceiverCursorImageChannel
    {
        MiracastReceiverCursorImageChannel(std::nullptr_t) noexcept {}
        MiracastReceiverCursorImageChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverCursorImageChannel(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverCursorImageChannelSettings : Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings
    {
        MiracastReceiverCursorImageChannelSettings(std::nullptr_t) noexcept {}
        MiracastReceiverCursorImageChannelSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverCursorImageChannelSettings(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverDisconnectedEventArgs : Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs
    {
        MiracastReceiverDisconnectedEventArgs(std::nullptr_t) noexcept {}
        MiracastReceiverDisconnectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverDisconnectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverGameControllerDevice : Windows::Media::Miracast::IMiracastReceiverGameControllerDevice
    {
        MiracastReceiverGameControllerDevice(std::nullptr_t) noexcept {}
        MiracastReceiverGameControllerDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverGameControllerDevice(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverInputDevices : Windows::Media::Miracast::IMiracastReceiverInputDevices
    {
        MiracastReceiverInputDevices(std::nullptr_t) noexcept {}
        MiracastReceiverInputDevices(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverInputDevices(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverKeyboardDevice : Windows::Media::Miracast::IMiracastReceiverKeyboardDevice
    {
        MiracastReceiverKeyboardDevice(std::nullptr_t) noexcept {}
        MiracastReceiverKeyboardDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverKeyboardDevice(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverMediaSourceCreatedEventArgs : Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs
    {
        MiracastReceiverMediaSourceCreatedEventArgs(std::nullptr_t) noexcept {}
        MiracastReceiverMediaSourceCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverMediaSourceCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverSession : Windows::Media::Miracast::IMiracastReceiverSession,
        impl::require<MiracastReceiverSession, Windows::Foundation::IClosable>
    {
        MiracastReceiverSession(std::nullptr_t) noexcept {}
        MiracastReceiverSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverSession(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverSessionStartResult : Windows::Media::Miracast::IMiracastReceiverSessionStartResult
    {
        MiracastReceiverSessionStartResult(std::nullptr_t) noexcept {}
        MiracastReceiverSessionStartResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverSessionStartResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverSettings : Windows::Media::Miracast::IMiracastReceiverSettings
    {
        MiracastReceiverSettings(std::nullptr_t) noexcept {}
        MiracastReceiverSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverSettings(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverStatus : Windows::Media::Miracast::IMiracastReceiverStatus
    {
        MiracastReceiverStatus(std::nullptr_t) noexcept {}
        MiracastReceiverStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverStatus(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverStreamControl : Windows::Media::Miracast::IMiracastReceiverStreamControl
    {
        MiracastReceiverStreamControl(std::nullptr_t) noexcept {}
        MiracastReceiverStreamControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverStreamControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastReceiverVideoStreamSettings : Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings
    {
        MiracastReceiverVideoStreamSettings(std::nullptr_t) noexcept {}
        MiracastReceiverVideoStreamSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastReceiverVideoStreamSettings(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MiracastTransmitter : Windows::Media::Miracast::IMiracastTransmitter
    {
        MiracastTransmitter(std::nullptr_t) noexcept {}
        MiracastTransmitter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Miracast::IMiracastTransmitter(ptr, take_ownership_from_abi) {}
    };
}
#endif
