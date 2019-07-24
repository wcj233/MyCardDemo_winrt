// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_Appointments_2_H
#define WINRT_Windows_ApplicationModel_Appointments_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.1.h"
namespace winrt::Windows::ApplicationModel::Appointments
{
    struct WINRT_EBO Appointment : Windows::ApplicationModel::Appointments::IAppointment,
        impl::require<Appointment, Windows::ApplicationModel::Appointments::IAppointment2, Windows::ApplicationModel::Appointments::IAppointment3>
    {
        Appointment(std::nullptr_t) noexcept {}
        Appointment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointment(ptr, take_ownership_from_abi) {}
        Appointment();
    };
    struct WINRT_EBO AppointmentCalendar : Windows::ApplicationModel::Appointments::IAppointmentCalendar,
        impl::require<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
    {
        AppointmentCalendar(std::nullptr_t) noexcept {}
        AppointmentCalendar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentCalendar(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Appointments::IAppointmentCalendar::DisplayColor;
        using impl::consume_t<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::DisplayColor;
        using Windows::ApplicationModel::Appointments::IAppointmentCalendar::IsHidden;
        using impl::consume_t<AppointmentCalendar, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::IsHidden;
    };
    struct WINRT_EBO AppointmentCalendarSyncManager : Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager,
        impl::require<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
    {
        AppointmentCalendarSyncManager(std::nullptr_t) noexcept {}
        AppointmentCalendarSyncManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::LastAttemptedSyncTime;
        using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::LastAttemptedSyncTime;
        using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::LastSuccessfulSyncTime;
        using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::LastSuccessfulSyncTime;
        using Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager::Status;
        using impl::consume_t<AppointmentCalendarSyncManager, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>::Status;
    };
    struct WINRT_EBO AppointmentConflictResult : Windows::ApplicationModel::Appointments::IAppointmentConflictResult
    {
        AppointmentConflictResult(std::nullptr_t) noexcept {}
        AppointmentConflictResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentConflictResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentException : Windows::ApplicationModel::Appointments::IAppointmentException
    {
        AppointmentException(std::nullptr_t) noexcept {}
        AppointmentException(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentException(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentInvitee : Windows::ApplicationModel::Appointments::IAppointmentInvitee
    {
        AppointmentInvitee(std::nullptr_t) noexcept {}
        AppointmentInvitee(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentInvitee(ptr, take_ownership_from_abi) {}
        AppointmentInvitee();
    };
    struct AppointmentManager
    {
        AppointmentManager() = delete;
        static Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection);
        static Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection);
        static Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate);
        static Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection);
        static Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement);
        static Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate);
        static Windows::Foundation::IAsyncAction ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration);
        static Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId);
        static Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate);
        static Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment);
        static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options);
        static Windows::ApplicationModel::Appointments::AppointmentManagerForUser GetForUser(Windows::System::User const& user);
    };
    struct WINRT_EBO AppointmentManagerForUser : Windows::ApplicationModel::Appointments::IAppointmentManagerForUser
    {
        AppointmentManagerForUser(std::nullptr_t) noexcept {}
        AppointmentManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentManagerForUser(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentOrganizer : Windows::ApplicationModel::Appointments::IAppointmentParticipant
    {
        AppointmentOrganizer(std::nullptr_t) noexcept {}
        AppointmentOrganizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentParticipant(ptr, take_ownership_from_abi) {}
        AppointmentOrganizer();
    };
    struct AppointmentProperties
    {
        AppointmentProperties() = delete;
        static hstring Subject();
        static hstring Location();
        static hstring StartTime();
        static hstring Duration();
        static hstring Reminder();
        static hstring BusyStatus();
        static hstring Sensitivity();
        static hstring OriginalStartTime();
        static hstring IsResponseRequested();
        static hstring AllowNewTimeProposal();
        static hstring AllDay();
        static hstring Details();
        static hstring OnlineMeetingLink();
        static hstring ReplyTime();
        static hstring Organizer();
        static hstring UserResponse();
        static hstring HasInvitees();
        static hstring IsCanceledMeeting();
        static hstring IsOrganizedByUser();
        static hstring Recurrence();
        static hstring Uri();
        static hstring Invitees();
        static Windows::Foundation::Collections::IVector<hstring> DefaultProperties();
        static hstring ChangeNumber();
        static hstring RemoteChangeNumber();
        static hstring DetailsKind();
    };
    struct WINRT_EBO AppointmentRecurrence : Windows::ApplicationModel::Appointments::IAppointmentRecurrence,
        impl::require<AppointmentRecurrence, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
    {
        AppointmentRecurrence(std::nullptr_t) noexcept {}
        AppointmentRecurrence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentRecurrence(ptr, take_ownership_from_abi) {}
        AppointmentRecurrence();
    };
    struct WINRT_EBO AppointmentStore : Windows::ApplicationModel::Appointments::IAppointmentStore,
        impl::require<AppointmentStore, Windows::ApplicationModel::Appointments::IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore3>
    {
        AppointmentStore(std::nullptr_t) noexcept {}
        AppointmentStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStore(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Appointments::IAppointmentStore::CreateAppointmentCalendarAsync;
        using impl::consume_t<AppointmentStore, Windows::ApplicationModel::Appointments::IAppointmentStore2>::CreateAppointmentCalendarAsync;
    };
    struct WINRT_EBO AppointmentStoreChange : Windows::ApplicationModel::Appointments::IAppointmentStoreChange,
        impl::require<AppointmentStoreChange, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
    {
        AppointmentStoreChange(std::nullptr_t) noexcept {}
        AppointmentStoreChange(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChange(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentStoreChangeReader : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader
    {
        AppointmentStoreChangeReader(std::nullptr_t) noexcept {}
        AppointmentStoreChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentStoreChangeTracker : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker,
        impl::require<AppointmentStoreChangeTracker, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
    {
        AppointmentStoreChangeTracker(std::nullptr_t) noexcept {}
        AppointmentStoreChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentStoreChangedDeferral : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral
    {
        AppointmentStoreChangedDeferral(std::nullptr_t) noexcept {}
        AppointmentStoreChangedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentStoreChangedEventArgs : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs
    {
        AppointmentStoreChangedEventArgs(std::nullptr_t) noexcept {}
        AppointmentStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AppointmentStoreNotificationTriggerDetails : Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails
    {
        AppointmentStoreNotificationTriggerDetails(std::nullptr_t) noexcept {}
        AppointmentStoreNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO FindAppointmentsOptions : Windows::ApplicationModel::Appointments::IFindAppointmentsOptions
    {
        FindAppointmentsOptions(std::nullptr_t) noexcept {}
        FindAppointmentsOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Appointments::IFindAppointmentsOptions(ptr, take_ownership_from_abi) {}
        FindAppointmentsOptions();
    };
}
#endif
