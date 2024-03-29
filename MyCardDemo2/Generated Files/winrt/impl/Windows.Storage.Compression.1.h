// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Storage_Compression_1_H
#define WINRT_Windows_Storage_Compression_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Storage.Compression.0.h"
namespace winrt::Windows::Storage::Compression
{
    struct WINRT_EBO ICompressor :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompressor>,
        impl::require<Windows::Storage::Compression::ICompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IOutputStream>
    {
        ICompressor(std::nullptr_t = nullptr) noexcept {}
        ICompressor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO ICompressorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICompressorFactory>
    {
        ICompressorFactory(std::nullptr_t = nullptr) noexcept {}
        ICompressorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDecompressor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDecompressor>,
        impl::require<Windows::Storage::Compression::IDecompressor, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream>
    {
        IDecompressor(std::nullptr_t = nullptr) noexcept {}
        IDecompressor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IDecompressorFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDecompressorFactory>
    {
        IDecompressorFactory(std::nullptr_t = nullptr) noexcept {}
        IDecompressorFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
