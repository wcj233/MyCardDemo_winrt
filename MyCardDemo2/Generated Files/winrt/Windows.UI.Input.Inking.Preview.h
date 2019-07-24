// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_UI_Input_Inking_Preview_H
#define WINRT_Windows_UI_Input_Inking_Preview_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Input.Inking.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.Preview.2.h"
namespace winrt::impl
{
    template <typename D> Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreviewStatics<D>::CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics)->CreateForVisual(*(void**)(&inputPanelVisual), impl::bind_in(inputPanelRect), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D> Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview consume_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreviewStatics<D>::CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect, Windows::UI::Composition::Visual const& viewportVisual, Windows::Foundation::Rect const& viewportRect) const
    {
        void* result{};
        check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics)->CreateForVisualWithViewportClip(*(void**)(&inputPanelVisual), impl::bind_in(inputPanelRect), *(void**)(&viewportVisual), impl::bind_in(viewportRect), &result));
        return { result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview> : produce_base<D, Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics> : produce_base<D, Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics>
    {
        int32_t WINRT_CALL CreateForVisual(void* inputPanelVisual, Windows::Foundation::Rect inputPanelRect, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview>(this->shim().CreateForVisual(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&inputPanelVisual), *reinterpret_cast<Windows::Foundation::Rect const*>(&inputPanelRect)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateForVisualWithViewportClip(void* inputPanelVisual, Windows::Foundation::Rect inputPanelRect, void* viewportVisual, Windows::Foundation::Rect viewportRect, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview>(this->shim().CreateForVisual(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&inputPanelVisual), *reinterpret_cast<Windows::Foundation::Rect const*>(&inputPanelRect), *reinterpret_cast<Windows::UI::Composition::Visual const*>(&viewportVisual), *reinterpret_cast<Windows::Foundation::Rect const*>(&viewportRect)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Input::Inking::Preview
{
    inline Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview PalmRejectionDelayZonePreview::CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect)
    {
        return impl::call_factory<PalmRejectionDelayZonePreview, Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics>([&](auto&& f) { return f.CreateForVisual(inputPanelVisual, inputPanelRect); });
    }
    inline Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview PalmRejectionDelayZonePreview::CreateForVisual(Windows::UI::Composition::Visual const& inputPanelVisual, Windows::Foundation::Rect const& inputPanelRect, Windows::UI::Composition::Visual const& viewportVisual, Windows::Foundation::Rect const& viewportRect)
    {
        return impl::call_factory<PalmRejectionDelayZonePreview, Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics>([&](auto&& f) { return f.CreateForVisual(inputPanelVisual, inputPanelRect, viewportVisual, viewportRect); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreview> {};
    template<> struct hash<winrt::Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Preview::IPalmRejectionDelayZonePreviewStatics> {};
    template<> struct hash<winrt::Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Preview::PalmRejectionDelayZonePreview> {};
}
#endif
