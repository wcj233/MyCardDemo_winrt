// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_WiFiDirect_2_H
#define WINRT_Windows_Devices_WiFiDirect_2_H
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.1.h"
namespace winrt::Windows::Devices::WiFiDirect
{
    struct WINRT_EBO WiFiDirectAdvertisement : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement,
        impl::require<WiFiDirectAdvertisement, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
    {
        WiFiDirectAdvertisement(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO WiFiDirectAdvertisementPublisher : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher
    {
        WiFiDirectAdvertisementPublisher(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisementPublisher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher(ptr, take_ownership_from_abi) {}
        WiFiDirectAdvertisementPublisher();
    };
    struct WINRT_EBO WiFiDirectAdvertisementPublisherStatusChangedEventArgs : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
    {
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO WiFiDirectConnectionListener : Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener
    {
        WiFiDirectConnectionListener(std::nullptr_t) noexcept {}
        WiFiDirectConnectionListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionListener();
    };
    struct WINRT_EBO WiFiDirectConnectionParameters : Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters,
        impl::require<WiFiDirectConnectionParameters, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2, Windows::Devices::Enumeration::IDevicePairingSettings>
    {
        WiFiDirectConnectionParameters(std::nullptr_t) noexcept {}
        WiFiDirectConnectionParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionParameters();
        static Windows::Devices::Enumeration::DevicePairingKinds GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod);
    };
    struct WINRT_EBO WiFiDirectConnectionRequest : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest
    {
        WiFiDirectConnectionRequest(std::nullptr_t) noexcept {}
        WiFiDirectConnectionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO WiFiDirectConnectionRequestedEventArgs : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs
    {
        WiFiDirectConnectionRequestedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectConnectionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO WiFiDirectDevice : Windows::Devices::WiFiDirect::IWiFiDirectDevice
    {
        WiFiDirectDevice(std::nullptr_t) noexcept {}
        WiFiDirectDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectDevice(ptr, take_ownership_from_abi) {}
        static hstring GetDeviceSelector();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> FromIdAsync(param::hstring const& deviceId);
        static hstring GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters);
    };
    struct WINRT_EBO WiFiDirectInformationElement : Windows::Devices::WiFiDirect::IWiFiDirectInformationElement
    {
        WiFiDirectInformationElement(std::nullptr_t) noexcept {}
        WiFiDirectInformationElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectInformationElement(ptr, take_ownership_from_abi) {}
        WiFiDirectInformationElement();
        static Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer);
        static Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation);
    };
    struct WINRT_EBO WiFiDirectLegacySettings : Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings
    {
        WiFiDirectLegacySettings(std::nullptr_t) noexcept {}
        WiFiDirectLegacySettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings(ptr, take_ownership_from_abi) {}
    };
}
#endif
