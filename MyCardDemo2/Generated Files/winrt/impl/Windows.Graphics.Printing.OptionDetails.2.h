// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Graphics_Printing_OptionDetails_2_H
#define WINRT_Windows_Graphics_Printing_OptionDetails_2_H
#include "winrt/impl/Windows.Graphics.Printing.1.h"
#include "winrt/impl/Windows.Graphics.Printing.OptionDetails.1.h"
namespace winrt::Windows::Graphics::Printing::OptionDetails
{
    struct WINRT_EBO PrintBindingOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintBindingOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails>
    {
        PrintBindingOptionDetails(std::nullptr_t) noexcept {}
        PrintBindingOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintBorderingOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintBorderingOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails>
    {
        PrintBorderingOptionDetails(std::nullptr_t) noexcept {}
        PrintBorderingOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintCollationOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCollationOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails>
    {
        PrintCollationOptionDetails(std::nullptr_t) noexcept {}
        PrintCollationOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintColorModeOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintColorModeOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails>
    {
        PrintColorModeOptionDetails(std::nullptr_t) noexcept {}
        PrintColorModeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintCopiesOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCopiesOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails>
    {
        PrintCopiesOptionDetails(std::nullptr_t) noexcept {}
        PrintCopiesOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintCustomItemDetails : Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails
    {
        PrintCustomItemDetails(std::nullptr_t) noexcept {}
        PrintCustomItemDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintCustomItemListOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3>
    {
        PrintCustomItemListOptionDetails(std::nullptr_t) noexcept {}
        PrintCustomItemListOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
        using impl::consume_t<PrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>::AddItem;
        using impl::consume_t<PrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2>::AddItem;
    };
    struct WINRT_EBO PrintCustomTextOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCustomTextOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2>
    {
        PrintCustomTextOptionDetails(std::nullptr_t) noexcept {}
        PrintCustomTextOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintCustomToggleOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCustomToggleOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails>
    {
        PrintCustomToggleOptionDetails(std::nullptr_t) noexcept {}
        PrintCustomToggleOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintDuplexOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintDuplexOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails>
    {
        PrintDuplexOptionDetails(std::nullptr_t) noexcept {}
        PrintDuplexOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintHolePunchOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintHolePunchOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails>
    {
        PrintHolePunchOptionDetails(std::nullptr_t) noexcept {}
        PrintHolePunchOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintMediaSizeOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintMediaSizeOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails>
    {
        PrintMediaSizeOptionDetails(std::nullptr_t) noexcept {}
        PrintMediaSizeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintMediaTypeOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintMediaTypeOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails>
    {
        PrintMediaTypeOptionDetails(std::nullptr_t) noexcept {}
        PrintMediaTypeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintOrientationOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintOrientationOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails>
    {
        PrintOrientationOptionDetails(std::nullptr_t) noexcept {}
        PrintOrientationOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintPageRangeOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintPageRangeOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails>
    {
        PrintPageRangeOptionDetails(std::nullptr_t) noexcept {}
        PrintPageRangeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintQualityOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintQualityOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails>
    {
        PrintQualityOptionDetails(std::nullptr_t) noexcept {}
        PrintQualityOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintStapleOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintStapleOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails>
    {
        PrintStapleOptionDetails(std::nullptr_t) noexcept {}
        PrintStapleOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintTaskOptionChangedEventArgs : Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs
    {
        PrintTaskOptionChangedEventArgs(std::nullptr_t) noexcept {}
        PrintTaskOptionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PrintTaskOptionDetails : Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails,
        impl::require<PrintTaskOptionDetails, Windows::Graphics::Printing::IPrintTaskOptionsCore, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2>
    {
        PrintTaskOptionDetails(std::nullptr_t) noexcept {}
        PrintTaskOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails(ptr, take_ownership_from_abi) {}
        static Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions);
    };
}
#endif
