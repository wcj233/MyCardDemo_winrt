// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_UI_Accessibility_2_H
#define WINRT_Windows_UI_Accessibility_2_H
#include "winrt/impl/Windows.UI.Accessibility.1.h"
namespace winrt::Windows::UI::Accessibility
{
    struct WINRT_EBO ScreenReaderPositionChangedEventArgs : Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs
    {
        ScreenReaderPositionChangedEventArgs(std::nullptr_t) noexcept {}
        ScreenReaderPositionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Accessibility::IScreenReaderPositionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ScreenReaderService : Windows::UI::Accessibility::IScreenReaderService
    {
        ScreenReaderService(std::nullptr_t) noexcept {}
        ScreenReaderService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Accessibility::IScreenReaderService(ptr, take_ownership_from_abi) {}
        ScreenReaderService();
    };
}
#endif
