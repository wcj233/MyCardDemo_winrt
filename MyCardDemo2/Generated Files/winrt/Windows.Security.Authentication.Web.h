// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Security_Authentication_Web_H
#define WINRT_Windows_Security_Authentication_Web_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics<D>::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics)->AuthenticateWithCallbackUriAsync(static_cast<uint32_t>(options), *(void**)(&requestUri), *(void**)(&callbackUri), &asyncInfo));
        return { asyncInfo, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics<D>::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics)->AuthenticateWithoutCallbackUriAsync(static_cast<uint32_t>(options), *(void**)(&requestUri), &asyncInfo));
        return { asyncInfo, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics<D>::GetCurrentApplicationCallbackUri() const
    {
        void* callbackUri{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics)->GetCurrentApplicationCallbackUri(&callbackUri));
        return { callbackUri, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri) const
    {
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateAndContinue(*(void**)(&requestUri)));
    }
    template <typename D> void consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri) const
    {
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateWithCallbackUriAndContinue(*(void**)(&requestUri), *(void**)(&callbackUri)));
    }
    template <typename D> void consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri, Windows::Foundation::Collections::ValueSet const& continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options) const
    {
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateWithCallbackUriContinuationDataAndOptionsAndContinue(*(void**)(&requestUri), *(void**)(&callbackUri), *(void**)(&continuationData), static_cast<uint32_t>(options)));
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateSilentlyAsync(*(void**)(&requestUri), &asyncInfo));
        return { asyncInfo, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateSilentlyWithOptionsAsync(*(void**)(&requestUri), static_cast<uint32_t>(options), &asyncInfo));
        return { asyncInfo, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Security_Authentication_Web_IWebAuthenticationResult<D>::ResponseData() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationResult)->get_ResponseData(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Security::Authentication::Web::WebAuthenticationStatus consume_Windows_Security_Authentication_Web_IWebAuthenticationResult<D>::ResponseStatus() const
    {
        Windows::Security::Authentication::Web::WebAuthenticationStatus value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationResult)->get_ResponseStatus(put_abi(value)));
        return value;
    }
    template <typename D> uint32_t consume_Windows_Security_Authentication_Web_IWebAuthenticationResult<D>::ResponseErrorDetail() const
    {
        uint32_t value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationResult)->get_ResponseErrorDetail(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> : produce_base<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>
    {
        int32_t WINRT_CALL AuthenticateWithCallbackUriAsync(uint32_t options, void* requestUri, void* callbackUri, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>>(this->shim().AuthenticateAsync(*reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Foundation::Uri const*>(&callbackUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL AuthenticateWithoutCallbackUriAsync(uint32_t options, void* requestUri, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>>(this->shim().AuthenticateAsync(*reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetCurrentApplicationCallbackUri(void** callbackUri) noexcept final try
        {
            clear_abi(callbackUri);
            typename D::abi_guard guard(this->shim());
            *callbackUri = detach_from<Windows::Foundation::Uri>(this->shim().GetCurrentApplicationCallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2> : produce_base<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>
    {
        int32_t WINRT_CALL AuthenticateAndContinue(void* requestUri) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticateAndContinue(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL AuthenticateWithCallbackUriAndContinue(void* requestUri, void* callbackUri) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticateAndContinue(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Foundation::Uri const*>(&callbackUri));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL AuthenticateWithCallbackUriContinuationDataAndOptionsAndContinue(void* requestUri, void* callbackUri, void* continuationData, uint32_t options) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticateAndContinue(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Foundation::Uri const*>(&callbackUri), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&continuationData), *reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL AuthenticateSilentlyAsync(void* requestUri, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>>(this->shim().AuthenticateSilentlyAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL AuthenticateSilentlyWithOptionsAsync(void* requestUri, uint32_t options, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>>(this->shim().AuthenticateSilentlyAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Web::IWebAuthenticationResult> : produce_base<D, Windows::Security::Authentication::Web::IWebAuthenticationResult>
    {
        int32_t WINRT_CALL get_ResponseData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ResponseData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ResponseStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::WebAuthenticationStatus>(this->shim().ResponseStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ResponseErrorDetail(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ResponseErrorDetail());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Security::Authentication::Web
{
    inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri)
    {
        return impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>([&](auto&& f) { return f.AuthenticateAsync(options, requestUri, callbackUri); });
    }
    inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri)
    {
        return impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>([&](auto&& f) { return f.AuthenticateAsync(options, requestUri); });
    }
    inline Windows::Foundation::Uri WebAuthenticationBroker::GetCurrentApplicationCallbackUri()
    {
        return impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>([&](auto&& f) { return f.GetCurrentApplicationCallbackUri(); });
    }
    inline void WebAuthenticationBroker::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri)
    {
        impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>([&](auto&& f) { return f.AuthenticateAndContinue(requestUri); });
    }
    inline void WebAuthenticationBroker::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri)
    {
        impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>([&](auto&& f) { return f.AuthenticateAndContinue(requestUri, callbackUri); });
    }
    inline void WebAuthenticationBroker::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri, Windows::Foundation::Collections::ValueSet const& continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options)
    {
        impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>([&](auto&& f) { return f.AuthenticateAndContinue(requestUri, callbackUri, continuationData, options); });
    }
    inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri)
    {
        return impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>([&](auto&& f) { return f.AuthenticateSilentlyAsync(requestUri); });
    }
    inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options)
    {
        return impl::call_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>([&](auto&& f) { return f.AuthenticateSilentlyAsync(requestUri, options); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::IWebAuthenticationResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::IWebAuthenticationResult> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Web::WebAuthenticationResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::WebAuthenticationResult> {};
}
#endif
