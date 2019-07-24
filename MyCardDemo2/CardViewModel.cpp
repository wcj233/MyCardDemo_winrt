#include "pch.h"
#include "CardViewModel.h"
#include "CardViewModel.g.cpp"

using namespace winrt;
using namespace Windows::Data::Json;

namespace winrt::MyCardDemo2::implementation
{
	CardViewModel::CardViewModel() {
		contents = winrt::single_threaded_observable_vector<Windows::Foundation::IInspectable>();
	}
	CardViewModel::CardViewModel(winrt::hstring const& m_cardId, winrt::hstring const& m_headerTitle, Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> const& m_contents) :cardId{ m_cardId }, headerTitle{ m_headerTitle }
	{
		
		contents = m_contents;
	}

	CardViewModel::CardViewModel(JsonObject myJsonObject) {
		contents = winrt::single_threaded_observable_vector<Windows::Foundation::IInspectable>();
		JsonObject cardObject = myJsonObject.GetNamedObject(cardVMKey, nullptr);
		cardId = cardObject.GetNamedString(cardIdKey, L"");
		headerTitle = cardObject.GetNamedString(headerTitleKey, L"");
		JsonArray arrays = JsonArray();
		JsonArray totalArrays = cardObject.GetNamedArray(contentsKey, arrays);
		for (int i = 0; i < totalArrays.Size(); i++)
		{
			IJsonValue singleJsonValue = totalArrays.GetAt(i);
			if (singleJsonValue.ValueType() == JsonValueType::Object) {
				CardModel model = CardModel(singleJsonValue.GetObject());
				contents.Append(winrt::make<MyCardDemo2::implementation::CardModel>(model.ToastId(), model.ContentTitle(), model.ContentDetail(), model.AlarmTime(), model.StatusColor()));
			}
		}
	}

	hstring CardViewModel::Stringify()
	{
		JsonArray jsonArray = JsonArray();
		for (int i = 0; i < contents.Size(); i++) {
			auto model = unbox_value<MyCardDemo2::CardModel>(contents.GetAt(i));
			jsonArray.Append(model.ToJsonObject());
		}
		JsonObject jsonObject = JsonObject();
		jsonObject.SetNamedValue(cardIdKey, JsonValue::CreateStringValue(cardId));
		jsonObject.SetNamedValue(headerTitleKey, JsonValue::CreateStringValue(headerTitle));
		jsonObject.SetNamedValue(contentsKey, jsonArray);

		return jsonArray.Stringify();
	}
	Windows::Data::Json::JsonObject CardViewModel::ToJsonObject()
	{
		JsonArray jsonArray = JsonArray();
		for (int i = 0; i < contents.Size(); i++) {
			auto model = unbox_value<MyCardDemo2::CardModel>(contents.GetAt(i));
			jsonArray.Append(model.ToJsonObject());
		}

		JsonObject cardObject = JsonObject();
		cardObject.SetNamedValue(cardIdKey, JsonValue::CreateStringValue(cardId));
		cardObject.SetNamedValue(headerTitleKey, JsonValue::CreateStringValue(headerTitle));
		cardObject.SetNamedValue(contentsKey, jsonArray);
		myToJsonObject = JsonObject();
		myToJsonObject.SetNamedValue(cardVMKey, cardObject);


		return myToJsonObject;
	}

	hstring CardViewModel::CardId()
	{
		return cardId;
	}
	void CardViewModel::CardId(hstring value)
	{
		cardId = value;
	}
	hstring CardViewModel::HeaderTitle()
	{
		return headerTitle;
	}
	void CardViewModel::HeaderTitle(hstring value)
	{
		headerTitle = value;
		
	}
	Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> CardViewModel::Contents()
	{
		return contents;
	}

	void CardViewModel::Contents(Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> const& value) {
		contents = value;
	}

	winrt::event_token CardViewModel::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
	{
		return m_propertyChanged.add(handler);
	}
	void CardViewModel::PropertyChanged(winrt::event_token const& token) noexcept
	{
		m_propertyChanged.remove(token);
	}
}
