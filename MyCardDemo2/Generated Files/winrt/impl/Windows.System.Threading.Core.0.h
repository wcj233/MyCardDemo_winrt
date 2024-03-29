// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_System_Threading_Core_0_H
#define WINRT_Windows_System_Threading_Core_0_H
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
namespace winrt::Windows::System::Threading
{
    struct WorkItemHandler;
    enum class WorkItemOptions : uint32_t;
    enum class WorkItemPriority : int32_t;
}
namespace winrt::Windows::System::Threading::Core
{
    struct IPreallocatedWorkItem;
    struct IPreallocatedWorkItemFactory;
    struct ISignalNotifier;
    struct ISignalNotifierStatics;
    struct PreallocatedWorkItem;
    struct SignalNotifier;
    struct SignalHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Threading::Core::ISignalNotifier>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::System::Threading::Core::PreallocatedWorkItem>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Threading::Core::SignalNotifier>
    {
        using type = class_category;
    };
    template <> struct category<Windows::System::Threading::Core::SignalHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        static constexpr auto & value{ L"Windows.System.Threading.Core.IPreallocatedWorkItem" };
    };
    template <> struct name<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        static constexpr auto & value{ L"Windows.System.Threading.Core.IPreallocatedWorkItemFactory" };
    };
    template <> struct name<Windows::System::Threading::Core::ISignalNotifier>
    {
        static constexpr auto & value{ L"Windows.System.Threading.Core.ISignalNotifier" };
    };
    template <> struct name<Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        static constexpr auto & value{ L"Windows.System.Threading.Core.ISignalNotifierStatics" };
    };
    template <> struct name<Windows::System::Threading::Core::PreallocatedWorkItem>
    {
        static constexpr auto & value{ L"Windows.System.Threading.Core.PreallocatedWorkItem" };
    };
    template <> struct name<Windows::System::Threading::Core::SignalNotifier>
    {
        static constexpr auto & value{ L"Windows.System.Threading.Core.SignalNotifier" };
    };
    template <> struct name<Windows::System::Threading::Core::SignalHandler>
    {
        static constexpr auto & value{ L"Windows.System.Threading.Core.SignalHandler" };
    };
    template <> struct guid_storage<Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        static constexpr guid value{ 0xB6DAA9FC,0xBC5B,0x401A,{ 0xA8,0xB2,0x6E,0x75,0x4D,0x14,0xDA,0xA6 } };
    };
    template <> struct guid_storage<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        static constexpr guid value{ 0xE3D32B45,0xDFEA,0x469B,{ 0x82,0xC5,0xF6,0xE3,0xCE,0xFD,0xEA,0xFB } };
    };
    template <> struct guid_storage<Windows::System::Threading::Core::ISignalNotifier>
    {
        static constexpr guid value{ 0x14285E06,0x63A7,0x4713,{ 0xB6,0xD9,0x62,0xF6,0x4B,0x56,0xFB,0x8B } };
    };
    template <> struct guid_storage<Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        static constexpr guid value{ 0x1C4E4566,0x8400,0x46D3,{ 0xA1,0x15,0x7D,0x0C,0x0D,0xFC,0x9F,0x62 } };
    };
    template <> struct guid_storage<Windows::System::Threading::Core::SignalHandler>
    {
        static constexpr guid value{ 0x923C402E,0x4721,0x440E,{ 0x9D,0xDA,0x55,0xB6,0xF2,0xE0,0x77,0x10 } };
    };
    template <> struct default_interface<Windows::System::Threading::Core::PreallocatedWorkItem>
    {
        using type = Windows::System::Threading::Core::IPreallocatedWorkItem;
    };
    template <> struct default_interface<Windows::System::Threading::Core::SignalNotifier>
    {
        using type = Windows::System::Threading::Core::ISignalNotifier;
    };
    template <> struct abi<Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL RunAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL CreateWorkItem(void*, void**) noexcept = 0;
            virtual int32_t WINRT_CALL CreateWorkItemWithPriority(void*, int32_t, void**) noexcept = 0;
            virtual int32_t WINRT_CALL CreateWorkItemWithPriorityAndOptions(void*, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::Core::ISignalNotifier>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL Enable() noexcept = 0;
            virtual int32_t WINRT_CALL Terminate() noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        struct WINRT_NOVTABLE type : inspectable_abi
        {
            virtual int32_t WINRT_CALL AttachToEvent(void*, void*, void**) noexcept = 0;
            virtual int32_t WINRT_CALL AttachToEventWithTimeout(void*, void*, int64_t, void**) noexcept = 0;
            virtual int32_t WINRT_CALL AttachToSemaphore(void*, void*, void**) noexcept = 0;
            virtual int32_t WINRT_CALL AttachToSemaphoreWithTimeout(void*, void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Threading::Core::SignalHandler>
    {
        struct WINRT_NOVTABLE type : unknown_abi
        {
            virtual int32_t WINRT_CALL Invoke(void*, bool) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_IPreallocatedWorkItem
    {
        Windows::Foundation::IAsyncAction RunAsync() const;
    };
    template <> struct consume<Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_IPreallocatedWorkItem<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory
    {
        Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItem(Windows::System::Threading::WorkItemHandler const& handler) const;
        Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItemWithPriority(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) const;
        Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItemWithPriorityAndOptions(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) const;
    };
    template <> struct consume<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_ISignalNotifier
    {
        void Enable() const;
        void Terminate() const;
    };
    template <> struct consume<Windows::System::Threading::Core::ISignalNotifier>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_ISignalNotifier<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_ISignalNotifierStatics
    {
        Windows::System::Threading::Core::SignalNotifier AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const;
        Windows::System::Threading::Core::SignalNotifier AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const;
        Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const;
        Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const;
    };
    template <> struct consume<Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>;
    };
}
#endif
