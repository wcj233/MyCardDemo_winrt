// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_System_Diagnostics_Telemetry_1_H
#define WINRT_Windows_System_Diagnostics_Telemetry_1_H
#include "winrt/impl/Windows.System.Diagnostics.Telemetry.0.h"
namespace winrt::Windows::System::Diagnostics::Telemetry
{
    struct WINRT_EBO IPlatformTelemetryClientStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryClientStatics>
    {
        IPlatformTelemetryClientStatics(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryClientStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IPlatformTelemetryRegistrationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryRegistrationResult>
    {
        IPlatformTelemetryRegistrationResult(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryRegistrationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IPlatformTelemetryRegistrationSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryRegistrationSettings>
    {
        IPlatformTelemetryRegistrationSettings(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryRegistrationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
