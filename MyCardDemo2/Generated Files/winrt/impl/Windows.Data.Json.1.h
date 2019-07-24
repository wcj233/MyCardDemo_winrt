// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Data_Json_1_H
#define WINRT_Windows_Data_Json_1_H
#include "winrt/impl/Windows.Data.Json.0.h"
namespace winrt::Windows::Data::Json
{
    struct WINRT_EBO IJsonArray :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonArray>,
        impl::require<Windows::Data::Json::IJsonArray, Windows::Data::Json::IJsonValue>
    {
        IJsonArray(std::nullptr_t = nullptr) noexcept {}
        IJsonArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IJsonArrayStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonArrayStatics>
    {
        IJsonArrayStatics(std::nullptr_t = nullptr) noexcept {}
        IJsonArrayStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IJsonErrorStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonErrorStatics2>
    {
        IJsonErrorStatics2(std::nullptr_t = nullptr) noexcept {}
        IJsonErrorStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IJsonObject :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonObject>,
        impl::require<Windows::Data::Json::IJsonObject, Windows::Data::Json::IJsonValue>
    {
        IJsonObject(std::nullptr_t = nullptr) noexcept {}
        IJsonObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IJsonObjectStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonObjectStatics>
    {
        IJsonObjectStatics(std::nullptr_t = nullptr) noexcept {}
        IJsonObjectStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IJsonObjectWithDefaultValues :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonObjectWithDefaultValues>,
        impl::require<Windows::Data::Json::IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonValue, Windows::Data::Json::IJsonObject>
    {
        IJsonObjectWithDefaultValues(std::nullptr_t = nullptr) noexcept {}
        IJsonObjectWithDefaultValues(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedArray;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedArray;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedBoolean;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedBoolean;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedNumber;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedNumber;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedObject;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedObject;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedString;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedString;
        using impl::consume_t<IJsonObjectWithDefaultValues, IJsonObjectWithDefaultValues>::GetNamedValue;
        using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedValue;
    };
    struct WINRT_EBO IJsonValue :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonValue>
    {
        IJsonValue(std::nullptr_t = nullptr) noexcept {}
        IJsonValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IJsonValueStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonValueStatics>
    {
        IJsonValueStatics(std::nullptr_t = nullptr) noexcept {}
        IJsonValueStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_EBO IJsonValueStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IJsonValueStatics2>
    {
        IJsonValueStatics2(std::nullptr_t = nullptr) noexcept {}
        IJsonValueStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
