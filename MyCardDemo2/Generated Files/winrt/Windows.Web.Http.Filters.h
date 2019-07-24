// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Web_Http_Filters_H
#define WINRT_Windows_Web_Http_Filters_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Web.Http.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Web.Http.Filters.2.h"
namespace winrt::impl
{
    template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowAutoRedirect() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AllowAutoRedirect(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowAutoRedirect(bool value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AllowAutoRedirect(value));
    }
    template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowUI() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AllowUI(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowUI(bool value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AllowUI(value));
    }
    template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AutomaticDecompression() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AutomaticDecompression(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AutomaticDecompression(bool value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AutomaticDecompression(value));
    }
    template <typename D> Windows::Web::Http::Filters::HttpCacheControl consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::CacheControl() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_CacheControl(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Web::Http::HttpCookieManager consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::CookieManager() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_CookieManager(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ClientCertificate() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ClientCertificate(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ClientCertificate(*(void**)(&value)));
    }
    template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::IgnorableServerCertificateErrors() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_IgnorableServerCertificateErrors(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> uint32_t consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::MaxConnectionsPerServer() const
    {
        uint32_t value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_MaxConnectionsPerServer(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::MaxConnectionsPerServer(uint32_t value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_MaxConnectionsPerServer(value));
    }
    template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ProxyCredential() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ProxyCredential(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ProxyCredential(*(void**)(&value)));
    }
    template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ServerCredential() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ServerCredential(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ServerCredential(*(void**)(&value)));
    }
    template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::UseProxy() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_UseProxy(&value));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::UseProxy(bool value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_UseProxy(value));
    }
    template <typename D> Windows::Web::Http::HttpVersion consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>::MaxVersion() const
    {
        Windows::Web::Http::HttpVersion value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter2)->get_MaxVersion(put_abi(value)));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>::MaxVersion(Windows::Web::Http::HttpVersion const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter2)->put_MaxVersion(static_cast<int32_t>(value)));
    }
    template <typename D> Windows::Web::Http::Filters::HttpCookieUsageBehavior consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>::CookieUsageBehavior() const
    {
        Windows::Web::Http::Filters::HttpCookieUsageBehavior value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter3)->get_CookieUsageBehavior(put_abi(value)));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>::CookieUsageBehavior(Windows::Web::Http::Filters::HttpCookieUsageBehavior const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter3)->put_CookieUsageBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> winrt::event_token consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->add_ServerCustomValidationRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested_revoker consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ServerCustomValidationRequested_revoker>(this, ServerCustomValidationRequested(handler));
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->remove_ServerCustomValidationRequested(impl::bind_in(token)));
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ClearAuthenticationCache() const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->ClearAuthenticationCache());
    }
    template <typename D> Windows::System::User consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter5<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter5)->get_User(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Web::Http::Filters::HttpBaseProtocolFilter consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilterStatics<D>::CreateForUser(Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics)->CreateForUser(*(void**)(&user), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::Web::Http::Filters::HttpCacheReadBehavior consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::ReadBehavior() const
    {
        Windows::Web::Http::Filters::HttpCacheReadBehavior value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->get_ReadBehavior(put_abi(value)));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::ReadBehavior(Windows::Web::Http::Filters::HttpCacheReadBehavior const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->put_ReadBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> Windows::Web::Http::Filters::HttpCacheWriteBehavior consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::WriteBehavior() const
    {
        Windows::Web::Http::Filters::HttpCacheWriteBehavior value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->get_WriteBehavior(put_abi(value)));
        return value;
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::WriteBehavior(Windows::Web::Http::Filters::HttpCacheWriteBehavior const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->put_WriteBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_Filters_IHttpFilter<D>::SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const
    {
        void* operation{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpFilter)->SendRequestAsync(*(void**)(&request), &operation));
        return { operation, take_ownership_from_abi };
    }
    template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::RequestMessage() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_RequestMessage(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificate() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificate(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrorSeverity() const
    {
        Windows::Networking::Sockets::SocketSslErrorSeverity value;
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrorSeverity(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrors() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrors(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerIntermediateCertificates() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerIntermediateCertificates(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::Reject() const
    {
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->Reject());
    }
    template <typename D> Windows::Foundation::Deferral consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->GetDeferral(&result));
        return { result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        int32_t WINRT_CALL get_AllowAutoRedirect(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowAutoRedirect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_AllowAutoRedirect(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowAutoRedirect(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_AllowUI(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_AllowUI(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowUI(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_AutomaticDecompression(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutomaticDecompression());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_AutomaticDecompression(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutomaticDecompression(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_CacheControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Filters::HttpCacheControl>(this->shim().CacheControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_CookieManager(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::HttpCookieManager>(this->shim().CookieManager());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ClientCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ClientCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_ClientCertificate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClientCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_IgnorableServerCertificateErrors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().IgnorableServerCertificateErrors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_MaxConnectionsPerServer(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxConnectionsPerServer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_MaxConnectionsPerServer(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxConnectionsPerServer(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ProxyCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ProxyCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_ProxyCredential(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServerCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ServerCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_ServerCredential(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_UseProxy(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UseProxy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_UseProxy(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseProxy(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        int32_t WINRT_CALL get_MaxVersion(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::HttpVersion>(this->shim().MaxVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_MaxVersion(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVersion(*reinterpret_cast<Windows::Web::Http::HttpVersion const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        int32_t WINRT_CALL get_CookieUsageBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Filters::HttpCookieUsageBehavior>(this->shim().CookieUsageBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_CookieUsageBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CookieUsageBehavior(*reinterpret_cast<Windows::Web::Http::Filters::HttpCookieUsageBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        int32_t WINRT_CALL add_ServerCustomValidationRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ServerCustomValidationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_ServerCustomValidationRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCustomValidationRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t WINRT_CALL ClearAuthenticationCache() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAuthenticationCache();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter5> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        int32_t WINRT_CALL get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        int32_t WINRT_CALL CreateForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::Http::Filters::HttpBaseProtocolFilter>(this->shim().CreateForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpCacheControl> : produce_base<D, Windows::Web::Http::Filters::IHttpCacheControl>
    {
        int32_t WINRT_CALL get_ReadBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Filters::HttpCacheReadBehavior>(this->shim().ReadBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_ReadBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadBehavior(*reinterpret_cast<Windows::Web::Http::Filters::HttpCacheReadBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_WriteBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::Filters::HttpCacheWriteBehavior>(this->shim().WriteBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_WriteBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteBehavior(*reinterpret_cast<Windows::Web::Http::Filters::HttpCacheWriteBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpFilter> : produce_base<D, Windows::Web::Http::Filters::IHttpFilter>
    {
        int32_t WINRT_CALL SendRequestAsync(void* request, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>>(this->shim().SendRequestAsync(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> : produce_base<D, Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        int32_t WINRT_CALL get_RequestMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServerCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ServerCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServerCertificateErrorSeverity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().ServerCertificateErrorSeverity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServerCertificateErrors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().ServerCertificateErrors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServerIntermediateCertificates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ServerIntermediateCertificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL Reject() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reject();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Web::Http::Filters
{
    inline HttpBaseProtocolFilter::HttpBaseProtocolFilter() :
        HttpBaseProtocolFilter(impl::call_factory<HttpBaseProtocolFilter>([](auto&& f) { return f.template ActivateInstance<HttpBaseProtocolFilter>(); }))
    {
    }
    inline Windows::Web::Http::Filters::HttpBaseProtocolFilter HttpBaseProtocolFilter::CreateForUser(Windows::System::User const& user)
    {
        return impl::call_factory<HttpBaseProtocolFilter, Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>([&](auto&& f) { return f.CreateForUser(user); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter5> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter5> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpCacheControl> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpCacheControl> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpFilter> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpFilter> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::HttpCacheControl> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::HttpCacheControl> {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> {};
}
#endif
