// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Devices_Midi_2_H
#define WINRT_Windows_Devices_Midi_2_H
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Midi.1.h"
namespace winrt::Windows::Devices::Midi
{
    struct WINRT_EBO MidiActiveSensingMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiActiveSensingMessage(std::nullptr_t) noexcept {}
        MidiActiveSensingMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiActiveSensingMessage();
    };
    struct WINRT_EBO MidiChannelPressureMessage : Windows::Devices::Midi::IMidiChannelPressureMessage
    {
        MidiChannelPressureMessage(std::nullptr_t) noexcept {}
        MidiChannelPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiChannelPressureMessage(ptr, take_ownership_from_abi) {}
        MidiChannelPressureMessage(uint8_t channel, uint8_t pressure);
    };
    struct WINRT_EBO MidiContinueMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiContinueMessage(std::nullptr_t) noexcept {}
        MidiContinueMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiContinueMessage();
    };
    struct WINRT_EBO MidiControlChangeMessage : Windows::Devices::Midi::IMidiControlChangeMessage
    {
        MidiControlChangeMessage(std::nullptr_t) noexcept {}
        MidiControlChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiControlChangeMessage(ptr, take_ownership_from_abi) {}
        MidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue);
    };
    struct WINRT_EBO MidiInPort : Windows::Devices::Midi::IMidiInPort
    {
        MidiInPort(std::nullptr_t) noexcept {}
        MidiInPort(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiInPort(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> FromIdAsync(param::hstring const& deviceId);
        static hstring GetDeviceSelector();
    };
    struct WINRT_EBO MidiMessageReceivedEventArgs : Windows::Devices::Midi::IMidiMessageReceivedEventArgs
    {
        MidiMessageReceivedEventArgs(std::nullptr_t) noexcept {}
        MidiMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessageReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO MidiNoteOffMessage : Windows::Devices::Midi::IMidiNoteOffMessage
    {
        MidiNoteOffMessage(std::nullptr_t) noexcept {}
        MidiNoteOffMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiNoteOffMessage(ptr, take_ownership_from_abi) {}
        MidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity);
    };
    struct WINRT_EBO MidiNoteOnMessage : Windows::Devices::Midi::IMidiNoteOnMessage
    {
        MidiNoteOnMessage(std::nullptr_t) noexcept {}
        MidiNoteOnMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiNoteOnMessage(ptr, take_ownership_from_abi) {}
        MidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity);
    };
    struct WINRT_EBO MidiOutPort : Windows::Devices::Midi::IMidiOutPort
    {
        MidiOutPort(std::nullptr_t) noexcept {}
        MidiOutPort(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiOutPort(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> FromIdAsync(param::hstring const& deviceId);
        static hstring GetDeviceSelector();
    };
    struct WINRT_EBO MidiPitchBendChangeMessage : Windows::Devices::Midi::IMidiPitchBendChangeMessage
    {
        MidiPitchBendChangeMessage(std::nullptr_t) noexcept {}
        MidiPitchBendChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiPitchBendChangeMessage(ptr, take_ownership_from_abi) {}
        MidiPitchBendChangeMessage(uint8_t channel, uint16_t bend);
    };
    struct WINRT_EBO MidiPolyphonicKeyPressureMessage : Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage
    {
        MidiPolyphonicKeyPressureMessage(std::nullptr_t) noexcept {}
        MidiPolyphonicKeyPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage(ptr, take_ownership_from_abi) {}
        MidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure);
    };
    struct WINRT_EBO MidiProgramChangeMessage : Windows::Devices::Midi::IMidiProgramChangeMessage
    {
        MidiProgramChangeMessage(std::nullptr_t) noexcept {}
        MidiProgramChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiProgramChangeMessage(ptr, take_ownership_from_abi) {}
        MidiProgramChangeMessage(uint8_t channel, uint8_t program);
    };
    struct WINRT_EBO MidiSongPositionPointerMessage : Windows::Devices::Midi::IMidiSongPositionPointerMessage
    {
        MidiSongPositionPointerMessage(std::nullptr_t) noexcept {}
        MidiSongPositionPointerMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiSongPositionPointerMessage(ptr, take_ownership_from_abi) {}
        MidiSongPositionPointerMessage(uint16_t beats);
    };
    struct WINRT_EBO MidiSongSelectMessage : Windows::Devices::Midi::IMidiSongSelectMessage
    {
        MidiSongSelectMessage(std::nullptr_t) noexcept {}
        MidiSongSelectMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiSongSelectMessage(ptr, take_ownership_from_abi) {}
        MidiSongSelectMessage(uint8_t song);
    };
    struct WINRT_EBO MidiStartMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiStartMessage(std::nullptr_t) noexcept {}
        MidiStartMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiStartMessage();
    };
    struct WINRT_EBO MidiStopMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiStopMessage(std::nullptr_t) noexcept {}
        MidiStopMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiStopMessage();
    };
    struct WINRT_EBO MidiSynthesizer : Windows::Devices::Midi::IMidiSynthesizer
    {
        MidiSynthesizer(std::nullptr_t) noexcept {}
        MidiSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiSynthesizer(ptr, take_ownership_from_abi) {}
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync();
        static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync(Windows::Devices::Enumeration::DeviceInformation const& audioDevice);
        static bool IsSynthesizer(Windows::Devices::Enumeration::DeviceInformation const& midiDevice);
    };
    struct WINRT_EBO MidiSystemExclusiveMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiSystemExclusiveMessage(std::nullptr_t) noexcept {}
        MidiSystemExclusiveMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiSystemExclusiveMessage(Windows::Storage::Streams::IBuffer const& rawData);
    };
    struct WINRT_EBO MidiSystemResetMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiSystemResetMessage(std::nullptr_t) noexcept {}
        MidiSystemResetMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiSystemResetMessage();
    };
    struct WINRT_EBO MidiTimeCodeMessage : Windows::Devices::Midi::IMidiTimeCodeMessage
    {
        MidiTimeCodeMessage(std::nullptr_t) noexcept {}
        MidiTimeCodeMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiTimeCodeMessage(ptr, take_ownership_from_abi) {}
        MidiTimeCodeMessage(uint8_t frameType, uint8_t values);
    };
    struct WINRT_EBO MidiTimingClockMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiTimingClockMessage(std::nullptr_t) noexcept {}
        MidiTimingClockMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiTimingClockMessage();
    };
    struct WINRT_EBO MidiTuneRequestMessage : Windows::Devices::Midi::IMidiMessage
    {
        MidiTuneRequestMessage(std::nullptr_t) noexcept {}
        MidiTuneRequestMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Midi::IMidiMessage(ptr, take_ownership_from_abi) {}
        MidiTuneRequestMessage();
    };
}
#endif
