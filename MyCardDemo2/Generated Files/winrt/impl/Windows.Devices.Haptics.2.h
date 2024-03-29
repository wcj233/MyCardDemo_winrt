// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Haptics_2_H
#define WINRT_Windows_Devices_Haptics_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Haptics.1.h"
namespace winrt::Windows::Devices::Haptics
{
    struct KnownSimpleHapticsControllerWaveforms
    {
        KnownSimpleHapticsControllerWaveforms() = delete;
        static uint16_t Click();
        static uint16_t BuzzContinuous();
        static uint16_t RumbleContinuous();
        static uint16_t Press();
        static uint16_t Release();
    };
    struct WINRT_EBO SimpleHapticsController : Windows::Devices::Haptics::ISimpleHapticsController
    {
        SimpleHapticsController(std::nullptr_t) noexcept {}
        SimpleHapticsController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::ISimpleHapticsController(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SimpleHapticsControllerFeedback : Windows::Devices::Haptics::ISimpleHapticsControllerFeedback
    {
        SimpleHapticsControllerFeedback(std::nullptr_t) noexcept {}
        SimpleHapticsControllerFeedback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::ISimpleHapticsControllerFeedback(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VibrationDevice : Windows::Devices::Haptics::IVibrationDevice
    {
        VibrationDevice(std::nullptr_t) noexcept {}
        VibrationDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::IVibrationDevice(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationAccessStatus> RequestAccessAsync();
        static hstring GetDeviceSelector();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> FromIdAsync(param::hstring const& deviceId);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Haptics::VibrationDevice> GetDefaultAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Haptics::VibrationDevice>> FindAllAsync();
    };
}
#endif
