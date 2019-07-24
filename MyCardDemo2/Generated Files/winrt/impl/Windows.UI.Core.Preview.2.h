// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_UI_Core_Preview_2_H
#define WINRT_Windows_UI_Core_Preview_2_H
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
#include "winrt/impl/Windows.UI.Core.Preview.1.h"
namespace winrt::Windows::UI::Core::Preview
{
    struct WINRT_EBO CoreAppWindowPreview : Windows::UI::Core::Preview::ICoreAppWindowPreview
    {
        CoreAppWindowPreview(std::nullptr_t) noexcept {}
        CoreAppWindowPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::ICoreAppWindowPreview(ptr, take_ownership_from_abi) {}
        static int32_t GetIdFromWindow(Windows::UI::WindowManagement::AppWindow const& window);
    };
    struct WINRT_EBO SystemNavigationCloseRequestedPreviewEventArgs : Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs
    {
        SystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t) noexcept {}
        SystemNavigationCloseRequestedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SystemNavigationManagerPreview : Windows::UI::Core::Preview::ISystemNavigationManagerPreview
    {
        SystemNavigationManagerPreview(std::nullptr_t) noexcept {}
        SystemNavigationManagerPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Core::Preview::ISystemNavigationManagerPreview(ptr, take_ownership_from_abi) {}
        static Windows::UI::Core::Preview::SystemNavigationManagerPreview GetForCurrentView();
    };
}
#endif