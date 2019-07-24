// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#include "pch.h"
#include "winrt/base.h"
void* winrt_make_MyCardDemo2_AddCardContentPage();
void* winrt_make_MyCardDemo2_MainPage();
void* winrt_make_MyCardDemo2_MyConverter();
void* winrt_make_MyCardDemo2_SingleCardUserControl();
void* winrt_make_MyCardDemo2_XamlMetaDataProvider();

bool WINRT_CALL winrt_can_unload_now() noexcept
{
    if (winrt::get_module_lock())
    {
        return false;
    }

    winrt::clear_factory_cache();
    return true;
}

void* WINRT_CALL winrt_get_activation_factory(std::wstring_view const& name)
{
    auto requal = [](std::wstring_view const& left, std::wstring_view const& right) noexcept
    {
        return std::equal(left.rbegin(), left.rend(), right.rbegin(), right.rend());
    };

    if (requal(name, L"MyCardDemo2.AddCardContentPage"))
    {
        return winrt_make_MyCardDemo2_AddCardContentPage();
    }

    if (requal(name, L"MyCardDemo2.MainPage"))
    {
        return winrt_make_MyCardDemo2_MainPage();
    }

    if (requal(name, L"MyCardDemo2.MyConverter"))
    {
        return winrt_make_MyCardDemo2_MyConverter();
    }

    if (requal(name, L"MyCardDemo2.SingleCardUserControl"))
    {
        return winrt_make_MyCardDemo2_SingleCardUserControl();
    }

    if (requal(name, L"MyCardDemo2.XamlMetaDataProvider"))
    {
        return winrt_make_MyCardDemo2_XamlMetaDataProvider();
    }

    return nullptr;
}

int32_t WINRT_CALL WINRT_CanUnloadNow() noexcept
{
#ifdef _WRL_MODULE_H_
    if (!::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().Terminate())
    {
        return 1;
    }
#endif

    return winrt_can_unload_now() ? 0 : 1;
}

int32_t WINRT_CALL WINRT_GetActivationFactory(void* classId, void** factory) noexcept try
{
    uint32_t length{};
    wchar_t const* const buffer = WINRT_WindowsGetStringRawBuffer(classId, &length);
    std::wstring_view const name{ buffer, length };
    *factory = winrt_get_activation_factory(name);

    if (*factory)
    {
        return 0;
    }

#ifdef _WRL_MODULE_H_
    return ::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().GetActivationFactory(static_cast<HSTRING>(classId), reinterpret_cast<::IActivationFactory**>(factory));
#else
    return winrt::hresult_class_not_available(name).to_abi();
#endif
}
catch (...) { return winrt::to_hresult(); }
