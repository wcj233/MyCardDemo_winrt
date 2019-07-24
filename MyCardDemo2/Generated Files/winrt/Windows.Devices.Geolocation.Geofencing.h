// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Geolocation_Geofencing_H
#define WINRT_Windows_Devices_Geolocation_Geofencing_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.Geolocation.h"
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Devices.Geolocation.Geofencing.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::StartTime() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_StartTime(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::Duration() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::DwellTime() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_DwellTime(put_abi(value)));
        return value;
    }
    template <typename D> hstring consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_Id(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::MonitoredStates() const
    {
        Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_MonitoredStates(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Devices::Geolocation::IGeoshape consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::Geoshape() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_Geoshape(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> bool consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>::SingleUse() const
    {
        bool value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofence)->get_SingleUse(&value));
        return value;
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::Create(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape) const
    {
        void* geofence{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->Create(*(void**)(&id), *(void**)(&geoshape), &geofence));
        return { geofence, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::CreateWithMonitorStates(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse) const
    {
        void* geofence{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->CreateWithMonitorStates(*(void**)(&id), *(void**)(&geoshape), static_cast<uint32_t>(monitoredStates), singleUse, &geofence));
        return { geofence, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::CreateWithMonitorStatesAndDwellTime(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime) const
    {
        void* geofence{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->CreateWithMonitorStatesAndDwellTime(*(void**)(&id), *(void**)(&geoshape), static_cast<uint32_t>(monitoredStates), singleUse, impl::bind_in(dwellTime), &geofence));
        return { geofence, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>::CreateWithMonitorStatesDwellTimeStartTimeAndDuration(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const
    {
        void* geofence{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceFactory)->CreateWithMonitorStatesDwellTimeStartTimeAndDuration(*(void**)(&id), *(void**)(&geoshape), static_cast<uint32_t>(monitoredStates), singleUse, impl::bind_in(dwellTime), impl::bind_in(startTime), impl::bind_in(duration), &geofence));
        return { geofence, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::Status() const
    {
        Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence> consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::Geofences() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->get_Geofences(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geoposition consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::LastKnownGeoposition() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->get_LastKnownGeoposition(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> winrt::event_token consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::GeofenceStateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->add_GeofenceStateChanged(*(void**)(&eventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::GeofenceStateChanged_revoker consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::GeofenceStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        return impl::make_event_revoker<D, GeofenceStateChanged_revoker>(this, GeofenceStateChanged(eventHandler));
    }
    template <typename D> void consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::GeofenceStateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->remove_GeofenceStateChanged(impl::bind_in(token)));
    }
    template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::ReadReports() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->ReadReports(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> winrt::event_token consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->add_StatusChanged(*(void**)(&eventHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::StatusChanged_revoker consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const
    {
        return impl::make_event_revoker<D, StatusChanged_revoker>(this, StatusChanged(eventHandler));
    }
    template <typename D> void consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>::StatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor)->remove_StatusChanged(impl::bind_in(token)));
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceMonitor consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics)->get_Current(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceState consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::NewState() const
    {
        Windows::Devices::Geolocation::Geofencing::GeofenceState value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_NewState(put_abi(value)));
        return value;
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::Geofence consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::Geofence() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_Geofence(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geoposition consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::Geoposition() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_Geoposition(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>::RemovalReason() const
    {
        Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason value;
        check_hresult(WINRT_SHIM(Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport)->get_RemovalReason(put_abi(value)));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofence> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofence>
    {
        int32_t WINRT_CALL get_StartTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_DwellTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DwellTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_MonitoredStates(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>(this->shim().MonitoredStates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Geoshape(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::IGeoshape>(this->shim().Geoshape());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SingleUse(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SingleUse());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
    {
        int32_t WINRT_CALL Create(void* id, void* geoshape, void** geofence) noexcept final try
        {
            clear_abi(geofence);
            typename D::abi_guard guard(this->shim());
            *geofence = detach_from<Windows::Devices::Geolocation::Geofencing::Geofence>(this->shim().Create(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateWithMonitorStates(void* id, void* geoshape, uint32_t monitoredStates, bool singleUse, void** geofence) noexcept final try
        {
            clear_abi(geofence);
            typename D::abi_guard guard(this->shim());
            *geofence = detach_from<Windows::Devices::Geolocation::Geofencing::Geofence>(this->shim().CreateWithMonitorStates(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape), *reinterpret_cast<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const*>(&monitoredStates), singleUse));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateWithMonitorStatesAndDwellTime(void* id, void* geoshape, uint32_t monitoredStates, bool singleUse, int64_t dwellTime, void** geofence) noexcept final try
        {
            clear_abi(geofence);
            typename D::abi_guard guard(this->shim());
            *geofence = detach_from<Windows::Devices::Geolocation::Geofencing::Geofence>(this->shim().CreateWithMonitorStatesAndDwellTime(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape), *reinterpret_cast<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const*>(&monitoredStates), singleUse, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&dwellTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateWithMonitorStatesDwellTimeStartTimeAndDuration(void* id, void* geoshape, uint32_t monitoredStates, bool singleUse, int64_t dwellTime, int64_t startTime, int64_t duration, void** geofence) noexcept final try
        {
            clear_abi(geofence);
            typename D::abi_guard guard(this->shim());
            *geofence = detach_from<Windows::Devices::Geolocation::Geofencing::Geofence>(this->shim().CreateWithMonitorStatesDwellTimeStartTimeAndDuration(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Geolocation::IGeoshape const*>(&geoshape), *reinterpret_cast<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const*>(&monitoredStates), singleUse, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&dwellTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
    {
        int32_t WINRT_CALL get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Geofences(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence>>(this->shim().Geofences());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_LastKnownGeoposition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geoposition>(this->shim().LastKnownGeoposition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL add_GeofenceStateChanged(void* eventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().GeofenceStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_GeofenceStateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeofenceStateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t WINRT_CALL ReadReports(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>>(this->shim().ReadReports());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL add_StatusChanged(void* eventHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().StatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL remove_StatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
    {
        int32_t WINRT_CALL get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> : produce_base<D, Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
    {
        int32_t WINRT_CALL get_NewState(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geofencing::GeofenceState>(this->shim().NewState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Geofence(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geofencing::Geofence>(this->shim().Geofence());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_Geoposition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geoposition>(this->shim().Geoposition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_RemovalReason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason>(this->shim().RemovalReason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::Geolocation::Geofencing
{
    inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape) :
        Geofence(impl::call_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>([&](auto&& f) { return f.Create(id, geoshape); }))
    {
    }
    inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse) :
        Geofence(impl::call_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>([&](auto&& f) { return f.CreateWithMonitorStates(id, geoshape, monitoredStates, singleUse); }))
    {
    }
    inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime) :
        Geofence(impl::call_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>([&](auto&& f) { return f.CreateWithMonitorStatesAndDwellTime(id, geoshape, monitoredStates, singleUse, dwellTime); }))
    {
    }
    inline Geofence::Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) :
        Geofence(impl::call_factory<Geofence, Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>([&](auto&& f) { return f.CreateWithMonitorStatesDwellTimeStartTimeAndDuration(id, geoshape, monitoredStates, singleUse, dwellTime, startTime, duration); }))
    {
    }
    inline Windows::Devices::Geolocation::Geofencing::GeofenceMonitor GeofenceMonitor::Current()
    {
        return impl::call_factory<GeofenceMonitor, Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>([&](auto&& f) { return f.Current(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofence> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::IGeofence> {};
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> {};
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> {};
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> {};
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> {};
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::Geofence> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::Geofence> {};
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor> {};
    template<> struct hash<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> : winrt::impl::hash_base<winrt::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> {};
}
#endif
