// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Phone_Media_Devices_2_H
#define WINRT_Windows_Phone_Media_Devices_2_H
#include "winrt/impl/Windows.Phone.Media.Devices.1.h"
namespace winrt::Windows::Phone::Media::Devices
{
    struct WINRT_EBO AudioRoutingManager : Windows::Phone::Media::Devices::IAudioRoutingManager
    {
        AudioRoutingManager(std::nullptr_t) noexcept {}
        AudioRoutingManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Phone::Media::Devices::IAudioRoutingManager(ptr, take_ownership_from_abi) {}
        static Windows::Phone::Media::Devices::AudioRoutingManager GetDefault();
    };
}
#endif
