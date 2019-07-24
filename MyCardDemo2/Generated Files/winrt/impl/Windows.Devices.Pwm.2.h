// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Pwm_2_H
#define WINRT_Windows_Devices_Pwm_2_H
#include "winrt/impl/Windows.Devices.Pwm.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Pwm.1.h"
namespace winrt::Windows::Devices::Pwm
{
    struct WINRT_EBO PwmController : Windows::Devices::Pwm::IPwmController
    {
        PwmController(std::nullptr_t) noexcept {}
        PwmController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Pwm::IPwmController(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider const& provider);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> GetDefaultAsync();
        static hstring GetDeviceSelector();
        static hstring GetDeviceSelector(param::hstring const& friendlyName);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> FromIdAsync(param::hstring const& deviceId);
    };
    struct WINRT_EBO PwmPin : Windows::Devices::Pwm::IPwmPin
    {
        PwmPin(std::nullptr_t) noexcept {}
        PwmPin(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Pwm::IPwmPin(ptr, take_ownership_from_abi) {}
    };
}
#endif
