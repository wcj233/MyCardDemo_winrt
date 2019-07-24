// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_Wallet_System_2_H
#define WINRT_Windows_ApplicationModel_Wallet_System_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.System.1.h"
namespace winrt::Windows::ApplicationModel::Wallet::System
{
    struct WINRT_EBO WalletItemSystemStore : Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore,
        impl::require<WalletItemSystemStore, Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2>
    {
        WalletItemSystemStore(std::nullptr_t) noexcept {}
        WalletItemSystemStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore(ptr, take_ownership_from_abi) {}
    };
    struct WalletManagerSystem
    {
        WalletManagerSystem() = delete;
        static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Wallet::System::WalletItemSystemStore> RequestStoreAsync();
    };
}
#endif