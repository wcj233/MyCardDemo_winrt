// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Security_Authorization_AppCapabilityAccess_2_H
#define WINRT_Windows_Security_Authorization_AppCapabilityAccess_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.Authorization.AppCapabilityAccess.1.h"
namespace winrt::Windows::Security::Authorization::AppCapabilityAccess
{
    struct WINRT_EBO AppCapability : Windows::Security::Authorization::AppCapabilityAccess::IAppCapability
    {
        AppCapability(std::nullptr_t) noexcept {}
        AppCapability(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authorization::AppCapabilityAccess::IAppCapability(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>> RequestAccessForCapabilitiesAsync(param::async_iterable<hstring> const& capabilityNames);
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>> RequestAccessForCapabilitiesForUserAsync(Windows::System::User const& user, param::async_iterable<hstring> const& capabilityNames);
        static Windows::Security::Authorization::AppCapabilityAccess::AppCapability Create(param::hstring const& capabilityName);
        static Windows::Security::Authorization::AppCapabilityAccess::AppCapability CreateWithProcessIdForUser(Windows::System::User const& user, param::hstring const& capabilityName, uint32_t pid);
    };
    struct WINRT_EBO AppCapabilityAccessChangedEventArgs : Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs
    {
        AppCapabilityAccessChangedEventArgs(std::nullptr_t) noexcept {}
        AppCapabilityAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authorization::AppCapabilityAccess::IAppCapabilityAccessChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
