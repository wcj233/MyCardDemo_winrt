// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_ConversationalAgent_1_H
#define WINRT_Windows_ApplicationModel_ConversationalAgent_1_H
#include "winrt/impl/Windows.ApplicationModel.ConversationalAgent.0.h"
namespace winrt::Windows::ApplicationModel::ConversationalAgent
{
    struct WINRT_EBO IConversationalAgentSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSession>
    {
        IConversationalAgentSession(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IConversationalAgentSessionInterruptedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSessionInterruptedEventArgs>
    {
        IConversationalAgentSessionInterruptedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSessionInterruptedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IConversationalAgentSessionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSessionStatics>
    {
        IConversationalAgentSessionStatics(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSessionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IConversationalAgentSignal :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSignal>
    {
        IConversationalAgentSignal(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSignal(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IConversationalAgentSignalDetectedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSignalDetectedEventArgs>
    {
        IConversationalAgentSignalDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSignalDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IConversationalAgentSystemStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConversationalAgentSystemStateChangedEventArgs>
    {
        IConversationalAgentSystemStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConversationalAgentSystemStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
