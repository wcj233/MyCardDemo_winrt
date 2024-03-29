// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_System_Display_0_H
#define WINRT_Windows_System_Display_0_H
namespace winrt::Windows::System::Display
{
    struct IDisplayRequest;
    struct DisplayRequest;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Display::IDisplayRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Display::DisplayRequest>
    {
        using type = class_category;
    };
    template <> struct name<Windows::System::Display::IDisplayRequest>
    {
        static constexpr auto & value{ L"Windows.System.Display.IDisplayRequest" };
    };
    template <> struct name<Windows::System::Display::DisplayRequest>
    {
        static constexpr auto & value{ L"Windows.System.Display.DisplayRequest" };
    };
    template <> struct guid_storage<Windows::System::Display::IDisplayRequest>
    {
        static constexpr guid value{ 0xE5732044,0xF49F,0x4B60,{ 0x8D,0xD4,0x5E,0x7E,0x3A,0x63,0x2A,0xC0 } };
    };
    template <> struct default_interface<Windows::System::Display::DisplayRequest>
    {
        using type = Windows::System::Display::IDisplayRequest;
    };
    template <> struct abi<Windows::System::Display::IDisplayRequest>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL RequestActive() noexcept = 0;
            virtual int32_t WINRT_CALL RequestRelease() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Display_IDisplayRequest
    {
        void RequestActive() const;
        void RequestRelease() const;
    };
    template <> struct consume<Windows::System::Display::IDisplayRequest>
    {
        template <typename D> using type = consume_Windows_System_Display_IDisplayRequest<D>;
    };
}
#endif
