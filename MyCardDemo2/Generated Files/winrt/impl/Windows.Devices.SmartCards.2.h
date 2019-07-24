// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_SmartCards_2_H
#define WINRT_Windows_Devices_SmartCards_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.SmartCards.1.h"
namespace winrt::Windows::Devices::SmartCards
{
    struct SmartCardPinResetHandler : Windows::Foundation::IUnknown
    {
        SmartCardPinResetHandler(std::nullptr_t = nullptr) noexcept {}
        SmartCardPinResetHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SmartCardPinResetHandler(L lambda);
        template <typename F> SmartCardPinResetHandler(F* function);
        template <typename O, typename M> SmartCardPinResetHandler(O* object, M method);
        template <typename O, typename M> SmartCardPinResetHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SmartCardPinResetHandler(weak_ref<O>&& object, M method);
        void operator()(Windows::Devices::SmartCards::SmartCardProvisioning const& sender, Windows::Devices::SmartCards::SmartCardPinResetRequest const& request) const;
    };
    struct WINRT_EBO CardAddedEventArgs : Windows::Devices::SmartCards::ICardAddedEventArgs
    {
        CardAddedEventArgs(std::nullptr_t) noexcept {}
        CardAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ICardAddedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CardRemovedEventArgs : Windows::Devices::SmartCards::ICardRemovedEventArgs
    {
        CardRemovedEventArgs(std::nullptr_t) noexcept {}
        CardRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ICardRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct KnownSmartCardAppletIds
    {
        KnownSmartCardAppletIds() = delete;
        static Windows::Storage::Streams::IBuffer PaymentSystemEnvironment();
        static Windows::Storage::Streams::IBuffer ProximityPaymentSystemEnvironment();
    };
    struct WINRT_EBO SmartCard : Windows::Devices::SmartCards::ISmartCard,
        impl::require<SmartCard, Windows::Devices::SmartCards::ISmartCardConnect>
    {
        SmartCard(std::nullptr_t) noexcept {}
        SmartCard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCard(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardAppletIdGroup : Windows::Devices::SmartCards::ISmartCardAppletIdGroup,
        impl::require<SmartCardAppletIdGroup, Windows::Devices::SmartCards::ISmartCardAppletIdGroup2>
    {
        SmartCardAppletIdGroup(std::nullptr_t) noexcept {}
        SmartCardAppletIdGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardAppletIdGroup(ptr, take_ownership_from_abi) {}
        SmartCardAppletIdGroup();
        SmartCardAppletIdGroup(param::hstring const& displayName, param::vector<Windows::Storage::Streams::IBuffer> const& appletIds, Windows::Devices::SmartCards::SmartCardEmulationCategory const& emulationCategory, Windows::Devices::SmartCards::SmartCardEmulationType const& emulationType);
        static uint16_t MaxAppletIds();
    };
    struct WINRT_EBO SmartCardAppletIdGroupRegistration : Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration,
        impl::require<SmartCardAppletIdGroupRegistration, Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration2>
    {
        SmartCardAppletIdGroupRegistration(std::nullptr_t) noexcept {}
        SmartCardAppletIdGroupRegistration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardAppletIdGroupRegistration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardAutomaticResponseApdu : Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu,
        impl::require<SmartCardAutomaticResponseApdu, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu2, Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu3>
    {
        SmartCardAutomaticResponseApdu(std::nullptr_t) noexcept {}
        SmartCardAutomaticResponseApdu(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardAutomaticResponseApdu(ptr, take_ownership_from_abi) {}
        SmartCardAutomaticResponseApdu(Windows::Storage::Streams::IBuffer const& commandApdu, Windows::Storage::Streams::IBuffer const& responseApdu);
    };
    struct WINRT_EBO SmartCardChallengeContext : Windows::Devices::SmartCards::ISmartCardChallengeContext
    {
        SmartCardChallengeContext(std::nullptr_t) noexcept {}
        SmartCardChallengeContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardChallengeContext(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardConnection : Windows::Devices::SmartCards::ISmartCardConnection
    {
        SmartCardConnection(std::nullptr_t) noexcept {}
        SmartCardConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardConnection(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardCryptogramGenerator : Windows::Devices::SmartCards::ISmartCardCryptogramGenerator,
        impl::require<SmartCardCryptogramGenerator, Windows::Devices::SmartCards::ISmartCardCryptogramGenerator2>
    {
        SmartCardCryptogramGenerator(std::nullptr_t) noexcept {}
        SmartCardCryptogramGenerator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGenerator(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardCryptogramGenerator> GetSmartCardCryptogramGeneratorAsync();
        static bool IsSupported();
    };
    struct WINRT_EBO SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult
    {
        SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(std::nullptr_t) noexcept {}
        SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult();
    };
    struct WINRT_EBO SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult
    {
        SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(std::nullptr_t) noexcept {}
        SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult();
    };
    struct WINRT_EBO SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult
    {
        SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(std::nullptr_t) noexcept {}
        SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult();
    };
    struct WINRT_EBO SmartCardCryptogramMaterialCharacteristics : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics
    {
        SmartCardCryptogramMaterialCharacteristics(std::nullptr_t) noexcept {}
        SmartCardCryptogramMaterialCharacteristics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialCharacteristics(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramMaterialCharacteristics();
    };
    struct WINRT_EBO SmartCardCryptogramMaterialPackageCharacteristics : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics
    {
        SmartCardCryptogramMaterialPackageCharacteristics(std::nullptr_t) noexcept {}
        SmartCardCryptogramMaterialPackageCharacteristics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPackageCharacteristics(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramMaterialPackageCharacteristics();
    };
    struct WINRT_EBO SmartCardCryptogramMaterialPossessionProof : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof
    {
        SmartCardCryptogramMaterialPossessionProof(std::nullptr_t) noexcept {}
        SmartCardCryptogramMaterialPossessionProof(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramMaterialPossessionProof(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardCryptogramPlacementStep : Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep
    {
        SmartCardCryptogramPlacementStep(std::nullptr_t) noexcept {}
        SmartCardCryptogramPlacementStep(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramPlacementStep(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramPlacementStep();
    };
    struct WINRT_EBO SmartCardCryptogramStorageKeyCharacteristics : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics
    {
        SmartCardCryptogramStorageKeyCharacteristics(std::nullptr_t) noexcept {}
        SmartCardCryptogramStorageKeyCharacteristics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyCharacteristics(ptr, take_ownership_from_abi) {}
        SmartCardCryptogramStorageKeyCharacteristics();
    };
    struct WINRT_EBO SmartCardCryptogramStorageKeyInfo : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo,
        impl::require<SmartCardCryptogramStorageKeyInfo, Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo2>
    {
        SmartCardCryptogramStorageKeyInfo(std::nullptr_t) noexcept {}
        SmartCardCryptogramStorageKeyInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardCryptogramStorageKeyInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardEmulator : Windows::Devices::SmartCards::ISmartCardEmulator,
        impl::require<SmartCardEmulator, Windows::Devices::SmartCards::ISmartCardEmulator2>
    {
        SmartCardEmulator(std::nullptr_t) noexcept {}
        SmartCardEmulator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulator(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardEmulator> GetDefaultAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>> GetAppletIdGroupRegistrationsAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration> RegisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroup const& appletIdGroup);
        static Windows::Foundation::IAsyncAction UnregisterAppletIdGroupAsync(Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration const& registration);
        static uint16_t MaxAppletIdGroupRegistrations();
        static bool IsSupported();
    };
    struct WINRT_EBO SmartCardEmulatorApduReceivedEventArgs : Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs,
        impl::require<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgsWithCryptograms, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>
    {
        SmartCardEmulatorApduReceivedEventArgs(std::nullptr_t) noexcept {}
        SmartCardEmulatorApduReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs(ptr, take_ownership_from_abi) {}
        using Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs::TryRespondAsync;
        using impl::consume_t<SmartCardEmulatorApduReceivedEventArgs, Windows::Devices::SmartCards::ISmartCardEmulatorApduReceivedEventArgs2>::TryRespondAsync;
    };
    struct WINRT_EBO SmartCardEmulatorConnectionDeactivatedEventArgs : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs
    {
        SmartCardEmulatorConnectionDeactivatedEventArgs(std::nullptr_t) noexcept {}
        SmartCardEmulatorConnectionDeactivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionDeactivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardEmulatorConnectionProperties : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties
    {
        SmartCardEmulatorConnectionProperties(std::nullptr_t) noexcept {}
        SmartCardEmulatorConnectionProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardEmulatorConnectionProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardPinPolicy : Windows::Devices::SmartCards::ISmartCardPinPolicy
    {
        SmartCardPinPolicy(std::nullptr_t) noexcept {}
        SmartCardPinPolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardPinPolicy(ptr, take_ownership_from_abi) {}
        SmartCardPinPolicy();
    };
    struct WINRT_EBO SmartCardPinResetDeferral : Windows::Devices::SmartCards::ISmartCardPinResetDeferral
    {
        SmartCardPinResetDeferral(std::nullptr_t) noexcept {}
        SmartCardPinResetDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardPinResetDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardPinResetRequest : Windows::Devices::SmartCards::ISmartCardPinResetRequest
    {
        SmartCardPinResetRequest(std::nullptr_t) noexcept {}
        SmartCardPinResetRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardPinResetRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SmartCardProvisioning : Windows::Devices::SmartCards::ISmartCardProvisioning,
        impl::require<SmartCardProvisioning, Windows::Devices::SmartCards::ISmartCardProvisioning2>
    {
        SmartCardProvisioning(std::nullptr_t) noexcept {}
        SmartCardProvisioning(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardProvisioning(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> FromSmartCardAsync(Windows::Devices::SmartCards::SmartCard const& card);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, winrt::guid const& cardId);
        static Windows::Foundation::IAsyncOperation<bool> RequestVirtualSmartCardDeletionAsync(Windows::Devices::SmartCards::SmartCard const& card);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardProvisioning> RequestAttestedVirtualSmartCardCreationAsync(param::hstring const& friendlyName, Windows::Storage::Streams::IBuffer const& administrativeKey, Windows::Devices::SmartCards::SmartCardPinPolicy const& pinPolicy, winrt::guid const& cardId);
    };
    struct WINRT_EBO SmartCardReader : Windows::Devices::SmartCards::ISmartCardReader
    {
        SmartCardReader(std::nullptr_t) noexcept {}
        SmartCardReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardReader(ptr, take_ownership_from_abi) {}
        static hstring GetDeviceSelector();
        static hstring GetDeviceSelector(Windows::Devices::SmartCards::SmartCardReaderKind const& kind);
        static Windows::Foundation::IAsyncOperation<Windows::Devices::SmartCards::SmartCardReader> FromIdAsync(param::hstring const& deviceId);
    };
    struct WINRT_EBO SmartCardTriggerDetails : Windows::Devices::SmartCards::ISmartCardTriggerDetails,
        impl::require<SmartCardTriggerDetails, Windows::Devices::SmartCards::ISmartCardTriggerDetails2, Windows::Devices::SmartCards::ISmartCardTriggerDetails3>
    {
        SmartCardTriggerDetails(std::nullptr_t) noexcept {}
        SmartCardTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SmartCards::ISmartCardTriggerDetails(ptr, take_ownership_from_abi) {}
    };
}
#endif
