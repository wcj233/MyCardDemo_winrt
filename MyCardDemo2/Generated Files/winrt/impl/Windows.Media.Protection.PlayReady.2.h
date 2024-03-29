// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Media_Protection_PlayReady_2_H
#define WINRT_Windows_Media_Protection_PlayReady_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Protection.1.h"
#include "winrt/impl/Windows.Media.Protection.PlayReady.1.h"
namespace winrt::Windows::Media::Protection::PlayReady
{
    struct WINRT_EBO NDClient : Windows::Media::Protection::PlayReady::INDClient
    {
        NDClient(std::nullptr_t) noexcept {}
        NDClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::INDClient(ptr, take_ownership_from_abi) {}
        NDClient(Windows::Media::Protection::PlayReady::INDDownloadEngine const& downloadEngine, Windows::Media::Protection::PlayReady::INDStreamParser const& streamParser, Windows::Media::Protection::PlayReady::INDMessenger const& pMessenger);
    };
    struct WINRT_EBO NDCustomData : Windows::Media::Protection::PlayReady::INDCustomData
    {
        NDCustomData(std::nullptr_t) noexcept {}
        NDCustomData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::INDCustomData(ptr, take_ownership_from_abi) {}
        NDCustomData(array_view<uint8_t const> customDataTypeIDBytes, array_view<uint8_t const> customDataBytes);
    };
    struct WINRT_EBO NDDownloadEngineNotifier : Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier
    {
        NDDownloadEngineNotifier(std::nullptr_t) noexcept {}
        NDDownloadEngineNotifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier(ptr, take_ownership_from_abi) {}
        NDDownloadEngineNotifier();
    };
    struct WINRT_EBO NDLicenseFetchDescriptor : Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor
    {
        NDLicenseFetchDescriptor(std::nullptr_t) noexcept {}
        NDLicenseFetchDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor(ptr, take_ownership_from_abi) {}
        NDLicenseFetchDescriptor(Windows::Media::Protection::PlayReady::NDContentIDType const& contentIDType, array_view<uint8_t const> contentIDBytes, Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData);
    };
    struct WINRT_EBO NDStorageFileHelper : Windows::Media::Protection::PlayReady::INDStorageFileHelper
    {
        NDStorageFileHelper(std::nullptr_t) noexcept {}
        NDStorageFileHelper(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::INDStorageFileHelper(ptr, take_ownership_from_abi) {}
        NDStorageFileHelper();
    };
    struct WINRT_EBO NDStreamParserNotifier : Windows::Media::Protection::PlayReady::INDStreamParserNotifier
    {
        NDStreamParserNotifier(std::nullptr_t) noexcept {}
        NDStreamParserNotifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::INDStreamParserNotifier(ptr, take_ownership_from_abi) {}
        NDStreamParserNotifier();
    };
    struct WINRT_EBO NDTCPMessenger : Windows::Media::Protection::PlayReady::INDMessenger
    {
        NDTCPMessenger(std::nullptr_t) noexcept {}
        NDTCPMessenger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::INDMessenger(ptr, take_ownership_from_abi) {}
        NDTCPMessenger(param::hstring const& remoteHostName, uint32_t remoteHostPort);
    };
    struct WINRT_EBO PlayReadyContentHeader : Windows::Media::Protection::PlayReady::IPlayReadyContentHeader,
        impl::require<PlayReadyContentHeader, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>
    {
        PlayReadyContentHeader(std::nullptr_t) noexcept {}
        PlayReadyContentHeader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyContentHeader(ptr, take_ownership_from_abi) {}
        PlayReadyContentHeader(array_view<uint8_t const> headerBytes, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, winrt::guid const& domainServiceId);
        PlayReadyContentHeader(winrt::guid const& contentKeyId, param::hstring const& contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, winrt::guid const& domainServiceId);
        PlayReadyContentHeader(array_view<uint8_t const> headerBytes);
        PlayReadyContentHeader(uint32_t dwFlags, array_view<winrt::guid const> contentKeyIds, array_view<hstring const> contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, winrt::guid const& domainServiceId);
    };
    struct PlayReadyContentResolver
    {
        PlayReadyContentResolver() = delete;
        static Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest ServiceRequest(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader);
    };
    struct WINRT_EBO PlayReadyDomain : Windows::Media::Protection::PlayReady::IPlayReadyDomain
    {
        PlayReadyDomain(std::nullptr_t) noexcept {}
        PlayReadyDomain(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyDomain(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PlayReadyDomainIterable : Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyDomain>
    {
        PlayReadyDomainIterable(std::nullptr_t) noexcept {}
        PlayReadyDomainIterable(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyDomain>(ptr, take_ownership_from_abi) {}
        PlayReadyDomainIterable(winrt::guid const& domainAccountId);
    };
    struct WINRT_EBO PlayReadyDomainIterator : Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyDomain>
    {
        PlayReadyDomainIterator(std::nullptr_t) noexcept {}
        PlayReadyDomainIterator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyDomain>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PlayReadyDomainJoinServiceRequest : Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest
    {
        PlayReadyDomainJoinServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyDomainJoinServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyDomainJoinServiceRequest();
    };
    struct WINRT_EBO PlayReadyDomainLeaveServiceRequest : Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest
    {
        PlayReadyDomainLeaveServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyDomainLeaveServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyDomainLeaveServiceRequest();
    };
    struct WINRT_EBO PlayReadyITADataGenerator : Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator
    {
        PlayReadyITADataGenerator(std::nullptr_t) noexcept {}
        PlayReadyITADataGenerator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator(ptr, take_ownership_from_abi) {}
        PlayReadyITADataGenerator();
    };
    struct WINRT_EBO PlayReadyIndividualizationServiceRequest : Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest
    {
        PlayReadyIndividualizationServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyIndividualizationServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyIndividualizationServiceRequest();
    };
    struct WINRT_EBO PlayReadyLicense : Windows::Media::Protection::PlayReady::IPlayReadyLicense,
        impl::require<PlayReadyLicense, Windows::Media::Protection::PlayReady::IPlayReadyLicense2>
    {
        PlayReadyLicense(std::nullptr_t) noexcept {}
        PlayReadyLicense(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyLicense(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PlayReadyLicenseAcquisitionServiceRequest : Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest,
        impl::require<PlayReadyLicenseAcquisitionServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>
    {
        PlayReadyLicenseAcquisitionServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyLicenseAcquisitionServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyLicenseAcquisitionServiceRequest();
    };
    struct WINRT_EBO PlayReadyLicenseIterable : Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyLicense>
    {
        PlayReadyLicenseIterable(std::nullptr_t) noexcept {}
        PlayReadyLicenseIterable(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyLicense>(ptr, take_ownership_from_abi) {}
        PlayReadyLicenseIterable();
        PlayReadyLicenseIterable(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated);
    };
    struct WINRT_EBO PlayReadyLicenseIterator : Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyLicense>
    {
        PlayReadyLicenseIterator(std::nullptr_t) noexcept {}
        PlayReadyLicenseIterator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadyLicense>(ptr, take_ownership_from_abi) {}
    };
    struct PlayReadyLicenseManagement
    {
        PlayReadyLicenseManagement() = delete;
        static Windows::Foundation::IAsyncAction DeleteLicenses(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader);
    };
    struct WINRT_EBO PlayReadyLicenseSession : Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession,
        impl::require<PlayReadyLicenseSession, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>
    {
        PlayReadyLicenseSession(std::nullptr_t) noexcept {}
        PlayReadyLicenseSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession(ptr, take_ownership_from_abi) {}
        PlayReadyLicenseSession(Windows::Foundation::Collections::IPropertySet const& configuration);
    };
    struct WINRT_EBO PlayReadyMeteringReportServiceRequest : Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest
    {
        PlayReadyMeteringReportServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyMeteringReportServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyMeteringReportServiceRequest();
    };
    struct WINRT_EBO PlayReadyRevocationServiceRequest : Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest
    {
        PlayReadyRevocationServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyRevocationServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyRevocationServiceRequest();
    };
    struct WINRT_EBO PlayReadySecureStopIterable : Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
    {
        PlayReadySecureStopIterable(std::nullptr_t) noexcept {}
        PlayReadySecureStopIterable(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>(ptr, take_ownership_from_abi) {}
        PlayReadySecureStopIterable(array_view<uint8_t const> publisherCertBytes);
    };
    struct WINRT_EBO PlayReadySecureStopIterator : Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
    {
        PlayReadySecureStopIterator(std::nullptr_t) noexcept {}
        PlayReadySecureStopIterator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IIterator<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PlayReadySecureStopServiceRequest : Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest
    {
        PlayReadySecureStopServiceRequest(std::nullptr_t) noexcept {}
        PlayReadySecureStopServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadySecureStopServiceRequest(array_view<uint8_t const> publisherCertBytes);
        PlayReadySecureStopServiceRequest(winrt::guid const& sessionID, array_view<uint8_t const> publisherCertBytes);
    };
    struct WINRT_EBO PlayReadySoapMessage : Windows::Media::Protection::PlayReady::IPlayReadySoapMessage
    {
        PlayReadySoapMessage(std::nullptr_t) noexcept {}
        PlayReadySoapMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Protection::PlayReady::IPlayReadySoapMessage(ptr, take_ownership_from_abi) {}
    };
    struct PlayReadyStatics
    {
        PlayReadyStatics() = delete;
        static winrt::guid DomainJoinServiceRequestType();
        static winrt::guid DomainLeaveServiceRequestType();
        static winrt::guid IndividualizationServiceRequestType();
        static winrt::guid LicenseAcquirerServiceRequestType();
        static winrt::guid MeteringReportServiceRequestType();
        static winrt::guid RevocationServiceRequestType();
        static winrt::guid MediaProtectionSystemId();
        static uint32_t PlayReadySecurityVersion();
        static uint32_t PlayReadyCertificateSecurityLevel();
        static winrt::guid SecureStopServiceRequestType();
        static bool CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures const& hwdrmFeature);
        static hstring InputTrustAuthorityToCreate();
        static winrt::guid ProtectionSystemId();
        static Windows::Foundation::IReference<Windows::Foundation::DateTime> HardwareDRMDisabledAtTime();
        static Windows::Foundation::IReference<Windows::Foundation::DateTime> HardwareDRMDisabledUntilTime();
        static void ResetHardwareDRMDisabled();
    };
}
#endif
