// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Phone_System_UserProfile_GameServices_Core_2_H
#define WINRT_Windows_Phone_System_UserProfile_GameServices_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Phone.System.UserProfile.GameServices.Core.1.h"
namespace winrt::Windows::Phone::System::UserProfile::GameServices::Core
{
    struct GameService
    {
        GameService() = delete;
        static Windows::Foundation::Uri ServiceUri();
        static Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetGamerProfileAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Phone::System::UserProfile::GameServices::Core::GameServicePropertyCollection> GetInstalledGameItemsAsync();
        static Windows::Foundation::IAsyncOperation<hstring> GetPartnerTokenAsync(Windows::Foundation::Uri const& audienceUri);
        static Windows::Foundation::IAsyncOperation<hstring> GetPrivilegesAsync();
        static void GrantAchievement(uint32_t achievementId);
        static void GrantAvatarAward(uint32_t avatarAwardId);
        static void PostResult(uint32_t gameVariant, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceScoreKind const& scoreKind, int64_t scoreValue, Windows::Phone::System::UserProfile::GameServices::Core::GameServiceGameOutcome const& gameOutcome, Windows::Storage::Streams::IBuffer const& buffer);
        static void NotifyPartnerTokenExpired(Windows::Foundation::Uri const& audienceUri);
        static uint32_t GetAuthenticationStatus();
    };
    struct WINRT_EBO GameServicePropertyCollection : Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection
    {
        GameServicePropertyCollection(std::nullptr_t) noexcept {}
        GameServicePropertyCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Phone::System::UserProfile::GameServices::Core::IGameServicePropertyCollection(ptr, take_ownership_from_abi) {}
    };
}
#endif
