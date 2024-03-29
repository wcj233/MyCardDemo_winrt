// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_Calls_Background_H
#define WINRT_Windows_ApplicationModel_Calls_Background_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.ApplicationModel.Calls.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Background.2.h"
namespace winrt::impl
{
    template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>::PhoneNumber() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails)->get_PhoneNumber(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> winrt::guid consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>::LineId() const
    {
        winrt::guid value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails)->get_LineId(put_abi(value)));
        return value;
    }
    template <typename D> Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>::CallBlockedReason() const
    {
        Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails)->get_CallBlockedReason(put_abi(value)));
        return value;
    }
    template <typename D> winrt::guid consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails<D>::RequestId() const
    {
        winrt::guid result;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails)->get_RequestId(put_abi(result)));
        return result;
    }
    template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails<D>::PhoneNumber() const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails)->get_PhoneNumber(&result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> winrt::guid consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>::LineId() const
    {
        winrt::guid value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails)->get_LineId(put_abi(value)));
        return value;
    }
    template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>::PhoneNumber() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails)->get_PhoneNumber(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails)->get_DisplayName(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>::DismissalTime() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails)->get_DismissalTime(put_abi(value)));
        return value;
    }
    template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>::TextReplyMessage() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails)->get_TextReplyMessage(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>::Reason() const
    {
        Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason value;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails)->get_Reason(put_abi(value)));
        return value;
    }
    template <typename D> winrt::guid consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>::LineId() const
    {
        winrt::guid result;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails)->get_LineId(put_abi(result)));
        return result;
    }
    template <typename D> Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>::ChangeType() const
    {
        Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind result;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails)->get_ChangeType(put_abi(result)));
        return result;
    }
    template <typename D> bool consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>::HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties const& lineProperty) const
    {
        bool result;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails)->HasLinePropertyChanged(static_cast<uint32_t>(lineProperty), &result));
        return result;
    }
    template <typename D> winrt::guid consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>::LineId() const
    {
        winrt::guid result;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails)->get_LineId(put_abi(result)));
        return result;
    }
    template <typename D> int32_t consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>::VoicemailCount() const
    {
        int32_t result;
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails)->get_VoicemailCount(&result));
        return result;
    }
    template <typename D> hstring consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>::OperatorMessage() const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails)->get_OperatorMessage(&result));
        return { result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>
    {
        int32_t WINRT_CALL get_PhoneNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhoneNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_LineId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LineId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_CallBlockedReason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason>(this->shim().CallBlockedReason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>
    {
        int32_t WINRT_CALL get_RequestId(winrt::guid* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::guid>(this->shim().RequestId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_PhoneNumber(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().PhoneNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>
    {
        int32_t WINRT_CALL get_LineId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().LineId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_PhoneNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhoneNumber());
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
        int32_t WINRT_CALL get_DismissalTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().DismissalTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_TextReplyMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TextReplyMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Reason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason>(this->shim().Reason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>
    {
        int32_t WINRT_CALL get_LineId(winrt::guid* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::guid>(this->shim().LineId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_ChangeType(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind>(this->shim().ChangeType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL HasLinePropertyChanged(uint32_t lineProperty, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().HasLinePropertyChanged(*reinterpret_cast<Windows::ApplicationModel::Calls::Background::PhoneLineProperties const*>(&lineProperty)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>
    {
        int32_t WINRT_CALL get_LineId(winrt::guid* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::guid>(this->shim().LineId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_VoicemailCount(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().VoicemailCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_OperatorMessage(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().OperatorMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::ApplicationModel::Calls::Background
{
}
namespace std
{
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails> {};
    template<> struct hash<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails> {};
}
#endif
