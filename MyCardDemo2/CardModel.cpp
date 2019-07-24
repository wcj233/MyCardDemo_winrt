#include "pch.h"
#include "CardModel.h"
#include "CardModel.g.cpp"

using namespace winrt;
using namespace Windows::Data::Json;

namespace winrt::MyCardDemo2::implementation
{
	CardModel::CardModel(winrt::hstring const& m_toastId, winrt::hstring const& m_contentTitle, winrt::hstring const& m_contentDetail, winrt::hstring const& m_alarmTime, winrt::hstring const& m_statusColor) {
		toastId = m_toastId;
		contentTitle = m_contentTitle;
		contentDetail = m_contentDetail;
		alarmTime = m_alarmTime;
		statusColor = m_statusColor;

		
	}

	CardModel::CardModel(JsonObject const& myJsonObject) {
		JsonObject cardObject = myJsonObject.GetNamedObject(cardModelKey, nullptr);
		toastId = cardObject.GetNamedString(toastIdKey, L"");
		contentTitle = cardObject.GetNamedString(contentTitleKey, L"");
		contentDetail = cardObject.GetNamedString(contentDetailKey, L"");
		alarmTime = cardObject.GetNamedString(alarmTimeKey, L"");
		statusColor = cardObject.GetNamedString(statusColorKey, L"");
	}

	Windows::Data::Json::JsonObject CardModel::ToJsonObject()
	{
		JsonObject cardObject = JsonObject();
		cardObject.SetNamedValue(toastIdKey, JsonValue::CreateStringValue(toastId));
		cardObject.SetNamedValue(contentTitleKey, JsonValue::CreateStringValue(contentTitle));
		cardObject.SetNamedValue(contentDetailKey, JsonValue::CreateStringValue(contentDetail));
	    cardObject.SetNamedValue(alarmTimeKey, JsonValue::CreateStringValue(alarmTime));
		cardObject.SetNamedValue(statusColorKey, JsonValue::CreateStringValue(statusColor));

		myToJsonObject = JsonObject();
		myToJsonObject.SetNamedValue(cardModelKey, cardObject);


		return myToJsonObject;
	}

	hstring CardModel::ToastId()
	{
		return toastId;
	}
	void CardModel::ToastId(hstring value)
	{
		toastId = value;
	}
	hstring CardModel::ContentTitle()
	{
		return contentTitle;
	}
	void CardModel::ContentTitle(hstring value)
	{
		contentTitle = value;
	}
	hstring CardModel::ContentDetail()
	{
		return contentDetail;
	}
	void CardModel::ContentDetail(hstring value)
	{
		contentDetail = value;
	}
	hstring CardModel::AlarmTime()
	{
		return alarmTime;
	}
	void CardModel::AlarmTime(hstring value)
	{
		alarmTime = value;
	}
	hstring CardModel::StatusColor()
	{
		return statusColor;
	}
	void CardModel::StatusColor(hstring value)
	{
		statusColor = value;
	}
}
