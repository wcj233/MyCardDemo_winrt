// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Data_Json_H
#define WINRT_Windows_Data_Json_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190506.1"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Data.Json.2.h"
namespace winrt::impl
{
    template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonArray<D>::GetObjectAt(uint32_t index) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetObjectAt(index, &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonArray<D>::GetArrayAt(uint32_t index) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetArrayAt(index, &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Data_Json_IJsonArray<D>::GetStringAt(uint32_t index) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetStringAt(index, &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> double consume_Windows_Data_Json_IJsonArray<D>::GetNumberAt(uint32_t index) const
    {
        double returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetNumberAt(index, &returnValue));
        return returnValue;
    }
    template <typename D> bool consume_Windows_Data_Json_IJsonArray<D>::GetBooleanAt(uint32_t index) const
    {
        bool returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetBooleanAt(index, &returnValue));
        return returnValue;
    }
    template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonArrayStatics<D>::Parse(param::hstring const& input) const
    {
        void* jsonArray{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArrayStatics)->Parse(*(void**)(&input), &jsonArray));
        return { jsonArray, take_ownership_from_abi };
    }
    template <typename D> bool consume_Windows_Data_Json_IJsonArrayStatics<D>::TryParse(param::hstring const& input, Windows::Data::Json::JsonArray& result) const
    {
        bool succeeded;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArrayStatics)->TryParse(*(void**)(&input), impl::bind_out(result), &succeeded));
        return succeeded;
    }
    template <typename D> Windows::Data::Json::JsonErrorStatus consume_Windows_Data_Json_IJsonErrorStatics2<D>::GetJsonStatus(int32_t hresult) const
    {
        Windows::Data::Json::JsonErrorStatus status;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonErrorStatics2)->GetJsonStatus(hresult, put_abi(status)));
        return status;
    }
    template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonObject<D>::GetNamedValue(param::hstring const& name) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedValue(*(void**)(&name), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> void consume_Windows_Data_Json_IJsonObject<D>::SetNamedValue(param::hstring const& name, Windows::Data::Json::IJsonValue const& value) const
    {
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->SetNamedValue(*(void**)(&name), *(void**)(&value)));
    }
    template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonObject<D>::GetNamedObject(param::hstring const& name) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedObject(*(void**)(&name), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonObject<D>::GetNamedArray(param::hstring const& name) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedArray(*(void**)(&name), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Data_Json_IJsonObject<D>::GetNamedString(param::hstring const& name) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedString(*(void**)(&name), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> double consume_Windows_Data_Json_IJsonObject<D>::GetNamedNumber(param::hstring const& name) const
    {
        double returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedNumber(*(void**)(&name), &returnValue));
        return returnValue;
    }
    template <typename D> bool consume_Windows_Data_Json_IJsonObject<D>::GetNamedBoolean(param::hstring const& name) const
    {
        bool returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedBoolean(*(void**)(&name), &returnValue));
        return returnValue;
    }
    template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonObjectStatics<D>::Parse(param::hstring const& input) const
    {
        void* jsonObject{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectStatics)->Parse(*(void**)(&input), &jsonObject));
        return { jsonObject, take_ownership_from_abi };
    }
    template <typename D> bool consume_Windows_Data_Json_IJsonObjectStatics<D>::TryParse(param::hstring const& input, Windows::Data::Json::JsonObject& result) const
    {
        bool succeeded;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectStatics)->TryParse(*(void**)(&input), impl::bind_out(result), &succeeded));
        return succeeded;
    }
    template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedValue(param::hstring const& name, Windows::Data::Json::JsonValue const& defaultValue) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedValueOrDefault(*(void**)(&name), *(void**)(&defaultValue), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedObject(param::hstring const& name, Windows::Data::Json::JsonObject const& defaultValue) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedObjectOrDefault(*(void**)(&name), *(void**)(&defaultValue), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedString(param::hstring const& name, param::hstring const& defaultValue) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedStringOrDefault(*(void**)(&name), *(void**)(&defaultValue), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedArray(param::hstring const& name, Windows::Data::Json::JsonArray const& defaultValue) const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedArrayOrDefault(*(void**)(&name), *(void**)(&defaultValue), &returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> double consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedNumber(param::hstring const& name, double defaultValue) const
    {
        double returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedNumberOrDefault(*(void**)(&name), defaultValue, &returnValue));
        return returnValue;
    }
    template <typename D> bool consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedBoolean(param::hstring const& name, bool defaultValue) const
    {
        bool returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedBooleanOrDefault(*(void**)(&name), defaultValue, &returnValue));
        return returnValue;
    }
    template <typename D> Windows::Data::Json::JsonValueType consume_Windows_Data_Json_IJsonValue<D>::ValueType() const
    {
        Windows::Data::Json::JsonValueType value;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->get_ValueType(put_abi(value)));
        return value;
    }
    template <typename D> hstring consume_Windows_Data_Json_IJsonValue<D>::Stringify() const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->Stringify(&returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> hstring consume_Windows_Data_Json_IJsonValue<D>::GetString() const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetString(&returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> double consume_Windows_Data_Json_IJsonValue<D>::GetNumber() const
    {
        double returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetNumber(&returnValue));
        return returnValue;
    }
    template <typename D> bool consume_Windows_Data_Json_IJsonValue<D>::GetBoolean() const
    {
        bool returnValue;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetBoolean(&returnValue));
        return returnValue;
    }
    template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonValue<D>::GetArray() const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetArray(&returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonValue<D>::GetObject() const
    {
        void* returnValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetObject(&returnValue));
        return { returnValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::Parse(param::hstring const& input) const
    {
        void* jsonValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->Parse(*(void**)(&input), &jsonValue));
        return { jsonValue, take_ownership_from_abi };
    }
    template <typename D> bool consume_Windows_Data_Json_IJsonValueStatics<D>::TryParse(param::hstring const& input, Windows::Data::Json::JsonValue& result) const
    {
        bool succeeded;
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->TryParse(*(void**)(&input), impl::bind_out(result), &succeeded));
        return succeeded;
    }
    template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::CreateBooleanValue(bool input) const
    {
        void* jsonValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->CreateBooleanValue(input, &jsonValue));
        return { jsonValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::CreateNumberValue(double input) const
    {
        void* jsonValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->CreateNumberValue(input, &jsonValue));
        return { jsonValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::CreateStringValue(param::hstring const& input) const
    {
        void* jsonValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->CreateStringValue(*(void**)(&input), &jsonValue));
        return { jsonValue, take_ownership_from_abi };
    }
    template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics2<D>::CreateNullValue() const
    {
        void* jsonValue{};
        check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics2)->CreateNullValue(&jsonValue));
        return { jsonValue, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonArray> : produce_base<D, Windows::Data::Json::IJsonArray>
    {
        int32_t WINRT_CALL GetObjectAt(uint32_t index, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonObject>(this->shim().GetObjectAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetArrayAt(uint32_t index, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonArray>(this->shim().GetArrayAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetStringAt(uint32_t index, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<hstring>(this->shim().GetStringAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNumberAt(uint32_t index, double* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<double>(this->shim().GetNumberAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetBooleanAt(uint32_t index, bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GetBooleanAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonArrayStatics> : produce_base<D, Windows::Data::Json::IJsonArrayStatics>
    {
        int32_t WINRT_CALL Parse(void* input, void** jsonArray) noexcept final try
        {
            clear_abi(jsonArray);
            typename D::abi_guard guard(this->shim());
            *jsonArray = detach_from<Windows::Data::Json::JsonArray>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL TryParse(void* input, void** result, bool* succeeded) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Data::Json::JsonArray*>(result)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonErrorStatics2> : produce_base<D, Windows::Data::Json::IJsonErrorStatics2>
    {
        int32_t WINRT_CALL GetJsonStatus(int32_t hresult, int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Data::Json::JsonErrorStatus>(this->shim().GetJsonStatus(hresult));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonObject> : produce_base<D, Windows::Data::Json::IJsonObject>
    {
        int32_t WINRT_CALL GetNamedValue(void* name, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonValue>(this->shim().GetNamedValue(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL SetNamedValue(void* name, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNamedValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::IJsonValue const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedObject(void* name, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonObject>(this->shim().GetNamedObject(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedArray(void* name, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonArray>(this->shim().GetNamedArray(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedString(void* name, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<hstring>(this->shim().GetNamedString(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedNumber(void* name, double* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<double>(this->shim().GetNamedNumber(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedBoolean(void* name, bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GetNamedBoolean(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonObjectStatics> : produce_base<D, Windows::Data::Json::IJsonObjectStatics>
    {
        int32_t WINRT_CALL Parse(void* input, void** jsonObject) noexcept final try
        {
            clear_abi(jsonObject);
            typename D::abi_guard guard(this->shim());
            *jsonObject = detach_from<Windows::Data::Json::JsonObject>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL TryParse(void* input, void** result, bool* succeeded) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Data::Json::JsonObject*>(result)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonObjectWithDefaultValues> : produce_base<D, Windows::Data::Json::IJsonObjectWithDefaultValues>
    {
        int32_t WINRT_CALL GetNamedValueOrDefault(void* name, void* defaultValue, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonValue>(this->shim().GetNamedValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::JsonValue const*>(&defaultValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedObjectOrDefault(void* name, void* defaultValue, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonObject>(this->shim().GetNamedObject(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::JsonObject const*>(&defaultValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedStringOrDefault(void* name, void* defaultValue, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<hstring>(this->shim().GetNamedString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&defaultValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedArrayOrDefault(void* name, void* defaultValue, void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonArray>(this->shim().GetNamedArray(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::JsonArray const*>(&defaultValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedNumberOrDefault(void* name, double defaultValue, double* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<double>(this->shim().GetNamedNumber(*reinterpret_cast<hstring const*>(&name), defaultValue));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNamedBooleanOrDefault(void* name, bool defaultValue, bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GetNamedBoolean(*reinterpret_cast<hstring const*>(&name), defaultValue));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonValue> : produce_base<D, Windows::Data::Json::IJsonValue>
    {
        int32_t WINRT_CALL get_ValueType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Json::JsonValueType>(this->shim().ValueType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL Stringify(void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<hstring>(this->shim().Stringify());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetString(void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<hstring>(this->shim().GetString());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetNumber(double* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<double>(this->shim().GetNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetBoolean(bool* returnValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GetBoolean());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetArray(void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonArray>(this->shim().GetArray());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL GetObject(void** returnValue) noexcept final try
        {
            clear_abi(returnValue);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Data::Json::JsonObject>(this->shim().GetObject());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonValueStatics> : produce_base<D, Windows::Data::Json::IJsonValueStatics>
    {
        int32_t WINRT_CALL Parse(void* input, void** jsonValue) noexcept final try
        {
            clear_abi(jsonValue);
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_from<Windows::Data::Json::JsonValue>(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL TryParse(void* input, void** result, bool* succeeded) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Data::Json::JsonValue*>(result)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateBooleanValue(bool input, void** jsonValue) noexcept final try
        {
            clear_abi(jsonValue);
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_from<Windows::Data::Json::JsonValue>(this->shim().CreateBooleanValue(input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateNumberValue(double input, void** jsonValue) noexcept final try
        {
            clear_abi(jsonValue);
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_from<Windows::Data::Json::JsonValue>(this->shim().CreateNumberValue(input));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t WINRT_CALL CreateStringValue(void* input, void** jsonValue) noexcept final try
        {
            clear_abi(jsonValue);
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_from<Windows::Data::Json::JsonValue>(this->shim().CreateStringValue(*reinterpret_cast<hstring const*>(&input)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Data::Json::IJsonValueStatics2> : produce_base<D, Windows::Data::Json::IJsonValueStatics2>
    {
        int32_t WINRT_CALL CreateNullValue(void** jsonValue) noexcept final try
        {
            clear_abi(jsonValue);
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_from<Windows::Data::Json::JsonValue>(this->shim().CreateNullValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Data::Json
{
    inline JsonArray::JsonArray() :
        JsonArray(impl::call_factory<JsonArray>([](auto&& f) { return f.template ActivateInstance<JsonArray>(); }))
    {
    }
    inline Windows::Data::Json::JsonArray JsonArray::Parse(param::hstring const& input)
    {
        return impl::call_factory<JsonArray, Windows::Data::Json::IJsonArrayStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline bool JsonArray::TryParse(param::hstring const& input, Windows::Data::Json::JsonArray& result)
    {
        return impl::call_factory<JsonArray, Windows::Data::Json::IJsonArrayStatics>([&](auto&& f) { return f.TryParse(input, result); });
    }
    inline Windows::Data::Json::JsonErrorStatus JsonError::GetJsonStatus(int32_t hresult)
    {
        return impl::call_factory<JsonError, Windows::Data::Json::IJsonErrorStatics2>([&](auto&& f) { return f.GetJsonStatus(hresult); });
    }
    inline JsonObject::JsonObject() :
        JsonObject(impl::call_factory<JsonObject>([](auto&& f) { return f.template ActivateInstance<JsonObject>(); }))
    {
    }
    inline Windows::Data::Json::JsonObject JsonObject::Parse(param::hstring const& input)
    {
        return impl::call_factory<JsonObject, Windows::Data::Json::IJsonObjectStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline bool JsonObject::TryParse(param::hstring const& input, Windows::Data::Json::JsonObject& result)
    {
        return impl::call_factory<JsonObject, Windows::Data::Json::IJsonObjectStatics>([&](auto&& f) { return f.TryParse(input, result); });
    }
    inline Windows::Data::Json::JsonValue JsonValue::Parse(param::hstring const& input)
    {
        return impl::call_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>([&](auto&& f) { return f.Parse(input); });
    }
    inline bool JsonValue::TryParse(param::hstring const& input, Windows::Data::Json::JsonValue& result)
    {
        return impl::call_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>([&](auto&& f) { return f.TryParse(input, result); });
    }
    inline Windows::Data::Json::JsonValue JsonValue::CreateBooleanValue(bool input)
    {
        return impl::call_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>([&](auto&& f) { return f.CreateBooleanValue(input); });
    }
    inline Windows::Data::Json::JsonValue JsonValue::CreateNumberValue(double input)
    {
        return impl::call_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>([&](auto&& f) { return f.CreateNumberValue(input); });
    }
    inline Windows::Data::Json::JsonValue JsonValue::CreateStringValue(param::hstring const& input)
    {
        return impl::call_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>([&](auto&& f) { return f.CreateStringValue(input); });
    }
    inline Windows::Data::Json::JsonValue JsonValue::CreateNullValue()
    {
        return impl::call_factory<JsonValue, Windows::Data::Json::IJsonValueStatics2>([&](auto&& f) { return f.CreateNullValue(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Data::Json::IJsonArray> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonArray> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonArrayStatics> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonArrayStatics> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonErrorStatics2> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonErrorStatics2> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonObject> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonObject> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonObjectStatics> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonObjectStatics> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonValue> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonValue> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonValueStatics> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonValueStatics> {};
    template<> struct hash<winrt::Windows::Data::Json::IJsonValueStatics2> : winrt::impl::hash_base<winrt::Windows::Data::Json::IJsonValueStatics2> {};
    template<> struct hash<winrt::Windows::Data::Json::JsonArray> : winrt::impl::hash_base<winrt::Windows::Data::Json::JsonArray> {};
    template<> struct hash<winrt::Windows::Data::Json::JsonError> : winrt::impl::hash_base<winrt::Windows::Data::Json::JsonError> {};
    template<> struct hash<winrt::Windows::Data::Json::JsonObject> : winrt::impl::hash_base<winrt::Windows::Data::Json::JsonObject> {};
    template<> struct hash<winrt::Windows::Data::Json::JsonValue> : winrt::impl::hash_base<winrt::Windows::Data::Json::JsonValue> {};
}
#endif
