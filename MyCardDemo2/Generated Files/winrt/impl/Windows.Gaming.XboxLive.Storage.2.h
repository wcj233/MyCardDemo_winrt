// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Gaming_XboxLive_Storage_2_H
#define WINRT_Windows_Gaming_XboxLive_Storage_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Gaming.XboxLive.Storage.1.h"
namespace winrt::Windows::Gaming::XboxLive::Storage
{
    struct WINRT_EBO GameSaveBlobGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult
    {
        GameSaveBlobGetResult(std::nullptr_t) noexcept {}
        GameSaveBlobGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveBlobInfo : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo
    {
        GameSaveBlobInfo(std::nullptr_t) noexcept {}
        GameSaveBlobInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveBlobInfoGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult
    {
        GameSaveBlobInfoGetResult(std::nullptr_t) noexcept {}
        GameSaveBlobInfoGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveBlobInfoQuery : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery
    {
        GameSaveBlobInfoQuery(std::nullptr_t) noexcept {}
        GameSaveBlobInfoQuery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveContainer : Windows::Gaming::XboxLive::Storage::IGameSaveContainer
    {
        GameSaveContainer(std::nullptr_t) noexcept {}
        GameSaveContainer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainer(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveContainerInfo : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo
    {
        GameSaveContainerInfo(std::nullptr_t) noexcept {}
        GameSaveContainerInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveContainerInfoGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult
    {
        GameSaveContainerInfoGetResult(std::nullptr_t) noexcept {}
        GameSaveContainerInfoGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveContainerInfoQuery : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery
    {
        GameSaveContainerInfoQuery(std::nullptr_t) noexcept {}
        GameSaveContainerInfoQuery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveOperationResult : Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult
    {
        GameSaveOperationResult(std::nullptr_t) noexcept {}
        GameSaveOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO GameSaveProvider : Windows::Gaming::XboxLive::Storage::IGameSaveProvider
    {
        GameSaveProvider(std::nullptr_t) noexcept {}
        GameSaveProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveProvider(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GetForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId);
        static Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GetSyncOnDemandForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId);
    };
    struct WINRT_EBO GameSaveProviderGetResult : Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult
    {
        GameSaveProviderGetResult(std::nullptr_t) noexcept {}
        GameSaveProviderGetResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
