// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Phone_StartScreen_2_H
#define WINRT_Windows_Phone_StartScreen_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Notifications.1.h"
#include "winrt/impl/Windows.Phone.StartScreen.1.h"
namespace winrt::Windows::Phone::StartScreen
{
    struct WINRT_EBO DualSimTile : Windows::Phone::StartScreen::IDualSimTile
    {
        DualSimTile(std::nullptr_t) noexcept {}
        DualSimTile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Phone::StartScreen::IDualSimTile(ptr, take_ownership_from_abi) {}
        DualSimTile();
        static Windows::Phone::StartScreen::DualSimTile GetTileForSim2();
        static Windows::Foundation::IAsyncOperation<bool> UpdateDisplayNameForSim1Async(param::hstring const& name);
        static Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim1();
        static Windows::UI::Notifications::TileUpdater CreateTileUpdaterForSim2();
        static Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim1();
        static Windows::UI::Notifications::BadgeUpdater CreateBadgeUpdaterForSim2();
        static Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim1();
        static Windows::UI::Notifications::ToastNotifier CreateToastNotifierForSim2();
    };
}
#endif
