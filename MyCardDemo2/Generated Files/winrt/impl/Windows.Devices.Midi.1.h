// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Midi_1_H
#define WINRT_Windows_Devices_Midi_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Midi.0.h"
namespace winrt::Windows::Devices::Midi
{
    struct WINRT_EBO IMidiChannelPressureMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiChannelPressureMessage>,
        impl::require<Windows::Devices::Midi::IMidiChannelPressureMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiChannelPressureMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiChannelPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiChannelPressureMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiChannelPressureMessageFactory>
    {
        IMidiChannelPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiChannelPressureMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiControlChangeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiControlChangeMessage>,
        impl::require<Windows::Devices::Midi::IMidiControlChangeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiControlChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiControlChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiControlChangeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiControlChangeMessageFactory>
    {
        IMidiControlChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiControlChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiInPort :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiInPort>,
        impl::require<Windows::Devices::Midi::IMidiInPort, Windows::Foundation::IClosable>
    {
        IMidiInPort(std::nullptr_t = nullptr) noexcept {}
        IMidiInPort(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiInPortStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiInPortStatics>
    {
        IMidiInPortStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiInPortStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiMessage>
    {
        IMidiMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiMessageReceivedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiMessageReceivedEventArgs>
    {
        IMidiMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMidiMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiNoteOffMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOffMessage>,
        impl::require<Windows::Devices::Midi::IMidiNoteOffMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiNoteOffMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOffMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiNoteOffMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOffMessageFactory>
    {
        IMidiNoteOffMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOffMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiNoteOnMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOnMessage>,
        impl::require<Windows::Devices::Midi::IMidiNoteOnMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiNoteOnMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOnMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiNoteOnMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOnMessageFactory>
    {
        IMidiNoteOnMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOnMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiOutPort :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiOutPort>,
        impl::require<Windows::Devices::Midi::IMidiOutPort, Windows::Foundation::IClosable>
    {
        IMidiOutPort(std::nullptr_t = nullptr) noexcept {}
        IMidiOutPort(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiOutPortStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiOutPortStatics>
    {
        IMidiOutPortStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiOutPortStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiPitchBendChangeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPitchBendChangeMessage>,
        impl::require<Windows::Devices::Midi::IMidiPitchBendChangeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiPitchBendChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiPitchBendChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiPitchBendChangeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPitchBendChangeMessageFactory>
    {
        IMidiPitchBendChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiPitchBendChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiPolyphonicKeyPressureMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPolyphonicKeyPressureMessage>,
        impl::require<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiPolyphonicKeyPressureMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiPolyphonicKeyPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiPolyphonicKeyPressureMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPolyphonicKeyPressureMessageFactory>
    {
        IMidiPolyphonicKeyPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiPolyphonicKeyPressureMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiProgramChangeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiProgramChangeMessage>,
        impl::require<Windows::Devices::Midi::IMidiProgramChangeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiProgramChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiProgramChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiProgramChangeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiProgramChangeMessageFactory>
    {
        IMidiProgramChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiProgramChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiSongPositionPointerMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongPositionPointerMessage>,
        impl::require<Windows::Devices::Midi::IMidiSongPositionPointerMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiSongPositionPointerMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiSongPositionPointerMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiSongPositionPointerMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongPositionPointerMessageFactory>
    {
        IMidiSongPositionPointerMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSongPositionPointerMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiSongSelectMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongSelectMessage>,
        impl::require<Windows::Devices::Midi::IMidiSongSelectMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiSongSelectMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiSongSelectMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiSongSelectMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongSelectMessageFactory>
    {
        IMidiSongSelectMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSongSelectMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiSynthesizer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSynthesizer>,
        impl::require<Windows::Devices::Midi::IMidiSynthesizer, Windows::Foundation::IClosable, Windows::Devices::Midi::IMidiOutPort>
    {
        IMidiSynthesizer(std::nullptr_t = nullptr) noexcept {}
        IMidiSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiSynthesizerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSynthesizerStatics>
    {
        IMidiSynthesizerStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiSynthesizerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiSystemExclusiveMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSystemExclusiveMessageFactory>
    {
        IMidiSystemExclusiveMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSystemExclusiveMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiTimeCodeMessage :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiTimeCodeMessage>,
        impl::require<Windows::Devices::Midi::IMidiTimeCodeMessage, Windows::Devices::Midi::IMidiMessage>
    {
        IMidiTimeCodeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiTimeCodeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IMidiTimeCodeMessageFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMidiTimeCodeMessageFactory>
    {
        IMidiTimeCodeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiTimeCodeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
