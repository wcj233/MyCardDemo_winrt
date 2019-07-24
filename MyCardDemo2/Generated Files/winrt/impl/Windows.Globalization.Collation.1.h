// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Globalization_Collation_1_H
#define WINRT_Windows_Globalization_Collation_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Globalization.Collation.0.h"
namespace winrt::Windows::Globalization::Collation
{
    struct WINRT_EBO ICharacterGrouping :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICharacterGrouping>
    {
        ICharacterGrouping(std::nullptr_t = nullptr) noexcept {}
        ICharacterGrouping(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICharacterGroupings :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICharacterGroupings>,
        impl::require<Windows::Globalization::Collation::ICharacterGroupings, Windows::Foundation::Collections::IIterable<Windows::Globalization::Collation::CharacterGrouping>, Windows::Foundation::Collections::IVectorView<Windows::Globalization::Collation::CharacterGrouping>>
    {
        ICharacterGroupings(std::nullptr_t = nullptr) noexcept {}
        ICharacterGroupings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICharacterGroupingsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICharacterGroupingsFactory>
    {
        ICharacterGroupingsFactory(std::nullptr_t = nullptr) noexcept {}
        ICharacterGroupingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif