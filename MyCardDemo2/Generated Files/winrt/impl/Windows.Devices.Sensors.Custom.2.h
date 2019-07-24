// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Sensors_Custom_2_H
#define WINRT_Windows_Devices_Sensors_Custom_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Sensors.Custom.1.h"
namespace winrt::Windows::Devices::Sensors::Custom
{
    struct WINRT_EBO CustomSensor : Windows::Devices::Sensors::Custom::ICustomSensor,
        impl::require<CustomSensor, Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        CustomSensor(std::nullptr_t) noexcept {}
        CustomSensor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::Custom::ICustomSensor(ptr, take_ownership_from_abi) {}
        static hstring GetDeviceSelector(winrt::guid const& interfaceId);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Sensors::Custom::CustomSensor> FromIdAsync(param::hstring const& sensorId);
    };
    struct WINRT_EBO CustomSensorReading : Windows::Devices::Sensors::Custom::ICustomSensorReading,
        impl::require<CustomSensorReading, Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        CustomSensorReading(std::nullptr_t) noexcept {}
        CustomSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::Custom::ICustomSensorReading(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CustomSensorReadingChangedEventArgs : Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs
    {
        CustomSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        CustomSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif