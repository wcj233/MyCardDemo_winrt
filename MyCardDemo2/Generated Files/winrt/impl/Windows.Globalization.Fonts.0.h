// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Globalization_Fonts_0_H
#define WINRT_Windows_Globalization_Fonts_0_H
namespace winrt::Windows::UI::Text
{
    enum class FontStretch : int32_t;
    enum class FontStyle : int32_t;
    struct FontWeight;
}
namespace winrt::Windows::Globalization::Fonts
{
    struct ILanguageFont;
    struct ILanguageFontGroup;
    struct ILanguageFontGroupFactory;
    struct LanguageFont;
    struct LanguageFontGroup;
}
namespace winrt::impl
{
    template <> struct category<Windows::Globalization::Fonts::ILanguageFont>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::Fonts::ILanguageFontGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::Fonts::ILanguageFontGroupFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Globalization::Fonts::LanguageFont>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Globalization::Fonts::LanguageFontGroup>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Globalization::Fonts::ILanguageFont>
    {
        static constexpr auto & value{ L"Windows.Globalization.Fonts.ILanguageFont" };
    };
    template <> struct name<Windows::Globalization::Fonts::ILanguageFontGroup>
    {
        static constexpr auto & value{ L"Windows.Globalization.Fonts.ILanguageFontGroup" };
    };
    template <> struct name<Windows::Globalization::Fonts::ILanguageFontGroupFactory>
    {
        static constexpr auto & value{ L"Windows.Globalization.Fonts.ILanguageFontGroupFactory" };
    };
    template <> struct name<Windows::Globalization::Fonts::LanguageFont>
    {
        static constexpr auto & value{ L"Windows.Globalization.Fonts.LanguageFont" };
    };
    template <> struct name<Windows::Globalization::Fonts::LanguageFontGroup>
    {
        static constexpr auto & value{ L"Windows.Globalization.Fonts.LanguageFontGroup" };
    };
    template <> struct guid_storage<Windows::Globalization::Fonts::ILanguageFont>
    {
        static constexpr guid value{ 0xB12E5C3A,0xB76D,0x459B,{ 0xBE,0xEB,0x90,0x11,0x51,0xCD,0x77,0xD1 } };
    };
    template <> struct guid_storage<Windows::Globalization::Fonts::ILanguageFontGroup>
    {
        static constexpr guid value{ 0xF33A7FC3,0x3A5C,0x4AEA,{ 0xB9,0xFF,0xB3,0x9F,0xB2,0x42,0xF7,0xF6 } };
    };
    template <> struct guid_storage<Windows::Globalization::Fonts::ILanguageFontGroupFactory>
    {
        static constexpr guid value{ 0xFCAEAC67,0x4E77,0x49C7,{ 0xB8,0x56,0xDD,0xE9,0x34,0xFC,0x73,0x5B } };
    };
    template <> struct default_interface<Windows::Globalization::Fonts::LanguageFont>
    {
        using type = Windows::Globalization::Fonts::ILanguageFont;
    };
    template <> struct default_interface<Windows::Globalization::Fonts::LanguageFontGroup>
    {
        using type = Windows::Globalization::Fonts::ILanguageFontGroup;
    };
    template <> struct abi<Windows::Globalization::Fonts::ILanguageFont>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_FontFamily(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_FontWeight(struct struct_Windows_UI_Text_FontWeight*) noexcept = 0;
            virtual int32_t WINRT_CALL get_FontStretch(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL get_ScaleFactor(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::Fonts::ILanguageFontGroup>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_UITextFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_UIHeadingFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_UITitleFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_UICaptionFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_UINotificationHeadingFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_TraditionalDocumentFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_ModernDocumentFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_DocumentHeadingFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_FixedWidthTextFont(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_DocumentAlternate1Font(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_DocumentAlternate2Font(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::Fonts::ILanguageFontGroupFactory>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL CreateLanguageFontGroup(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Globalization_Fonts_ILanguageFont
    {
        hstring FontFamily() const;
        Windows::UI::Text::FontWeight FontWeight() const;
        Windows::UI::Text::FontStretch FontStretch() const;
        Windows::UI::Text::FontStyle FontStyle() const;
        double ScaleFactor() const;
    };
    template <> struct consume<Windows::Globalization::Fonts::ILanguageFont>
    {
        template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFont<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_Fonts_ILanguageFontGroup
    {
        Windows::Globalization::Fonts::LanguageFont UITextFont() const;
        Windows::Globalization::Fonts::LanguageFont UIHeadingFont() const;
        Windows::Globalization::Fonts::LanguageFont UITitleFont() const;
        Windows::Globalization::Fonts::LanguageFont UICaptionFont() const;
        Windows::Globalization::Fonts::LanguageFont UINotificationHeadingFont() const;
        Windows::Globalization::Fonts::LanguageFont TraditionalDocumentFont() const;
        Windows::Globalization::Fonts::LanguageFont ModernDocumentFont() const;
        Windows::Globalization::Fonts::LanguageFont DocumentHeadingFont() const;
        Windows::Globalization::Fonts::LanguageFont FixedWidthTextFont() const;
        Windows::Globalization::Fonts::LanguageFont DocumentAlternate1Font() const;
        Windows::Globalization::Fonts::LanguageFont DocumentAlternate2Font() const;
    };
    template <> struct consume<Windows::Globalization::Fonts::ILanguageFontGroup>
    {
        template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory
    {
        Windows::Globalization::Fonts::LanguageFontGroup CreateLanguageFontGroup(param::hstring const& languageTag) const;
    };
    template <> struct consume<Windows::Globalization::Fonts::ILanguageFontGroupFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory<D>;
    };
}
#endif
