// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_System_Profile_SystemManufacturers_H
#define WINRT_Windows_System_Profile_SystemManufacturers_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.System.Profile.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Foundation::Uri consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportLink() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportLink(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::Uri consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportAppLink() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportAppLink(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportProvider() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportProvider(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>::SerialNumber() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics)->get_SerialNumber(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>::OperatingSystem() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo)->get_OperatingSystem(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo)->get_FriendlyName(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>::SystemManufacturer() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo)->get_SystemManufacturer(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>::SystemProductName() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo)->get_SystemProductName(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>::SystemSku() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo)->get_SystemSku(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>::SystemHardwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo)->get_SystemHardwareVersion(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo<D>::SystemFirmwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo)->get_SystemFirmwareVersion(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>::LocalSystemEdition() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics)->get_LocalSystemEdition(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::System::Profile::SystemManufacturers::OemSupportInfo consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>::OemSupportInfo() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics)->get_OemSupportInfo(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics2<D>::LocalDeviceInfo() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2)->get_LocalDeviceInfo(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::System::Profile::SystemManufacturers::IOemSupportInfo> : produce_base<D, Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
    {
        int32_t WINRT_CALL get_SupportLink(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportLink());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SupportAppLink(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportAppLink());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SupportProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SupportProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
    {
        int32_t WINRT_CALL get_SerialNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SerialNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo>
    {
        int32_t WINRT_CALL get_OperatingSystem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OperatingSystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SystemManufacturer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemManufacturer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SystemProductName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemProductName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SystemSku(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemSku());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SystemHardwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemHardwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SystemFirmwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemFirmwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
    {
        int32_t WINRT_CALL get_LocalSystemEdition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalSystemEdition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_OemSupportInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::SystemManufacturers::OemSupportInfo>(this->shim().OemSupportInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>
    {
        int32_t WINRT_CALL get_LocalDeviceInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>(this->shim().LocalDeviceInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::System::Profile::SystemManufacturers
{
    inline hstring SmbiosInformation::SerialNumber()
    {
        return impl::call_factory<SmbiosInformation, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>([&](auto&& f) { return f.SerialNumber(); });
    }
    inline hstring SystemSupportInfo::LocalSystemEdition()
    {
        return impl::call_factory<SystemSupportInfo, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>([&](auto&& f) { return f.LocalSystemEdition(); });
    }
    inline Windows::System::Profile::SystemManufacturers::OemSupportInfo SystemSupportInfo::OemSupportInfo()
    {
        return impl::call_factory<SystemSupportInfo, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>([&](auto&& f) { return f.OemSupportInfo(); });
    }
    inline Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo SystemSupportInfo::LocalDeviceInfo()
    {
        return impl::call_factory<SystemSupportInfo, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2>([&](auto&& f) { return f.LocalDeviceInfo(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics2> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo> {};
    template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo> {};
}
#endif
