#pragma once
#include "CardModel.g.h"

namespace winrt::MyCardDemo2::implementation
{
    struct CardModel : CardModelT<CardModel>
    {
        CardModel() = default;

        hstring ToastId();
        void ToastId(hstring value);
        hstring ContentTitle();
        void ContentTitle(hstring value);
        hstring ContentDetail();
        void ContentDetail(hstring value);
        hstring AlarmTime();
        void AlarmTime(hstring value);
        hstring StatusColor();
        void StatusColor(hstring value);
        Windows::Data::Json::JsonObject ToJsonObject();
    };
}
