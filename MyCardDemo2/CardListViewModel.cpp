#include "pch.h"
#include "CardListViewModel.h"
#include "CardListViewModel.g.cpp"

using namespace winrt;
using namespace Windows::Data::Json;

namespace winrt::MyCardDemo2::implementation
{

	CardListViewModel::CardListViewModel() {
		cardLists = winrt::single_threaded_observable_vector<Windows::Foundation::IInspectable>();
	}

	CardListViewModel::CardListViewModel(winrt::hstring jsonString) {
		cardLists = winrt::single_threaded_observable_vector<Windows::Foundation::IInspectable>();
		JsonObject jsonObject = jsonObject.Parse(jsonString);
		JsonArray arrays = JsonArray();
		JsonArray totalArrays = jsonObject.GetNamedArray(cardListsKey, arrays);
		for (int i = 0; i < totalArrays.Size(); i++)
		{
			IJsonValue singleJsonValue = totalArrays.GetAt(i);
			if (singleJsonValue.ValueType() == JsonValueType::Object) {
				//cardLists.Append(CardViewModel(singleJsonValue.GetObject()));
				auto vm = CardViewModel(singleJsonValue.GetObject());
				cardLists.Append(winrt::make<MyCardDemo2::implementation::CardViewModel>(vm.CardId(), vm.HeaderTitle(), vm.Contents()));
			
			}
			
		}
	}

    hstring CardListViewModel::Stringify()
    {
		JsonArray jsonArray = JsonArray();
		for (int i = 0; i < cardLists.Size(); i++) {
			auto cardVM = unbox_value<MyCardDemo2::CardViewModel>(cardLists.GetAt(i));
			jsonArray.Append(cardVM.ToJsonObject());
		}

		JsonObject jsonObject = JsonObject();
		jsonObject.SetNamedValue(cardListsKey,jsonArray);

		return jsonObject.Stringify();
    }
    Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> CardListViewModel::CardLists()
    {
		return cardLists;
    }
    void CardListViewModel::CardLists(Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> value)
    {
		cardLists = value;
    }
}
