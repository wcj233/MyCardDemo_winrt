// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Media_2_H
#define WINRT_Windows_Media_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.1.h"
namespace winrt::Windows::Media
{
    struct MediaTimeRange
    {
        Windows::Foundation::TimeSpan Start;
        Windows::Foundation::TimeSpan End;
    };
    inline bool operator==(MediaTimeRange const& left, MediaTimeRange const& right) noexcept
    {
        return left.Start == right.Start && left.End == right.End;
    }
    inline bool operator!=(MediaTimeRange const& left, MediaTimeRange const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_EBO AudioBuffer : Windows::Media::IAudioBuffer
    {
        AudioBuffer(std::nullptr_t) noexcept {}
        AudioBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IAudioBuffer(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO AudioFrame : Windows::Media::IAudioFrame
    {
        AudioFrame(std::nullptr_t) noexcept {}
        AudioFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IAudioFrame(ptr, take_ownership_from_abi) {}
        AudioFrame(uint32_t capacity);
    };
    struct WINRT_EBO AutoRepeatModeChangeRequestedEventArgs : Windows::Media::IAutoRepeatModeChangeRequestedEventArgs
    {
        AutoRepeatModeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        AutoRepeatModeChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IAutoRepeatModeChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ImageDisplayProperties : Windows::Media::IImageDisplayProperties
    {
        ImageDisplayProperties(std::nullptr_t) noexcept {}
        ImageDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IImageDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct MediaControl
    {
        MediaControl() = delete;
        static winrt::event_token SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using SoundLevelChanged_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_SoundLevelChanged>;
        static SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void SoundLevelChanged(winrt::event_token const& cookie);
        static winrt::event_token PlayPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PlayPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPressed>;
        static PlayPressed_revoker PlayPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void PlayPressed(winrt::event_token const& cookie);
        static winrt::event_token PausePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PausePressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PausePressed>;
        static PausePressed_revoker PausePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void PausePressed(winrt::event_token const& cookie);
        static winrt::event_token StopPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using StopPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_StopPressed>;
        static StopPressed_revoker StopPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void StopPressed(winrt::event_token const& cookie);
        static winrt::event_token PlayPauseTogglePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PlayPauseTogglePressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPauseTogglePressed>;
        static PlayPauseTogglePressed_revoker PlayPauseTogglePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void PlayPauseTogglePressed(winrt::event_token const& cookie);
        static winrt::event_token RecordPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RecordPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_RecordPressed>;
        static RecordPressed_revoker RecordPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void RecordPressed(winrt::event_token const& cookie);
        static winrt::event_token NextTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using NextTrackPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_NextTrackPressed>;
        static NextTrackPressed_revoker NextTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void NextTrackPressed(winrt::event_token const& cookie);
        static winrt::event_token PreviousTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PreviousTrackPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_PreviousTrackPressed>;
        static PreviousTrackPressed_revoker PreviousTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void PreviousTrackPressed(winrt::event_token const& cookie);
        static winrt::event_token FastForwardPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using FastForwardPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_FastForwardPressed>;
        static FastForwardPressed_revoker FastForwardPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void FastForwardPressed(winrt::event_token const& cookie);
        static winrt::event_token RewindPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RewindPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_RewindPressed>;
        static RewindPressed_revoker RewindPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void RewindPressed(winrt::event_token const& cookie);
        static winrt::event_token ChannelUpPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using ChannelUpPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelUpPressed>;
        static ChannelUpPressed_revoker ChannelUpPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void ChannelUpPressed(winrt::event_token const& cookie);
        static winrt::event_token ChannelDownPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using ChannelDownPressed_revoker = impl::factory_event_revoker<Windows::Media::IMediaControl, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelDownPressed>;
        static ChannelDownPressed_revoker ChannelDownPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static void ChannelDownPressed(winrt::event_token const& cookie);
        static Windows::Media::SoundLevel SoundLevel();
        static void TrackName(param::hstring const& value);
        static hstring TrackName();
        static void ArtistName(param::hstring const& value);
        static hstring ArtistName();
        static void IsPlaying(bool value);
        static bool IsPlaying();
        static void AlbumArt(Windows::Foundation::Uri const& value);
        static Windows::Foundation::Uri AlbumArt();
    };
    struct WINRT_EBO MediaExtensionManager : Windows::Media::IMediaExtensionManager,
        impl::require<MediaExtensionManager, Windows::Media::IMediaExtensionManager2>
    {
        MediaExtensionManager(std::nullptr_t) noexcept {}
        MediaExtensionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaExtensionManager(ptr, take_ownership_from_abi) {}
        MediaExtensionManager();
    };
    struct MediaMarkerTypes
    {
        MediaMarkerTypes() = delete;
        static hstring Bookmark();
    };
    struct WINRT_EBO MediaProcessingTriggerDetails : Windows::Media::IMediaProcessingTriggerDetails
    {
        MediaProcessingTriggerDetails(std::nullptr_t) noexcept {}
        MediaProcessingTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaProcessingTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MediaTimelineController : Windows::Media::IMediaTimelineController,
        impl::require<MediaTimelineController, Windows::Media::IMediaTimelineController2>
    {
        MediaTimelineController(std::nullptr_t) noexcept {}
        MediaTimelineController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaTimelineController(ptr, take_ownership_from_abi) {}
        MediaTimelineController();
    };
    struct WINRT_EBO MediaTimelineControllerFailedEventArgs : Windows::Media::IMediaTimelineControllerFailedEventArgs
    {
        MediaTimelineControllerFailedEventArgs(std::nullptr_t) noexcept {}
        MediaTimelineControllerFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMediaTimelineControllerFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MusicDisplayProperties : Windows::Media::IMusicDisplayProperties,
        impl::require<MusicDisplayProperties, Windows::Media::IMusicDisplayProperties2, Windows::Media::IMusicDisplayProperties3>
    {
        MusicDisplayProperties(std::nullptr_t) noexcept {}
        MusicDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IMusicDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PlaybackPositionChangeRequestedEventArgs : Windows::Media::IPlaybackPositionChangeRequestedEventArgs
    {
        PlaybackPositionChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        PlaybackPositionChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IPlaybackPositionChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO PlaybackRateChangeRequestedEventArgs : Windows::Media::IPlaybackRateChangeRequestedEventArgs
    {
        PlaybackRateChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        PlaybackRateChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IPlaybackRateChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ShuffleEnabledChangeRequestedEventArgs : Windows::Media::IShuffleEnabledChangeRequestedEventArgs
    {
        ShuffleEnabledChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        ShuffleEnabledChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IShuffleEnabledChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SystemMediaTransportControls : Windows::Media::ISystemMediaTransportControls,
        impl::require<SystemMediaTransportControls, Windows::Media::ISystemMediaTransportControls2>
    {
        SystemMediaTransportControls(std::nullptr_t) noexcept {}
        SystemMediaTransportControls(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControls(ptr, take_ownership_from_abi) {}
        static Windows::Media::SystemMediaTransportControls GetForCurrentView();
    };
    struct WINRT_EBO SystemMediaTransportControlsButtonPressedEventArgs : Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs
    {
        SystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsButtonPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SystemMediaTransportControlsDisplayUpdater : Windows::Media::ISystemMediaTransportControlsDisplayUpdater
    {
        SystemMediaTransportControlsDisplayUpdater(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsDisplayUpdater(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsDisplayUpdater(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SystemMediaTransportControlsPropertyChangedEventArgs : Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs
    {
        SystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO SystemMediaTransportControlsTimelineProperties : Windows::Media::ISystemMediaTransportControlsTimelineProperties
    {
        SystemMediaTransportControlsTimelineProperties(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsTimelineProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ISystemMediaTransportControlsTimelineProperties(ptr, take_ownership_from_abi) {}
        SystemMediaTransportControlsTimelineProperties();
    };
    struct WINRT_EBO VideoDisplayProperties : Windows::Media::IVideoDisplayProperties,
        impl::require<VideoDisplayProperties, Windows::Media::IVideoDisplayProperties2>
    {
        VideoDisplayProperties(std::nullptr_t) noexcept {}
        VideoDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IVideoDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct VideoEffects
    {
        VideoEffects() = delete;
        static hstring VideoStabilization();
    };
    struct WINRT_EBO VideoFrame : Windows::Media::IVideoFrame,
        impl::require<VideoFrame, Windows::Media::IVideoFrame2>
    {
        VideoFrame(std::nullptr_t) noexcept {}
        VideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::IVideoFrame(ptr, take_ownership_from_abi) {}
        VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
        VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        using Windows::Media::IVideoFrame::CopyToAsync;
        using impl::consume_t<VideoFrame, Windows::Media::IVideoFrame2>::CopyToAsync;
        static Windows::Media::VideoFrame CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height);
        static Windows::Media::VideoFrame CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device);
        static Windows::Media::VideoFrame CreateWithSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap);
        static Windows::Media::VideoFrame CreateWithDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
    };
}
#endif
