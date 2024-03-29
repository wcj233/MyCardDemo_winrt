// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Graphics_Effects_H
#define WINRT_Windows_Graphics_Effects_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Graphics.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
namespace winrt::impl
{
    template <typename D> hstring consume_Windows_Graphics_Effects_IGraphicsEffect<D>::Name() const
    {
        void* name{};
        check_hresult(WINRT_SHIM(Windows::Graphics::Effects::IGraphicsEffect)->get_Name(&name));
        return { name, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Graphics_Effects_IGraphicsEffect<D>::Name(param::hstring const& name) const
    {
        check_hresult(WINRT_SHIM(Windows::Graphics::Effects::IGraphicsEffect)->put_Name(*(void**)(&name)));
    }
    template <typename D>
    struct produce<D, Windows::Graphics::Effects::IGraphicsEffect> : produce_base<D, Windows::Graphics::Effects::IGraphicsEffect>
    {
        int32_t WINRT_CALL get_Name(void** name) noexcept final try
        {
            clear_abi(name);
            typename D::abi_guard guard(this->shim());
            *name = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_Name(void* name) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&name));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Graphics::Effects::IGraphicsEffectSource> : produce_base<D, Windows::Graphics::Effects::IGraphicsEffectSource>
    {
    };
}
namespace winrt::Windows::Graphics::Effects
{
}
namespace std
{
    template<> struct hash<winrt::Windows::Graphics::Effects::IGraphicsEffect> : winrt::impl::hash_base<winrt::Windows::Graphics::Effects::IGraphicsEffect> {};
    template<> struct hash<winrt::Windows::Graphics::Effects::IGraphicsEffectSource> : winrt::impl::hash_base<winrt::Windows::Graphics::Effects::IGraphicsEffectSource> {};
}
#endif
