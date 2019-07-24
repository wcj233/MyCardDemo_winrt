// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Display_H
#define WINRT_Windows_Devices_Display_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Devices.Display.2.h"
namespace winrt::impl
{
    template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitor<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DeviceId(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayName(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Display::DisplayMonitorConnectionKind consume_Windows_Devices_Display_IDisplayMonitor<D>::ConnectionKind() const
    {
        Windows::Devices::Display::DisplayMonitorConnectionKind value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_ConnectionKind(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind consume_Windows_Devices_Display_IDisplayMonitor<D>::PhysicalConnector() const
    {
        Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_PhysicalConnector(put_abi(value)));
        return value;
    }
    template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayAdapterDeviceId() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayAdapterDeviceId(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Graphics::DisplayAdapterId consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayAdapterId() const
    {
        Windows::Graphics::DisplayAdapterId value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayAdapterId(put_abi(value)));
        return value;
    }
    template <typename D> uint32_t consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayAdapterTargetId() const
    {
        uint32_t value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayAdapterTargetId(&value));
        return value;
    }
    template <typename D> Windows::Devices::Display::DisplayMonitorUsageKind consume_Windows_Devices_Display_IDisplayMonitor<D>::UsageKind() const
    {
        Windows::Devices::Display::DisplayMonitorUsageKind value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_UsageKind(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Graphics::SizeInt32 consume_Windows_Devices_Display_IDisplayMonitor<D>::NativeResolutionInRawPixels() const
    {
        Windows::Graphics::SizeInt32 value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_NativeResolutionInRawPixels(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::IReference<Windows::Foundation::Size> consume_Windows_Devices_Display_IDisplayMonitor<D>::PhysicalSizeInInches() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_PhysicalSizeInInches(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::RawDpiX() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_RawDpiX(&value));
        return value;
    }
    template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::RawDpiY() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_RawDpiY(&value));
        return value;
    }
    template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::RedPrimary() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_RedPrimary(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::GreenPrimary() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_GreenPrimary(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::BluePrimary() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_BluePrimary(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::WhitePoint() const
    {
        Windows::Foundation::Point value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_WhitePoint(put_abi(value)));
        return value;
    }
    template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::MaxLuminanceInNits() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_MaxLuminanceInNits(&value));
        return value;
    }
    template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::MinLuminanceInNits() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_MinLuminanceInNits(&value));
        return value;
    }
    template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::MaxAverageFullFrameLuminanceInNits() const
    {
        float value;
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_MaxAverageFullFrameLuminanceInNits(&value));
        return value;
    }
    template <typename D> com_array<uint8_t> consume_Windows_Devices_Display_IDisplayMonitor<D>::GetDescriptor(Windows::Devices::Display::DisplayMonitorDescriptorKind const& descriptorKind) const
    {
        uint32_t result_impl_size{};
        uint8_t* result{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->GetDescriptor(static_cast<int32_t>(descriptorKind), &result_impl_size, &result));
        return { result, result_impl_size, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitorStatics<D>::GetDeviceSelector() const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitorStatics)->GetDeviceSelector(&result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> consume_Windows_Devices_Display_IDisplayMonitorStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitorStatics)->FromIdAsync(*(void**)(&deviceId), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> consume_Windows_Devices_Display_IDisplayMonitorStatics<D>::FromInterfaceIdAsync(param::hstring const& deviceInterfaceId) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitorStatics)->FromInterfaceIdAsync(*(void**)(&deviceInterfaceId), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Devices::Display::IDisplayMonitor> : produce_base<D, Windows::Devices::Display::IDisplayMonitor>
    {
        int32_t WINRT_CALL get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ConnectionKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Display::DisplayMonitorConnectionKind>(this->shim().ConnectionKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_PhysicalConnector(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind>(this->shim().PhysicalConnector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_DisplayAdapterDeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayAdapterDeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_DisplayAdapterId(struct struct_Windows_Graphics_DisplayAdapterId* value) noexcept final try
        {
            zero_abi<Windows::Graphics::DisplayAdapterId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DisplayAdapterId>(this->shim().DisplayAdapterId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_DisplayAdapterTargetId(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DisplayAdapterTargetId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_UsageKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Display::DisplayMonitorUsageKind>(this->shim().UsageKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_NativeResolutionInRawPixels(struct struct_Windows_Graphics_SizeInt32* value) noexcept final try
        {
            zero_abi<Windows::Graphics::SizeInt32>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::SizeInt32>(this->shim().NativeResolutionInRawPixels());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_PhysicalSizeInInches(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Size>>(this->shim().PhysicalSizeInInches());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_RawDpiX(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RawDpiX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_RawDpiY(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RawDpiY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_RedPrimary(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().RedPrimary());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_GreenPrimary(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().GreenPrimary());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_BluePrimary(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().BluePrimary());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_WhitePoint(Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().WhitePoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_MaxLuminanceInNits(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxLuminanceInNits());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_MinLuminanceInNits(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinLuminanceInNits());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_MaxAverageFullFrameLuminanceInNits(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxAverageFullFrameLuminanceInNits());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetDescriptor(int32_t descriptorKind, uint32_t* __resultSize, uint8_t** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            std::tie(*__resultSize, *result) = detach_abi(this->shim().GetDescriptor(*reinterpret_cast<Windows::Devices::Display::DisplayMonitorDescriptorKind const*>(&descriptorKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Display::IDisplayMonitorStatics> : produce_base<D, Windows::Devices::Display::IDisplayMonitorStatics>
    {
        int32_t WINRT_CALL GetDeviceSelector(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL FromIdAsync(void* deviceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL FromInterfaceIdAsync(void* deviceInterfaceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor>>(this->shim().FromInterfaceIdAsync(*reinterpret_cast<hstring const*>(&deviceInterfaceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Display
{
    inline hstring DisplayMonitor::GetDeviceSelector()
    {
        return impl::call_factory<DisplayMonitor, Windows::Devices::Display::IDisplayMonitorStatics>([&](auto&& f) { return f.GetDeviceSelector(); });
    }
    inline Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> DisplayMonitor::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<DisplayMonitor, Windows::Devices::Display::IDisplayMonitorStatics>([&](auto&& f) { return f.FromIdAsync(deviceId); });
    }
    inline Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> DisplayMonitor::FromInterfaceIdAsync(param::hstring const& deviceInterfaceId)
    {
        return impl::call_factory<DisplayMonitor, Windows::Devices::Display::IDisplayMonitorStatics>([&](auto&& f) { return f.FromInterfaceIdAsync(deviceInterfaceId); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Display::IDisplayMonitor> : winrt::impl::hash_base<winrt::Windows::Devices::Display::IDisplayMonitor> {};
    template<> struct hash<winrt::Windows::Devices::Display::IDisplayMonitorStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Display::IDisplayMonitorStatics> {};
    template<> struct hash<winrt::Windows::Devices::Display::DisplayMonitor> : winrt::impl::hash_base<winrt::Windows::Devices::Display::DisplayMonitor> {};
}
#endif