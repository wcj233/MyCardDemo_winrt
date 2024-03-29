// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_CommunicationBlocking_H
#define WINRT_Windows_ApplicationModel_CommunicationBlocking_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ApplicationModel.CommunicationBlocking.2.h"
namespace winrt::impl
{
    template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::IsBlockingActive() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->get_IsBlockingActive(&value));
        return value;
    }
    template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::IsBlockedNumberAsync(param::hstring const& number) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->IsBlockedNumberAsync(*(void**)(&number), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowBlockNumbersUI(param::iterable<hstring> const& phoneNumbers) const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowBlockNumbersUI(*(void**)(&phoneNumbers), &value));
        return value;
    }
    template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowUnblockNumbersUI(param::iterable<hstring> const& phoneNumbers) const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowUnblockNumbersUI(*(void**)(&phoneNumbers), &value));
        return value;
    }
    template <typename D> void consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowBlockedCallsUI() const
    {
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowBlockedCallsUI());
    }
    template <typename D> void consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowBlockedMessagesUI() const
    {
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowBlockedMessagesUI());
    }
    template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics<D>::IsCurrentAppActiveBlockingApp() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics)->get_IsCurrentAppActiveBlockingApp(&value));
        return value;
    }
    template <typename D> void consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics<D>::ShowCommunicationBlockingSettingsUI() const
    {
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics)->ShowCommunicationBlockingSettingsUI());
    }
    template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics2<D>::RequestSetAsActiveBlockingAppAsync() const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2)->RequestSetAsActiveBlockingAppAsync(&result));
        return { result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics> : produce_base<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
    {
        int32_t WINRT_CALL get_IsBlockingActive(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBlockingActive());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL IsBlockedNumberAsync(void* number, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsBlockedNumberAsync(*reinterpret_cast<hstring const*>(&number)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ShowBlockNumbersUI(void* phoneNumbers, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowBlockNumbersUI(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&phoneNumbers)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ShowUnblockNumbersUI(void* phoneNumbers, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowUnblockNumbersUI(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&phoneNumbers)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ShowBlockedCallsUI() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowBlockedCallsUI();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ShowBlockedMessagesUI() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowBlockedMessagesUI();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics> : produce_base<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
    {
        int32_t WINRT_CALL get_IsCurrentAppActiveBlockingApp(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCurrentAppActiveBlockingApp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ShowCommunicationBlockingSettingsUI() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowCommunicationBlockingSettingsUI();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2> : produce_base<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
    {
        int32_t WINRT_CALL RequestSetAsActiveBlockingAppAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestSetAsActiveBlockingAppAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::CommunicationBlocking
{
    inline bool CommunicationBlockingAccessManager::IsBlockingActive()
    {
        return impl::call_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>([&](auto&& f) { return f.IsBlockingActive(); });
    }
    inline Windows::Foundation::IAsyncOperation<bool> CommunicationBlockingAccessManager::IsBlockedNumberAsync(param::hstring const& number)
    {
        return impl::call_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>([&](auto&& f) { return f.IsBlockedNumberAsync(number); });
    }
    inline bool CommunicationBlockingAccessManager::ShowBlockNumbersUI(param::iterable<hstring> const& phoneNumbers)
    {
        return impl::call_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>([&](auto&& f) { return f.ShowBlockNumbersUI(phoneNumbers); });
    }
    inline bool CommunicationBlockingAccessManager::ShowUnblockNumbersUI(param::iterable<hstring> const& phoneNumbers)
    {
        return impl::call_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>([&](auto&& f) { return f.ShowUnblockNumbersUI(phoneNumbers); });
    }
    inline void CommunicationBlockingAccessManager::ShowBlockedCallsUI()
    {
        impl::call_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>([&](auto&& f) { return f.ShowBlockedCallsUI(); });
    }
    inline void CommunicationBlockingAccessManager::ShowBlockedMessagesUI()
    {
        impl::call_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>([&](auto&& f) { return f.ShowBlockedMessagesUI(); });
    }
    inline bool CommunicationBlockingAppManager::IsCurrentAppActiveBlockingApp()
    {
        return impl::call_factory<CommunicationBlockingAppManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>([&](auto&& f) { return f.IsCurrentAppActiveBlockingApp(); });
    }
    inline void CommunicationBlockingAppManager::ShowCommunicationBlockingSettingsUI()
    {
        impl::call_factory<CommunicationBlockingAppManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>([&](auto&& f) { return f.ShowCommunicationBlockingSettingsUI(); });
    }
    inline Windows::Foundation::IAsyncOperation<bool> CommunicationBlockingAppManager::RequestSetAsActiveBlockingAppAsync()
    {
        return impl::call_factory<CommunicationBlockingAppManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>([&](auto&& f) { return f.RequestSetAsActiveBlockingAppAsync(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics> {};
    template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics> {};
    template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2> {};
    template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager> {};
    template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager> {};
}
#endif
