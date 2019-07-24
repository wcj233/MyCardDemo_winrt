// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_Preview_Holographic_2_H
#define WINRT_Windows_ApplicationModel_Preview_Holographic_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.1.h"
namespace winrt::Windows::ApplicationModel::Preview::Holographic
{
    struct HolographicApplicationPreview
    {
        HolographicApplicationPreview() = delete;
        static bool IsCurrentViewPresentedOnHolographicDisplay();
        static bool IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs);
    };
    struct WINRT_EBO HolographicKeyboardPlacementOverridePreview : Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview
    {
        HolographicKeyboardPlacementOverridePreview(std::nullptr_t) noexcept {}
        HolographicKeyboardPlacementOverridePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview(ptr, take_ownership_from_abi) {}
        static Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview GetForCurrentView();
    };
}
#endif
