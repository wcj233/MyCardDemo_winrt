// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_H
#define WINRT_Windows_Devices_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Devices.Adc.Provider.2.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.2.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.2.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.2.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.2.h"
#include "winrt/impl/Windows.Devices.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Devices::Adc::Provider::IAdcControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::AdcControllerProvider() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_AdcControllerProvider(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Pwm::Provider::IPwmControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::PwmControllerProvider() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_PwmControllerProvider(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Gpio::Provider::IGpioControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::GpioControllerProvider() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_GpioControllerProvider(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::I2c::Provider::II2cControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::I2cControllerProvider() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_I2cControllerProvider(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::Spi::Provider::ISpiControllerProvider consume_Windows_Devices_ILowLevelDevicesAggregateProvider<D>::SpiControllerProvider() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProvider)->get_SpiControllerProvider(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::LowLevelDevicesAggregateProvider consume_Windows_Devices_ILowLevelDevicesAggregateProviderFactory<D>::Create(Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi) const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesAggregateProviderFactory)->Create(*(void**)(&adc), *(void**)(&pwm), *(void**)(&gpio), *(void**)(&i2c), *(void**)(&spi), &value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> Windows::Devices::ILowLevelDevicesAggregateProvider consume_Windows_Devices_ILowLevelDevicesControllerStatics<D>::DefaultProvider() const
    {
        void* value{};
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesControllerStatics)->get_DefaultProvider(&value));
        return { value, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Devices_ILowLevelDevicesControllerStatics<D>::DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Devices::ILowLevelDevicesControllerStatics)->put_DefaultProvider(*(void**)(&value)));
    }
    template <typename D>
    struct produce<D, Windows::Devices::ILowLevelDevicesAggregateProvider> : produce_base<D, Windows::Devices::ILowLevelDevicesAggregateProvider>
    {
        int32_t WINRT_CALL get_AdcControllerProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Adc::Provider::IAdcControllerProvider>(this->shim().AdcControllerProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_PwmControllerProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Pwm::Provider::IPwmControllerProvider>(this->shim().PwmControllerProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_GpioControllerProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Gpio::Provider::IGpioControllerProvider>(this->shim().GpioControllerProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_I2cControllerProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::I2c::Provider::II2cControllerProvider>(this->shim().I2cControllerProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL get_SpiControllerProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Spi::Provider::ISpiControllerProvider>(this->shim().SpiControllerProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::ILowLevelDevicesAggregateProviderFactory> : produce_base<D, Windows::Devices::ILowLevelDevicesAggregateProviderFactory>
    {
        int32_t WINRT_CALL Create(void* adc, void* pwm, void* gpio, void* i2c, void* spi, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::LowLevelDevicesAggregateProvider>(this->shim().Create(*reinterpret_cast<Windows::Devices::Adc::Provider::IAdcControllerProvider const*>(&adc), *reinterpret_cast<Windows::Devices::Pwm::Provider::IPwmControllerProvider const*>(&pwm), *reinterpret_cast<Windows::Devices::Gpio::Provider::IGpioControllerProvider const*>(&gpio), *reinterpret_cast<Windows::Devices::I2c::Provider::II2cControllerProvider const*>(&i2c), *reinterpret_cast<Windows::Devices::Spi::Provider::ISpiControllerProvider const*>(&spi)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::ILowLevelDevicesController> : produce_base<D, Windows::Devices::ILowLevelDevicesController>
    {
    };
    template <typename D>
    struct produce<D, Windows::Devices::ILowLevelDevicesControllerStatics> : produce_base<D, Windows::Devices::ILowLevelDevicesControllerStatics>
    {
        int32_t WINRT_CALL get_DefaultProvider(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::ILowLevelDevicesAggregateProvider>(this->shim().DefaultProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL put_DefaultProvider(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultProvider(*reinterpret_cast<Windows::Devices::ILowLevelDevicesAggregateProvider const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices
{
    inline LowLevelDevicesAggregateProvider::LowLevelDevicesAggregateProvider(Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi) :
        LowLevelDevicesAggregateProvider(impl::call_factory<LowLevelDevicesAggregateProvider, Windows::Devices::ILowLevelDevicesAggregateProviderFactory>([&](auto&& f) { return f.Create(adc, pwm, gpio, i2c, spi); }))
    {
    }
    inline Windows::Devices::ILowLevelDevicesAggregateProvider LowLevelDevicesController::DefaultProvider()
    {
        return impl::call_factory<LowLevelDevicesController, Windows::Devices::ILowLevelDevicesControllerStatics>([&](auto&& f) { return f.DefaultProvider(); });
    }
    inline void LowLevelDevicesController::DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider const& value)
    {
        impl::call_factory<LowLevelDevicesController, Windows::Devices::ILowLevelDevicesControllerStatics>([&](auto&& f) { return f.DefaultProvider(value); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesAggregateProvider> {};
    template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesAggregateProviderFactory> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesAggregateProviderFactory> {};
    template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesController> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesController> {};
    template<> struct hash<winrt::Windows::Devices::ILowLevelDevicesControllerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::ILowLevelDevicesControllerStatics> {};
    template<> struct hash<winrt::Windows::Devices::LowLevelDevicesAggregateProvider> : winrt::impl::hash_base<winrt::Windows::Devices::LowLevelDevicesAggregateProvider> {};
    template<> struct hash<winrt::Windows::Devices::LowLevelDevicesController> : winrt::impl::hash_base<winrt::Windows::Devices::LowLevelDevicesController> {};
}
#endif
