// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Printers_Extensions_0_H
#define WINRT_Windows_Devices_Printers_Extensions_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Devices::Printers::Extensions
{
    enum class Print3DWorkflowDetail : int32_t
    {
        Unknown = 0,
        ModelExceedsPrintBed = 1,
        UploadFailed = 2,
        InvalidMaterialSelection = 3,
        InvalidModel = 4,
        ModelNotManifold = 5,
        InvalidPrintTicket = 6,
    };
    enum class Print3DWorkflowStatus : int32_t
    {
        Abandoned = 0,
        Canceled = 1,
        Failed = 2,
        Slicing = 3,
        Submitted = 4,
    };
    struct IPrint3DWorkflow;
    struct IPrint3DWorkflow2;
    struct IPrint3DWorkflowPrintRequestedEventArgs;
    struct IPrint3DWorkflowPrinterChangedEventArgs;
    struct IPrintExtensionContextStatic;
    struct IPrintNotificationEventDetails;
    struct IPrintTaskConfiguration;
    struct IPrintTaskConfigurationSaveRequest;
    struct IPrintTaskConfigurationSaveRequestedDeferral;
    struct IPrintTaskConfigurationSaveRequestedEventArgs;
    struct Print3DWorkflow;
    struct Print3DWorkflowPrintRequestedEventArgs;
    struct Print3DWorkflowPrinterChangedEventArgs;
    struct PrintExtensionContext;
    struct PrintNotificationEventDetails;
    struct PrintTaskConfiguration;
    struct PrintTaskConfigurationSaveRequest;
    struct PrintTaskConfigurationSaveRequestedDeferral;
    struct PrintTaskConfigurationSaveRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflow>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintExtensionContext>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow2" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrintRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrinterChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrintExtensionContextStatic" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrintNotificationEventDetails" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrintTaskConfiguration" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequest" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedDeferral" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflow>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflow" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrintRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrinterChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::PrintExtensionContext>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.PrintExtensionContext" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.PrintNotificationEventDetails" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::PrintTaskConfiguration>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.PrintTaskConfiguration" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequest" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedDeferral" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedEventArgs" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowDetail" };
    };
    template <> struct name<Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Printers.Extensions.Print3DWorkflowStatus" };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        static constexpr guid value{ 0xC56F74BD,0x3669,0x4A66,{ 0xAB,0x42,0xC8,0x15,0x19,0x30,0xCD,0x34 } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        static constexpr guid value{ 0xA2A6C54F,0x8AC1,0x4918,{ 0x97,0x41,0xE3,0x4F,0x30,0x04,0x23,0x9E } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        static constexpr guid value{ 0x19F8C858,0x5AC8,0x4B55,{ 0x8A,0x5F,0xE6,0x15,0x67,0xDA,0xFB,0x4D } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        static constexpr guid value{ 0x45226402,0x95FC,0x4847,{ 0x93,0xB3,0x13,0x4D,0xBF,0x5C,0x60,0xF7 } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        static constexpr guid value{ 0xE70D9FC1,0xFF79,0x4AA4,{ 0x8C,0x9B,0x0C,0x93,0xAE,0xDF,0xDE,0x8A } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        static constexpr guid value{ 0xE00E4C8A,0x4828,0x4DA1,{ 0x8B,0xB8,0x86,0x72,0xDF,0x85,0x15,0xE7 } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        static constexpr guid value{ 0xE3C22451,0x3AA4,0x4885,{ 0x92,0x40,0x31,0x1F,0x5F,0x8F,0xBE,0x9D } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        static constexpr guid value{ 0xEEAF2FCB,0x621E,0x4B62,{ 0xAC,0x77,0xB2,0x81,0xCC,0xE0,0x8D,0x60 } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        static constexpr guid value{ 0xE959D568,0xF729,0x44A4,{ 0x87,0x1D,0xBD,0x06,0x28,0x69,0x6A,0x33 } };
    };
    template <> struct guid_storage<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        static constexpr guid value{ 0xE06C2879,0x0D61,0x4938,{ 0x91,0xD0,0x96,0xA4,0x5B,0xEE,0x84,0x79 } };
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflow>
    {
        using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflow;
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>
    {
        using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>
    {
        using type = Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs;
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>
    {
        using type = Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails;
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfiguration>
    {
        using type = Windows::Devices::Printers::Extensions::IPrintTaskConfiguration;
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>
    {
        using type = Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest;
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>
    {
        using type = Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral;
    };
    template <> struct default_interface<Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>
    {
        using type = Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs;
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_DeviceID(void**) noexcept = 0;
            virtual int32_t WINRT_CALL GetPrintModelPackage(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_IsPrintReady(bool*) noexcept = 0;
            virtual int32_t WINRT_CALL put_IsPrintReady(bool) noexcept = 0;
            virtual int32_t WINRT_CALL add_PrintRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t WINRT_CALL remove_PrintRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL add_PrinterChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t WINRT_CALL remove_PrinterChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Status(int32_t*) noexcept = 0;
            virtual int32_t WINRT_CALL SetExtendedStatus(int32_t) noexcept = 0;
            virtual int32_t WINRT_CALL SetSource(void*) noexcept = 0;
            virtual int32_t WINRT_CALL SetSourceChanged(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_NewDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL FromDeviceId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_PrinterName(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_EventData(void**) noexcept = 0;
            virtual int32_t WINRT_CALL put_EventData(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_PrinterExtensionContext(void**) noexcept = 0;
            virtual int32_t WINRT_CALL add_SaveRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t WINRT_CALL remove_SaveRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL Cancel() noexcept = 0;
            virtual int32_t WINRT_CALL Save(void*) noexcept = 0;
            virtual int32_t WINRT_CALL GetDeferral(void**) noexcept = 0;
            virtual int32_t WINRT_CALL get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL get_Request(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow
    {
        hstring DeviceID() const;
        Windows::Foundation::IInspectable GetPrintModelPackage() const;
        bool IsPrintReady() const;
        void IsPrintReady(bool value) const;
        winrt::event_token PrintRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        using PrintRequested_revoker = impl::event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow, &impl::abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>::remove_PrintRequested>;
        PrintRequested_revoker PrintRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        void PrintRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2
    {
        winrt::event_token PrinterChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        using PrinterChanged_revoker = impl::event_revoker<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2, &impl::abi_t<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>::remove_PrinterChanged>;
        PrinterChanged_revoker PrinterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::Print3DWorkflow, Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        void PrinterChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs
    {
        Windows::Devices::Printers::Extensions::Print3DWorkflowStatus Status() const;
        void SetExtendedStatus(Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const& value) const;
        void SetSource(Windows::Foundation::IInspectable const& source) const;
        void SetSourceChanged(bool value) const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs
    {
        hstring NewDeviceId() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic
    {
        Windows::Foundation::IInspectable FromDeviceId(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails
    {
        hstring PrinterName() const;
        hstring EventData() const;
        void EventData(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration
    {
        Windows::Foundation::IInspectable PrinterExtensionContext() const;
        winrt::event_token SaveRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const;
        using SaveRequested_revoker = impl::event_revoker<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration, &impl::abi_t<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>::remove_SaveRequested>;
        SaveRequested_revoker SaveRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Printers::Extensions::PrintTaskConfiguration, Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const;
        void SaveRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest
    {
        void Cancel() const;
        void Save(Windows::Foundation::IInspectable const& printerExtensionContext) const;
        Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral GetDeferral() const;
        Windows::Foundation::DateTime Deadline() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral
    {
        void Complete() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs
    {
        Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest Request() const;
    };
    template <> struct consume<Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs<D>;
    };
}
#endif
