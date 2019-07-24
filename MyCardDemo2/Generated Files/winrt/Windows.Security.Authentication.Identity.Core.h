// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Security_Authentication_Identity_Core_H
#define WINRT_Windows_Security_Authentication_Identity_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Security.Authentication.Identity.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Authentication.Identity.Core.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetOneTimePassCodeAsync(param::hstring const& userAccountId, uint32_t codeLength) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->GetOneTimePassCodeAsync(*(void**)(&userAccountId), codeLength, &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::AddDeviceAsync(param::hstring const& userAccountId, param::hstring const& authenticationToken, param::hstring const& wnsChannelId) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->AddDeviceAsync(*(void**)(&userAccountId), *(void**)(&authenticationToken), *(void**)(&wnsChannelId), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::RemoveDeviceAsync(param::hstring const& userAccountId) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->RemoveDeviceAsync(*(void**)(&userAccountId), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::UpdateWnsChannelAsync(param::hstring const& userAccountId, param::hstring const& channelUri) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->UpdateWnsChannelAsync(*(void**)(&userAccountId), *(void**)(&channelUri), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetSessionsAsync(param::async_iterable<hstring> const& userAccountIdList) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->GetSessionsAsync(*(void**)(&userAccountIdList), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetSessionsAndUnregisteredAccountsAsync(param::async_iterable<hstring> const& userAccountIdList) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->GetSessionsAndUnregisteredAccountsAsync(*(void**)(&userAccountIdList), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const& sessionAuthentictionStatus, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const& authenticationSessionInfo) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->ApproveSessionUsingAuthSessionInfoAsync(static_cast<int32_t>(sessionAuthentictionStatus), *(void**)(&authenticationSessionInfo), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const& sessionAuthentictionStatus, param::hstring const& userAccountId, param::hstring const& sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const& sessionAuthenticationType) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->ApproveSessionAsync(static_cast<int32_t>(sessionAuthentictionStatus), *(void**)(&userAccountId), *(void**)(&sessionId), static_cast<int32_t>(sessionAuthenticationType), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::DenySessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const& authenticationSessionInfo) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->DenySessionUsingAuthSessionInfoAsync(*(void**)(&authenticationSessionInfo), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::DenySessionAsync(param::hstring const& userAccountId, param::hstring const& sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const& sessionAuthenticationType) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->DenySessionAsync(*(void**)(&userAccountId), *(void**)(&sessionId), static_cast<int32_t>(sessionAuthenticationType), &asyncOperation));
        return { asyncOperation, take_ownership_from_abi };
    }
    template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticatorStatics<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics)->get_Current(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult<D>::Sessions() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult)->get_Sessions(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult<D>::ServiceResponse() const
    {
        Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult)->get_ServiceResponse(put_abi(value)));
        return value;
    }
    template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::Code() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_Code(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::TimeSpan consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::TimeInterval() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_TimeInterval(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::TimeSpan consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::TimeToLive() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_TimeToLive(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::ServiceResponse() const
    {
        Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_ServiceResponse(put_abi(value)));
        return value;
    }
    template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::UserAccountId() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_UserAccountId(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::SessionId() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_SessionId(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::DisplaySessionId() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_DisplaySessionId(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::ApprovalStatus() const
    {
        Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_ApprovalStatus(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::AuthenticationType() const
    {
        Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_AuthenticationType(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::RequestTime() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_RequestTime(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::ExpirationTime() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_ExpirationTime(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::Sessions() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo)->get_Sessions(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::UnregisteredAccounts() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo)->get_UnregisteredAccounts(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::ServiceResponse() const
    {
        Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value;
        check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo)->get_ServiceResponse(put_abi(value)));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager>
    {
        int32_t WINRT_CALL GetOneTimePassCodeAsync(void* userAccountId, uint32_t codeLength, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>>(this->shim().GetOneTimePassCodeAsync(*reinterpret_cast<hstring const*>(&userAccountId), codeLength));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL AddDeviceAsync(void* userAccountId, void* authenticationToken, void* wnsChannelId, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().AddDeviceAsync(*reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&authenticationToken), *reinterpret_cast<hstring const*>(&wnsChannelId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL RemoveDeviceAsync(void* userAccountId, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().RemoveDeviceAsync(*reinterpret_cast<hstring const*>(&userAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL UpdateWnsChannelAsync(void* userAccountId, void* channelUri, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().UpdateWnsChannelAsync(*reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&channelUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetSessionsAsync(void* userAccountIdList, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>>(this->shim().GetSessionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&userAccountIdList)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetSessionsAndUnregisteredAccountsAsync(void* userAccountIdList, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>>(this->shim().GetSessionsAndUnregisteredAccountsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&userAccountIdList)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ApproveSessionUsingAuthSessionInfoAsync(int32_t sessionAuthentictionStatus, void* authenticationSessionInfo, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().ApproveSessionAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const*>(&sessionAuthentictionStatus), *reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const*>(&authenticationSessionInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL ApproveSessionAsync(int32_t sessionAuthentictionStatus, void* userAccountId, void* sessionId, int32_t sessionAuthenticationType, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().ApproveSessionAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const*>(&sessionAuthentictionStatus), *reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&sessionId), *reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const*>(&sessionAuthenticationType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL DenySessionUsingAuthSessionInfoAsync(void* authenticationSessionInfo, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().DenySessionAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const*>(&authenticationSessionInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL DenySessionAsync(void* userAccountId, void* sessionId, int32_t sessionAuthenticationType, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().DenySessionAsync(*reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&sessionId), *reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const*>(&sessionAuthenticationType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>
    {
        int32_t WINRT_CALL get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult>
    {
        int32_t WINRT_CALL get_Sessions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>>(this->shim().Sessions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServiceResponse(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>(this->shim().ServiceResponse());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo>
    {
        int32_t WINRT_CALL get_Code(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Code());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_TimeInterval(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TimeInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_TimeToLive(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TimeToLive());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServiceResponse(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>(this->shim().ServiceResponse());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo>
    {
        int32_t WINRT_CALL get_UserAccountId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserAccountId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SessionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_DisplaySessionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplaySessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ApprovalStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus>(this->shim().ApprovalStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_AuthenticationType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType>(this->shim().AuthenticationType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_RequestTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().RequestTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ExpirationTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ExpirationTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>
    {
        int32_t WINRT_CALL get_Sessions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>>(this->shim().Sessions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_UnregisteredAccounts(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().UnregisteredAccounts());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ServiceResponse(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>(this->shim().ServiceResponse());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Security::Authentication::Identity::Core
{
    inline Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager MicrosoftAccountMultiFactorAuthenticationManager::Current()
    {
        return impl::call_factory<MicrosoftAccountMultiFactorAuthenticationManager, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>([&](auto&& f) { return f.Current(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> {};
    template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> {};
}
#endif
