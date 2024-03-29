// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Phone_System_Profile_H
#define WINRT_Windows_Phone_System_Profile_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Phone.System.h"
#include "winrt/impl/Windows.Phone.System.Profile.2.h"
namespace winrt::impl
{
    template <typename D> bool consume_Windows_Phone_System_Profile_IRetailModeStatics<D>::RetailModeEnabled() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Phone::System::Profile::IRetailModeStatics)->get_RetailModeEnabled(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Phone::System::Profile::IRetailModeStatics> : produce_base<D, Windows::Phone::System::Profile::IRetailModeStatics>
    {
        int32_t WINRT_CALL get_RetailModeEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RetailModeEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Phone::System::Profile
{
    inline bool RetailMode::RetailModeEnabled()
    {
        return impl::call_factory<RetailMode, Windows::Phone::System::Profile::IRetailModeStatics>([&](auto&& f) { return f.RetailModeEnabled(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Phone::System::Profile::IRetailModeStatics> : winrt::impl::hash_base<winrt::Windows::Phone::System::Profile::IRetailModeStatics> {};
    template<> struct hash<winrt::Windows::Phone::System::Profile::RetailMode> : winrt::impl::hash_base<winrt::Windows::Phone::System::Profile::RetailMode> {};
}
#endif
