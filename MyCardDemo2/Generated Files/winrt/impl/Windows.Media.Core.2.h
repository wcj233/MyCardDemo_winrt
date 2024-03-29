// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Media_Core_2_H
#define WINRT_Windows_Media_Core_2_H
#include "winrt/impl/Windows.ApplicationModel.AppService.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.Frames.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Playback.2.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.2.h"
#include "winrt/impl/Windows.Networking.BackgroundTransfer.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.Core.1.h"
namespace winrt::Windows::Media::Core
{
    struct MseTimeRange
    {
        Windows::Foundation::TimeSpan Start;
        Windows::Foundation::TimeSpan End;
    };
    inline bool operator==(MseTimeRange const& left, MseTimeRange const& right) noexcept
    {
        return left.Start == right.Start && left.End == right.End;
    }
    inline bool operator!=(MseTimeRange const& left, MseTimeRange const& right) noexcept
    {
        return !(left == right);
    }
    struct TimedTextDouble
    {
        double Value;
        Windows::Media::Core::TimedTextUnit Unit;
    };
    inline bool operator==(TimedTextDouble const& left, TimedTextDouble const& right) noexcept
    {
        return left.Value == right.Value && left.Unit == right.Unit;
    }
    inline bool operator!=(TimedTextDouble const& left, TimedTextDouble const& right) noexcept
    {
        return !(left == right);
    }
    struct TimedTextPadding
    {
        double Before;
        double After;
        double Start;
        double End;
        Windows::Media::Core::TimedTextUnit Unit;
    };
    inline bool operator==(TimedTextPadding const& left, TimedTextPadding const& right) noexcept
    {
        return left.Before == right.Before && left.After == right.After && left.Start == right.Start && left.End == right.End && left.Unit == right.Unit;
    }
    inline bool operator!=(TimedTextPadding const& left, TimedTextPadding const& right) noexcept
    {
        return !(left == right);
    }
    struct TimedTextPoint
    {
        double X;
        double Y;
        Windows::Media::Core::TimedTextUnit Unit;
    };
    inline bool operator==(TimedTextPoint const& left, TimedTextPoint const& right) noexcept
    {
        return left.X == right.X && left.Y == right.Y && left.Unit == right.Unit;
    }
    inline bool operator!=(TimedTextPoint const& left, TimedTextPoint const& right) noexcept
    {
        return !(left == right);
    }
    struct TimedTextSize
    {
        double Height;
        double Width;
        Windows::Media::Core::TimedTextUnit Unit;
    };
    inline bool operator==(TimedTextSize const& left, TimedTextSize const& right) noexcept
    {
        return left.Height == right.Height && left.Width == right.Width && left.Unit == right.Unit;
    }
    inline bool operator!=(TimedTextSize const& left, TimedTextSize const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_EBO AudioStreamDescriptor : Windows::Media::Core::IAudioStreamDescriptor,
        impl::require<AudioStreamDescriptor, Windows::Media::Core::IAudioStreamDescriptor2, Windows::Media::Core::IMediaStreamDescriptor2, Windows::Media::Core::IAudioStreamDescriptor3>
    {
        AudioStreamDescriptor(std::nullptr_t) noexcept {}
        AudioStreamDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IAudioStreamDescriptor(ptr, take_ownership_from_abi) {}
        AudioStreamDescriptor(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties);
    };
    struct WINRT_EBO AudioTrack : Windows::Media::Core::IMediaTrack,
        impl::require<AudioTrack, Windows::Media::Core::IAudioTrack>
    {
        AudioTrack(std::nullptr_t) noexcept {}
        AudioTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaTrack(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AudioTrackOpenFailedEventArgs : Windows::Media::Core::IAudioTrackOpenFailedEventArgs
    {
        AudioTrackOpenFailedEventArgs(std::nullptr_t) noexcept {}
        AudioTrackOpenFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IAudioTrackOpenFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AudioTrackSupportInfo : Windows::Media::Core::IAudioTrackSupportInfo
    {
        AudioTrackSupportInfo(std::nullptr_t) noexcept {}
        AudioTrackSupportInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IAudioTrackSupportInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ChapterCue : Windows::Media::Core::IChapterCue
    {
        ChapterCue(std::nullptr_t) noexcept {}
        ChapterCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IChapterCue(ptr, take_ownership_from_abi) {}
        ChapterCue();
    };
    struct WINRT_EBO CodecInfo : Windows::Media::Core::ICodecInfo
    {
        CodecInfo(std::nullptr_t) noexcept {}
        CodecInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ICodecInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO CodecQuery : Windows::Media::Core::ICodecQuery
    {
        CodecQuery(std::nullptr_t) noexcept {}
        CodecQuery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ICodecQuery(ptr, take_ownership_from_abi) {}
        CodecQuery();
    };
    struct CodecSubtypes
    {
        CodecSubtypes() = delete;
        static hstring VideoFormatDV25();
        static hstring VideoFormatDV50();
        static hstring VideoFormatDvc();
        static hstring VideoFormatDvh1();
        static hstring VideoFormatDvhD();
        static hstring VideoFormatDvsd();
        static hstring VideoFormatDvsl();
        static hstring VideoFormatH263();
        static hstring VideoFormatH264();
        static hstring VideoFormatH265();
        static hstring VideoFormatH264ES();
        static hstring VideoFormatHevc();
        static hstring VideoFormatHevcES();
        static hstring VideoFormatM4S2();
        static hstring VideoFormatMjpg();
        static hstring VideoFormatMP43();
        static hstring VideoFormatMP4S();
        static hstring VideoFormatMP4V();
        static hstring VideoFormatMpeg2();
        static hstring VideoFormatVP80();
        static hstring VideoFormatVP90();
        static hstring VideoFormatMpg1();
        static hstring VideoFormatMss1();
        static hstring VideoFormatMss2();
        static hstring VideoFormatWmv1();
        static hstring VideoFormatWmv2();
        static hstring VideoFormatWmv3();
        static hstring VideoFormatWvc1();
        static hstring VideoFormat420O();
        static hstring AudioFormatAac();
        static hstring AudioFormatAdts();
        static hstring AudioFormatAlac();
        static hstring AudioFormatAmrNB();
        static hstring AudioFormatAmrWB();
        static hstring AudioFormatAmrWP();
        static hstring AudioFormatDolbyAC3();
        static hstring AudioFormatDolbyAC3Spdif();
        static hstring AudioFormatDolbyDDPlus();
        static hstring AudioFormatDrm();
        static hstring AudioFormatDts();
        static hstring AudioFormatFlac();
        static hstring AudioFormatFloat();
        static hstring AudioFormatMP3();
        static hstring AudioFormatMPeg();
        static hstring AudioFormatMsp1();
        static hstring AudioFormatOpus();
        static hstring AudioFormatPcm();
        static hstring AudioFormatWmaSpdif();
        static hstring AudioFormatWMAudioLossless();
        static hstring AudioFormatWMAudioV8();
        static hstring AudioFormatWMAudioV9();
    };
    struct WINRT_EBO DataCue : Windows::Media::Core::IDataCue,
        impl::require<DataCue, Windows::Media::Core::IDataCue2>
    {
        DataCue(std::nullptr_t) noexcept {}
        DataCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IDataCue(ptr, take_ownership_from_abi) {}
        DataCue();
    };
    struct WINRT_EBO FaceDetectedEventArgs : Windows::Media::Core::IFaceDetectedEventArgs
    {
        FaceDetectedEventArgs(std::nullptr_t) noexcept {}
        FaceDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IFaceDetectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO FaceDetectionEffect : Windows::Media::Core::IFaceDetectionEffect
    {
        FaceDetectionEffect(std::nullptr_t) noexcept {}
        FaceDetectionEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IFaceDetectionEffect(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO FaceDetectionEffectDefinition : Windows::Media::Effects::IVideoEffectDefinition,
        impl::require<FaceDetectionEffectDefinition, Windows::Media::Core::IFaceDetectionEffectDefinition>
    {
        FaceDetectionEffectDefinition(std::nullptr_t) noexcept {}
        FaceDetectionEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Effects::IVideoEffectDefinition(ptr, take_ownership_from_abi) {}
        FaceDetectionEffectDefinition();
    };
    struct WINRT_EBO FaceDetectionEffectFrame : Windows::Media::Core::IFaceDetectionEffectFrame
    {
        FaceDetectionEffectFrame(std::nullptr_t) noexcept {}
        FaceDetectionEffectFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IFaceDetectionEffectFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO HighDynamicRangeControl : Windows::Media::Core::IHighDynamicRangeControl
    {
        HighDynamicRangeControl(std::nullptr_t) noexcept {}
        HighDynamicRangeControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IHighDynamicRangeControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO HighDynamicRangeOutput : Windows::Media::Core::IHighDynamicRangeOutput
    {
        HighDynamicRangeOutput(std::nullptr_t) noexcept {}
        HighDynamicRangeOutput(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IHighDynamicRangeOutput(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ImageCue : Windows::Media::Core::IImageCue
    {
        ImageCue(std::nullptr_t) noexcept {}
        ImageCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IImageCue(ptr, take_ownership_from_abi) {}
        ImageCue();
    };
    struct WINRT_EBO InitializeMediaStreamSourceRequestedEventArgs : Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs
    {
        InitializeMediaStreamSourceRequestedEventArgs(std::nullptr_t) noexcept {}
        InitializeMediaStreamSourceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct LowLightFusion
    {
        LowLightFusion() = delete;
        static Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> SupportedBitmapPixelFormats();
        static int32_t MaxSupportedFrameCount();
        static Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Core::LowLightFusionResult, double> FuseAsync(param::async_iterable<Windows::Graphics::Imaging::SoftwareBitmap> const& frameSet);
    };
    struct WINRT_EBO LowLightFusionResult : Windows::Media::Core::ILowLightFusionResult,
        impl::require<LowLightFusionResult, Windows::Foundation::IClosable>
    {
        LowLightFusionResult(std::nullptr_t) noexcept {}
        LowLightFusionResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ILowLightFusionResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaBinder : Windows::Media::Core::IMediaBinder
    {
        MediaBinder(std::nullptr_t) noexcept {}
        MediaBinder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaBinder(ptr, take_ownership_from_abi) {}
        MediaBinder();
    };
    struct WINRT_EBO MediaBindingEventArgs : Windows::Media::Core::IMediaBindingEventArgs,
        impl::require<MediaBindingEventArgs, Windows::Media::Core::IMediaBindingEventArgs2, Windows::Media::Core::IMediaBindingEventArgs3>
    {
        MediaBindingEventArgs(std::nullptr_t) noexcept {}
        MediaBindingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaBindingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaCueEventArgs : Windows::Media::Core::IMediaCueEventArgs
    {
        MediaCueEventArgs(std::nullptr_t) noexcept {}
        MediaCueEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaCueEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaSource : Windows::Media::Core::IMediaSource2,
        impl::require<MediaSource, Windows::Media::Core::IMediaSource3, Windows::Media::Core::IMediaSource4, Windows::Media::Core::IMediaSource5>
    {
        MediaSource(std::nullptr_t) noexcept {}
        MediaSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaSource2(ptr, take_ownership_from_abi) {}
        static Windows::Media::Core::MediaSource CreateFromAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource);
        static Windows::Media::Core::MediaSource CreateFromMediaStreamSource(Windows::Media::Core::MediaStreamSource const& mediaSource);
        static Windows::Media::Core::MediaSource CreateFromMseStreamSource(Windows::Media::Core::MseStreamSource const& mediaSource);
        static Windows::Media::Core::MediaSource CreateFromIMediaSource(Windows::Media::Core::IMediaSource const& mediaSource);
        static Windows::Media::Core::MediaSource CreateFromStorageFile(Windows::Storage::IStorageFile const& file);
        static Windows::Media::Core::MediaSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType);
        static Windows::Media::Core::MediaSource CreateFromStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType);
        static Windows::Media::Core::MediaSource CreateFromUri(Windows::Foundation::Uri const& uri);
        static Windows::Media::Core::MediaSource CreateFromMediaBinder(Windows::Media::Core::MediaBinder const& binder);
        static Windows::Media::Core::MediaSource CreateFromMediaFrameSource(Windows::Media::Capture::Frames::MediaFrameSource const& frameSource);
        static Windows::Media::Core::MediaSource CreateFromDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation);
    };
    struct WINRT_EBO MediaSourceAppServiceConnection : Windows::Media::Core::IMediaSourceAppServiceConnection
    {
        MediaSourceAppServiceConnection(std::nullptr_t) noexcept {}
        MediaSourceAppServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaSourceAppServiceConnection(ptr, take_ownership_from_abi) {}
        MediaSourceAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection);
    };
    struct WINRT_EBO MediaSourceError : Windows::Media::Core::IMediaSourceError
    {
        MediaSourceError(std::nullptr_t) noexcept {}
        MediaSourceError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaSourceError(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaSourceOpenOperationCompletedEventArgs : Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs
    {
        MediaSourceOpenOperationCompletedEventArgs(std::nullptr_t) noexcept {}
        MediaSourceOpenOperationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaSourceStateChangedEventArgs : Windows::Media::Core::IMediaSourceStateChangedEventArgs
    {
        MediaSourceStateChangedEventArgs(std::nullptr_t) noexcept {}
        MediaSourceStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaSourceStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSample : Windows::Media::Core::IMediaStreamSample,
        impl::require<MediaStreamSample, Windows::Media::Core::IMediaStreamSample2>
    {
        MediaStreamSample(std::nullptr_t) noexcept {}
        MediaStreamSample(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSample(ptr, take_ownership_from_abi) {}
        static Windows::Media::Core::MediaStreamSample CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Foundation::TimeSpan const& timestamp);
        static Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, uint32_t count, Windows::Foundation::TimeSpan const& timestamp);
        static Windows::Media::Core::MediaStreamSample CreateFromDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& timestamp);
    };
    struct WINRT_EBO MediaStreamSamplePropertySet : Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>
    {
        MediaStreamSamplePropertySet(std::nullptr_t) noexcept {}
        MediaStreamSamplePropertySet(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSampleProtectionProperties : Windows::Media::Core::IMediaStreamSampleProtectionProperties
    {
        MediaStreamSampleProtectionProperties(std::nullptr_t) noexcept {}
        MediaStreamSampleProtectionProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSampleProtectionProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSource : Windows::Media::Core::IMediaStreamSource,
        impl::require<MediaStreamSource, Windows::Media::Core::IMediaStreamSource2, Windows::Media::Core::IMediaStreamSource3, Windows::Media::Core::IMediaStreamSource4>
    {
        MediaStreamSource(std::nullptr_t) noexcept {}
        MediaStreamSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSource(ptr, take_ownership_from_abi) {}
        MediaStreamSource(Windows::Media::Core::IMediaStreamDescriptor const& descriptor);
        MediaStreamSource(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Core::IMediaStreamDescriptor const& descriptor2);
    };
    struct WINRT_EBO MediaStreamSourceClosedEventArgs : Windows::Media::Core::IMediaStreamSourceClosedEventArgs
    {
        MediaStreamSourceClosedEventArgs(std::nullptr_t) noexcept {}
        MediaStreamSourceClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceClosedRequest : Windows::Media::Core::IMediaStreamSourceClosedRequest
    {
        MediaStreamSourceClosedRequest(std::nullptr_t) noexcept {}
        MediaStreamSourceClosedRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceClosedRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceSampleRenderedEventArgs : Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs
    {
        MediaStreamSourceSampleRenderedEventArgs(std::nullptr_t) noexcept {}
        MediaStreamSourceSampleRenderedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceSampleRequest : Windows::Media::Core::IMediaStreamSourceSampleRequest
    {
        MediaStreamSourceSampleRequest(std::nullptr_t) noexcept {}
        MediaStreamSourceSampleRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceSampleRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceSampleRequestDeferral : Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral
    {
        MediaStreamSourceSampleRequestDeferral(std::nullptr_t) noexcept {}
        MediaStreamSourceSampleRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceSampleRequestedEventArgs : Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs
    {
        MediaStreamSourceSampleRequestedEventArgs(std::nullptr_t) noexcept {}
        MediaStreamSourceSampleRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceStartingEventArgs : Windows::Media::Core::IMediaStreamSourceStartingEventArgs
    {
        MediaStreamSourceStartingEventArgs(std::nullptr_t) noexcept {}
        MediaStreamSourceStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceStartingRequest : Windows::Media::Core::IMediaStreamSourceStartingRequest
    {
        MediaStreamSourceStartingRequest(std::nullptr_t) noexcept {}
        MediaStreamSourceStartingRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceStartingRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceStartingRequestDeferral : Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral
    {
        MediaStreamSourceStartingRequestDeferral(std::nullptr_t) noexcept {}
        MediaStreamSourceStartingRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceSwitchStreamsRequest : Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest
    {
        MediaStreamSourceSwitchStreamsRequest(std::nullptr_t) noexcept {}
        MediaStreamSourceSwitchStreamsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceSwitchStreamsRequestDeferral : Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral
    {
        MediaStreamSourceSwitchStreamsRequestDeferral(std::nullptr_t) noexcept {}
        MediaStreamSourceSwitchStreamsRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaStreamSourceSwitchStreamsRequestedEventArgs : Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs
    {
        MediaStreamSourceSwitchStreamsRequestedEventArgs(std::nullptr_t) noexcept {}
        MediaStreamSourceSwitchStreamsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MseSourceBuffer : Windows::Media::Core::IMseSourceBuffer
    {
        MseSourceBuffer(std::nullptr_t) noexcept {}
        MseSourceBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMseSourceBuffer(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MseSourceBufferList : Windows::Media::Core::IMseSourceBufferList
    {
        MseSourceBufferList(std::nullptr_t) noexcept {}
        MseSourceBufferList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMseSourceBufferList(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MseStreamSource : Windows::Media::Core::IMseStreamSource,
        impl::require<MseStreamSource, Windows::Media::Core::IMseStreamSource2>
    {
        MseStreamSource(std::nullptr_t) noexcept {}
        MseStreamSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMseStreamSource(ptr, take_ownership_from_abi) {}
        MseStreamSource();
        static bool IsContentTypeSupported(param::hstring const& contentType);
    };
    struct WINRT_EBO SceneAnalysisEffect : Windows::Media::Core::ISceneAnalysisEffect
    {
        SceneAnalysisEffect(std::nullptr_t) noexcept {}
        SceneAnalysisEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ISceneAnalysisEffect(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SceneAnalysisEffectDefinition : Windows::Media::Effects::IVideoEffectDefinition
    {
        SceneAnalysisEffectDefinition(std::nullptr_t) noexcept {}
        SceneAnalysisEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Effects::IVideoEffectDefinition(ptr, take_ownership_from_abi) {}
        SceneAnalysisEffectDefinition();
    };
    struct WINRT_EBO SceneAnalysisEffectFrame : Windows::Media::Core::ISceneAnalysisEffectFrame,
        impl::require<SceneAnalysisEffectFrame, Windows::Media::Core::ISceneAnalysisEffectFrame2>
    {
        SceneAnalysisEffectFrame(std::nullptr_t) noexcept {}
        SceneAnalysisEffectFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ISceneAnalysisEffectFrame(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SceneAnalyzedEventArgs : Windows::Media::Core::ISceneAnalyzedEventArgs
    {
        SceneAnalyzedEventArgs(std::nullptr_t) noexcept {}
        SceneAnalyzedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ISceneAnalyzedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SpeechCue : Windows::Media::Core::ISpeechCue
    {
        SpeechCue(std::nullptr_t) noexcept {}
        SpeechCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ISpeechCue(ptr, take_ownership_from_abi) {}
        SpeechCue();
    };
    struct WINRT_EBO TimedMetadataStreamDescriptor : Windows::Media::Core::IMediaStreamDescriptor,
        impl::require<TimedMetadataStreamDescriptor, Windows::Media::Core::ITimedMetadataStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor2>
    {
        TimedMetadataStreamDescriptor(std::nullptr_t) noexcept {}
        TimedMetadataStreamDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaStreamDescriptor(ptr, take_ownership_from_abi) {}
        TimedMetadataStreamDescriptor(Windows::Media::MediaProperties::TimedMetadataEncodingProperties const& encodingProperties);
    };
    struct WINRT_EBO TimedMetadataTrack : Windows::Media::Core::ITimedMetadataTrack,
        impl::require<TimedMetadataTrack, Windows::Media::Core::ITimedMetadataTrack2>
    {
        TimedMetadataTrack(std::nullptr_t) noexcept {}
        TimedMetadataTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedMetadataTrack(ptr, take_ownership_from_abi) {}
        TimedMetadataTrack(param::hstring const& id, param::hstring const& language, Windows::Media::Core::TimedMetadataKind const& kind);
    };
    struct WINRT_EBO TimedMetadataTrackError : Windows::Media::Core::ITimedMetadataTrackError
    {
        TimedMetadataTrackError(std::nullptr_t) noexcept {}
        TimedMetadataTrackError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedMetadataTrackError(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO TimedMetadataTrackFailedEventArgs : Windows::Media::Core::ITimedMetadataTrackFailedEventArgs
    {
        TimedMetadataTrackFailedEventArgs(std::nullptr_t) noexcept {}
        TimedMetadataTrackFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedMetadataTrackFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO TimedTextCue : Windows::Media::Core::ITimedTextCue
    {
        TimedTextCue(std::nullptr_t) noexcept {}
        TimedTextCue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedTextCue(ptr, take_ownership_from_abi) {}
        TimedTextCue();
    };
    struct WINRT_EBO TimedTextLine : Windows::Media::Core::ITimedTextLine
    {
        TimedTextLine(std::nullptr_t) noexcept {}
        TimedTextLine(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedTextLine(ptr, take_ownership_from_abi) {}
        TimedTextLine();
    };
    struct WINRT_EBO TimedTextRegion : Windows::Media::Core::ITimedTextRegion
    {
        TimedTextRegion(std::nullptr_t) noexcept {}
        TimedTextRegion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedTextRegion(ptr, take_ownership_from_abi) {}
        TimedTextRegion();
    };
    struct WINRT_EBO TimedTextSource : Windows::Media::Core::ITimedTextSource
    {
        TimedTextSource(std::nullptr_t) noexcept {}
        TimedTextSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedTextSource(ptr, take_ownership_from_abi) {}
        static Windows::Media::Core::TimedTextSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream);
        static Windows::Media::Core::TimedTextSource CreateFromUri(Windows::Foundation::Uri const& uri);
        static Windows::Media::Core::TimedTextSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& defaultLanguage);
        static Windows::Media::Core::TimedTextSource CreateFromUri(Windows::Foundation::Uri const& uri, param::hstring const& defaultLanguage);
        static Windows::Media::Core::TimedTextSource CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream);
        static Windows::Media::Core::TimedTextSource CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri);
        static Windows::Media::Core::TimedTextSource CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream, param::hstring const& defaultLanguage);
        static Windows::Media::Core::TimedTextSource CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri, param::hstring const& defaultLanguage);
    };
    struct WINRT_EBO TimedTextSourceResolveResultEventArgs : Windows::Media::Core::ITimedTextSourceResolveResultEventArgs
    {
        TimedTextSourceResolveResultEventArgs(std::nullptr_t) noexcept {}
        TimedTextSourceResolveResultEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedTextSourceResolveResultEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO TimedTextStyle : Windows::Media::Core::ITimedTextStyle,
        impl::require<TimedTextStyle, Windows::Media::Core::ITimedTextStyle2>
    {
        TimedTextStyle(std::nullptr_t) noexcept {}
        TimedTextStyle(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedTextStyle(ptr, take_ownership_from_abi) {}
        TimedTextStyle();
    };
    struct WINRT_EBO TimedTextSubformat : Windows::Media::Core::ITimedTextSubformat
    {
        TimedTextSubformat(std::nullptr_t) noexcept {}
        TimedTextSubformat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::ITimedTextSubformat(ptr, take_ownership_from_abi) {}
        TimedTextSubformat();
    };
    struct WINRT_EBO VideoStabilizationEffect : Windows::Media::Core::IVideoStabilizationEffect
    {
        VideoStabilizationEffect(std::nullptr_t) noexcept {}
        VideoStabilizationEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IVideoStabilizationEffect(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VideoStabilizationEffectDefinition : Windows::Media::Effects::IVideoEffectDefinition
    {
        VideoStabilizationEffectDefinition(std::nullptr_t) noexcept {}
        VideoStabilizationEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Effects::IVideoEffectDefinition(ptr, take_ownership_from_abi) {}
        VideoStabilizationEffectDefinition();
    };
    struct WINRT_EBO VideoStabilizationEffectEnabledChangedEventArgs : Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs
    {
        VideoStabilizationEffectEnabledChangedEventArgs(std::nullptr_t) noexcept {}
        VideoStabilizationEffectEnabledChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VideoStreamDescriptor : Windows::Media::Core::IVideoStreamDescriptor,
        impl::require<VideoStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor2, Windows::Media::Core::IVideoStreamDescriptor2>
    {
        VideoStreamDescriptor(std::nullptr_t) noexcept {}
        VideoStreamDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IVideoStreamDescriptor(ptr, take_ownership_from_abi) {}
        VideoStreamDescriptor(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties);
    };
    struct WINRT_EBO VideoTrack : Windows::Media::Core::IMediaTrack,
        impl::require<VideoTrack, Windows::Media::Core::IVideoTrack>
    {
        VideoTrack(std::nullptr_t) noexcept {}
        VideoTrack(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IMediaTrack(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VideoTrackOpenFailedEventArgs : Windows::Media::Core::IVideoTrackOpenFailedEventArgs
    {
        VideoTrackOpenFailedEventArgs(std::nullptr_t) noexcept {}
        VideoTrackOpenFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IVideoTrackOpenFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO VideoTrackSupportInfo : Windows::Media::Core::IVideoTrackSupportInfo
    {
        VideoTrackSupportInfo(std::nullptr_t) noexcept {}
        VideoTrackSupportInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Core::IVideoTrackSupportInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
