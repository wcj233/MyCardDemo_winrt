// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Media_MediaProperties_2_H
#define WINRT_Windows_Media_MediaProperties_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
namespace winrt::Windows::Media::MediaProperties
{
    struct WINRT_EBO AudioEncodingProperties : Windows::Media::MediaProperties::IAudioEncodingProperties,
        impl::require<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData, Windows::Media::MediaProperties::IAudioEncodingProperties2, Windows::Media::MediaProperties::IAudioEncodingProperties3>
    {
        AudioEncodingProperties(std::nullptr_t) noexcept {}
        AudioEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IAudioEncodingProperties(ptr, take_ownership_from_abi) {}
        AudioEncodingProperties();
        static Windows::Media::MediaProperties::AudioEncodingProperties CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static Windows::Media::MediaProperties::AudioEncodingProperties CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static Windows::Media::MediaProperties::AudioEncodingProperties CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static Windows::Media::MediaProperties::AudioEncodingProperties CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample);
        static Windows::Media::MediaProperties::AudioEncodingProperties CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate);
        static Windows::Media::MediaProperties::AudioEncodingProperties CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample);
        static Windows::Media::MediaProperties::AudioEncodingProperties CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample);
    };
    struct WINRT_EBO ContainerEncodingProperties : Windows::Media::MediaProperties::IContainerEncodingProperties,
        impl::require<ContainerEncodingProperties, Windows::Media::MediaProperties::IContainerEncodingProperties2>
    {
        ContainerEncodingProperties(std::nullptr_t) noexcept {}
        ContainerEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IContainerEncodingProperties(ptr, take_ownership_from_abi) {}
        ContainerEncodingProperties();
    };
    struct H264ProfileIds
    {
        H264ProfileIds() = delete;
        static int32_t ConstrainedBaseline();
        static int32_t Baseline();
        static int32_t Extended();
        static int32_t Main();
        static int32_t High();
        static int32_t High10();
        static int32_t High422();
        static int32_t High444();
        static int32_t StereoHigh();
        static int32_t MultiviewHigh();
    };
    struct WINRT_EBO ImageEncodingProperties : Windows::Media::MediaProperties::IImageEncodingProperties,
        impl::require<ImageEncodingProperties, Windows::Media::MediaProperties::IImageEncodingProperties2>
    {
        ImageEncodingProperties(std::nullptr_t) noexcept {}
        ImageEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IImageEncodingProperties(ptr, take_ownership_from_abi) {}
        ImageEncodingProperties();
        static Windows::Media::MediaProperties::ImageEncodingProperties CreateJpeg();
        static Windows::Media::MediaProperties::ImageEncodingProperties CreatePng();
        static Windows::Media::MediaProperties::ImageEncodingProperties CreateJpegXR();
        static Windows::Media::MediaProperties::ImageEncodingProperties CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat const& format);
        static Windows::Media::MediaProperties::ImageEncodingProperties CreateBmp();
        static Windows::Media::MediaProperties::ImageEncodingProperties CreateHeif();
    };
    struct WINRT_EBO MediaEncodingProfile : Windows::Media::MediaProperties::IMediaEncodingProfile,
        impl::require<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfile2, Windows::Media::MediaProperties::IMediaEncodingProfile3>
    {
        MediaEncodingProfile(std::nullptr_t) noexcept {}
        MediaEncodingProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IMediaEncodingProfile(ptr, take_ownership_from_abi) {}
        MediaEncodingProfile();
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
        static Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> CreateFromFileAsync(Windows::Storage::IStorageFile const& file);
        static Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> CreateFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateAlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateFlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality);
        static Windows::Media::MediaProperties::MediaEncodingProfile CreateHevc(Windows::Media::MediaProperties::VideoEncodingQuality const& quality);
    };
    struct MediaEncodingSubtypes
    {
        MediaEncodingSubtypes() = delete;
        static hstring Aac();
        static hstring AacAdts();
        static hstring Ac3();
        static hstring AmrNb();
        static hstring AmrWb();
        static hstring Argb32();
        static hstring Asf();
        static hstring Avi();
        static hstring Bgra8();
        static hstring Bmp();
        static hstring Eac3();
        static hstring Float();
        static hstring Gif();
        static hstring H263();
        static hstring H264();
        static hstring H264Es();
        static hstring Hevc();
        static hstring HevcEs();
        static hstring Iyuv();
        static hstring Jpeg();
        static hstring JpegXr();
        static hstring Mjpg();
        static hstring Mpeg();
        static hstring Mpeg1();
        static hstring Mpeg2();
        static hstring Mp3();
        static hstring Mpeg4();
        static hstring Nv12();
        static hstring Pcm();
        static hstring Png();
        static hstring Rgb24();
        static hstring Rgb32();
        static hstring Tiff();
        static hstring Wave();
        static hstring Wma8();
        static hstring Wma9();
        static hstring Wmv3();
        static hstring Wvc1();
        static hstring Yuy2();
        static hstring Yv12();
        static hstring Vp9();
        static hstring L8();
        static hstring L16();
        static hstring D16();
        static hstring Alac();
        static hstring Flac();
        static hstring P010();
        static hstring Heif();
    };
    struct WINRT_EBO MediaPropertySet : Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>
    {
        MediaPropertySet(std::nullptr_t) noexcept {}
        MediaPropertySet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>(ptr, take_ownership_from_abi) {}
        MediaPropertySet();
    };
    struct WINRT_EBO MediaRatio : Windows::Media::MediaProperties::IMediaRatio
    {
        MediaRatio(std::nullptr_t) noexcept {}
        MediaRatio(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IMediaRatio(ptr, take_ownership_from_abi) {}
    };
    struct Mpeg2ProfileIds
    {
        Mpeg2ProfileIds() = delete;
        static int32_t Simple();
        static int32_t Main();
        static int32_t SignalNoiseRatioScalable();
        static int32_t SpatiallyScalable();
        static int32_t High();
    };
    struct WINRT_EBO TimedMetadataEncodingProperties : Windows::Media::MediaProperties::IMediaEncodingProperties,
        impl::require<TimedMetadataEncodingProperties, Windows::Media::MediaProperties::ITimedMetadataEncodingProperties>
    {
        TimedMetadataEncodingProperties(std::nullptr_t) noexcept {}
        TimedMetadataEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IMediaEncodingProperties(ptr, take_ownership_from_abi) {}
        TimedMetadataEncodingProperties();
    };
    struct WINRT_EBO VideoEncodingProperties : Windows::Media::MediaProperties::IVideoEncodingProperties,
        impl::require<VideoEncodingProperties, Windows::Media::MediaProperties::IVideoEncodingProperties2, Windows::Media::MediaProperties::IVideoEncodingProperties3, Windows::Media::MediaProperties::IVideoEncodingProperties4, Windows::Media::MediaProperties::IVideoEncodingProperties5>
    {
        VideoEncodingProperties(std::nullptr_t) noexcept {}
        VideoEncodingProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::MediaProperties::IVideoEncodingProperties(ptr, take_ownership_from_abi) {}
        VideoEncodingProperties();
        static Windows::Media::MediaProperties::VideoEncodingProperties CreateH264();
        static Windows::Media::MediaProperties::VideoEncodingProperties CreateMpeg2();
        static Windows::Media::MediaProperties::VideoEncodingProperties CreateUncompressed(param::hstring const& subtype, uint32_t width, uint32_t height);
        static Windows::Media::MediaProperties::VideoEncodingProperties CreateHevc();
    };
}
#endif
