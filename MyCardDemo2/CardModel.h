#pragma once
#include "CardModel.g.h"
#include "winrt/Windows.Data.Json.h"

namespace winrt::MyCardDemo2::implementation
{
	struct CardModel : CardModelT<CardModel>
	{
		CardModel() = default;
		CardModel(winrt::hstring const& m_toastId, winrt::hstring const& m_contentTitle, winrt::hstring const& m_contentDetail, winrt::hstring const& m_alarmTime, winrt::hstring const& m_statusColor);
		CardModel(Windows::Data::Json::JsonObject const& myJsonObject);
		Windows::Data::Json::JsonObject ToJsonObject();


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

	private:
		winrt::hstring toastId;
		winrt::hstring contentTitle;
		winrt::hstring contentDetail;
		winrt::hstring alarmTime;
		winrt::hstring statusColor;

		winrt::hstring toastIdKey = L"toastId";
		winrt::hstring contentTitleKey = L"contentTitle";
		winrt::hstring contentDetailKey = L"contentDetail";
		winrt::hstring alarmTimeKey = L"alarmTime";
		winrt::hstring statusColorKey = L"statusColor";
		winrt::hstring cardModelKey = L"cardModel";

		Windows::Data::Json::JsonObject myToJsonObject;
	};
}
