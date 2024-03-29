// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_UI_Xaml_Automation_Text_0_H
#define WINRT_Windows_UI_Xaml_Automation_Text_0_H
namespace winrt::Windows::UI::Xaml::Automation::Text
{
    enum class TextPatternRangeEndpoint : int32_t
    {
        Start = 0,
        End = 1,
    };
    enum class TextUnit : int32_t
    {
        Character = 0,
        Format = 1,
        Word = 2,
        Line = 3,
        Paragraph = 4,
        Page = 5,
        Document = 6,
    };
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Automation::Text::TextUnit>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Text.TextPatternRangeEndpoint" };
    };
    template <> struct name<Windows::UI::Xaml::Automation::Text::TextUnit>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Automation.Text.TextUnit" };
    };
}
#endif
