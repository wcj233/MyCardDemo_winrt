#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::Foundation::Collections;
using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Windows::Data::Json;
using namespace Windows::Data::Xml::Dom;
using namespace Windows::UI::Notifications;

#pragma warning(disable:4996)

namespace winrt::MyCardDemo2::implementation
{
	MainPage::MainPage()
	{
		InitializeComponent();
		this->NavigationCacheMode(Navigation::NavigationCacheMode::Enabled);
		//mycurrent = *this;
		cardLists = winrt::single_threaded_observable_vector<Windows::Foundation::IInspectable>();
		cardUCLists = winrt::single_threaded_observable_vector<Windows::Foundation::IInspectable>();
		dragCardContent = winrt::make<MyCardDemo2::implementation::CardModel>();
		originalCardTitleVM = winrt::make<MyCardDemo2::implementation::CardViewModel>();
		cardListViewModel = winrt::make<MyCardDemo2::implementation::CardListViewModel>();

		tbname = L"";

		//get json file
		getJsonFile();
	}

	MyCardDemo2::CardListViewModel MainPage::CardListVM()
	{
		return cardListViewModel;
	}
	void MainPage::CardListVM(MyCardDemo2::CardListViewModel value)
	{
		cardListViewModel = value;
	}


	void MainPage::AddListButton_Click(IInspectable const& sender, RoutedEventArgs const&)
	{
		//show flyout
		Button addButton = sender.as<Button>();
		FlyoutBase::ShowAttachedFlyout(addButton);
		/*std::string toastVisual =
			"<visual><binding template = 'ToastGeneric'><text>123</text><text>456</text></binding></visual>";
		

		hstring toastXmlString = L"<toast><visual><binding template = 'ToastGeneric'><text>" + to_hstring(L"123") +L"</text><text>456</text></binding></visual></toast>";
		XmlDocument xml;
		hstring toastPayload = L"<toast>" + to_hstring(toastVisual) + L"</toast>";
		xml.LoadXml(toastPayload);
		ToastNotification toast = ToastNotification(xml);
		ToastNotificationManager::CreateToastNotifier().Show(toast);*/

		/*std::wstring toastPayload
		{
			LR"(
<toast>
  <visual>
    <binding template='ToastGeneric'>
      <text>)"
		};
		toastPayload += L"123";
		toastPayload += LR"(
      </text>
    </binding>
  </visual>
</toast>)";*/

		

		// Parse to XML
		/*XmlDocument toastXml;
		toastXml.LoadXml(to_hstring(toastXmlString));*/
		/*ToastNotification toast(toastXml);
		ToastNotificationManager::CreateToastNotifier(L"appid").Show(toast);*/

		

	}

	IAsyncAction MainPage::DeleteCardList(int index,std::string headTitle){
		ContentDialog dialog = ContentDialog();
		dialog.Title(box_value(L"Delete"));
		std::string content = "Are you sure to delete \"" + headTitle + " \" list";
		dialog.Content(box_value(to_hstring(content)));
		dialog.PrimaryButtonText(L"Delete");
		dialog.CloseButtonText(L"Cancel");
		ContentDialogResult result = co_await dialog.ShowAsync();
		if (result == ContentDialogResult::Primary) {//delete
			//remove toast notification
			MyCardDemo2::CardViewModel deleteVM = unbox_value<MyCardDemo2::CardViewModel>(cardListViewModel.CardLists().GetAt(index));
			for (IInspectable model : deleteVM.Contents()) {
				MyCardDemo2::CardModel deleteModel = unbox_value<MyCardDemo2::CardModel>(model);
				if (deleteModel.ToastId() != L"") {
					IVectorView<ScheduledToastNotification> notis = ToastNotificationManager::CreateToastNotifier().GetScheduledToastNotifications();
					for (ScheduledToastNotification noti : notis) {
						if (noti.Id() == deleteModel.ToastId()) {
							ToastNotificationManager::CreateToastNotifier().RemoveFromSchedule(noti);
						}
					}
				}
			}
			

			CardPanel().Children().RemoveAt(index);
			cardLists.RemoveAt(index);
			cardUCLists.RemoveAt(index);
			cardListViewModel.CardLists().RemoveAt(index);
		}

	}

	void MainPage::AddSuccess_Click(IInspectable const&, RoutedEventArgs const&)
	{
		
		tipTextBlock().Text(L"");
		uint32_t length = tipTextBox().Text().size();
		
		addFlyout().Hide();
		
		if (/*tipTextBox().Text() == L""*/length > 0)
		{
			/*tipTextBox().Text(L"");
			Windows::Foundation::DateTime startTime = winrt::clock::now();
			time_t todayt = clock::to_time_t(startTime);
			struct tm* p;
			p = gmtime(&todayt);

			hstring finalresult = to_hstring(p->tm_sec);*/

			time_t rawtime;
			long result = time(&rawtime);
			hstring finalresult = to_hstring(result);

			//add userControl
			IObservableVector<Windows::Foundation::IInspectable> mycontents = winrt::single_threaded_observable_vector<Windows::Foundation::IInspectable>();
			//mycontents.Append(winrt::make<MyCardDemo2::implementation::CardModel>(L"", L"123", L"", L"", L""));
			CardViewModel vm = CardViewModel(finalresult, tipTextBox().Text(), mycontents);

			SingleCardUserControl singleCardUC{};
			singleCardUC.CardTitleVM(vm);
			CardPanel().Children().Append(singleCardUC);
			cardLists.Append(singleCardUC.CardTitleVM());
			for (int i = 0; i < cardLists.Size(); i++) {
				auto model = cardLists.GetAt(i);
			}
			cardListViewModel.CardLists().Append(singleCardUC.CardTitleVM());
			singleCardUC.HorizontalAlignment(HorizontalAlignment::Left);
			Thickness t{ 15, 0, 0, 0 };
			singleCardUC.Margin(t);

			singleCardUC.MyDeleteEventHandler([this](const auto&, auto deleteViewModel)
			{
				uint32_t indexOf = 0;
				cardLists.IndexOf(deleteViewModel, indexOf);
				DeleteCardList(indexOf,to_string(deleteViewModel.HeaderTitle()));
			});
			
			//singleCardUC.myS();

			singleCardUC.ListViewChangeItemEventHandler([this](const auto&, auto deleteModel) {
				dragCardContent = deleteModel;
			});
			
			singleCardUC.ListViewAddItemEventHandler([this](const auto&, auto exchangeViewModel) {
				exchangeViewModel.Contents().InsertAt(0,dragCardContent);
			});
			
			tipTextBox().Text(L"");
			tipTextBlock().Text(L"");
			cardUCLists.Append(singleCardUC);


		}
		else {
			tipTextBlock().Text(L"The title is empty.Please enter a title");
		}
	}

	Windows::Foundation::IAsyncAction MainPage::getJsonFile()
	{
			//crash
			//try
			//{
			//	StorageFolder storageFolder = KnownFolders::PicturesLibrary();
			//	StorageFile sampleFile = StorageFile(nullptr);
			//	sampleFile = co_await storageFolder.GetFileAsync(L"cardJsonWinRT.txt");
			//}
			//catch (winrt::hresult_error const& ex)
			//{
			//	winrt::hresult hr = ex.to_abi(); // HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND).
			//	winrt::hstring message = ex.message();
			//}


		    StorageFolder storageFolder = KnownFolders::PicturesLibrary();
			StorageFile sampleFile = co_await storageFolder.GetFileAsync(L"cardJsonWinRT.txt");
			if (sampleFile != nullptr) {
				hstring text = await FileIO::ReadTextAsync(sampleFile);
				if (text.size() > 0)
				{
					auto vmm = CardListViewModel(text);
					int size = vmm.CardLists().Size();
					for (int i = 0; i < size; i++)
					{
						auto viewmodel = vmm.CardLists().GetAt(i);
						SingleCardUserControl singleCardUC{};
						singleCardUC.CardTitleVM(unbox_value<MyCardDemo2::CardViewModel>(viewmodel));
						singleCardUC.HorizontalAlignment(HorizontalAlignment::Left);
						Thickness t{ 15, 0, 0, 0 };
						singleCardUC.Margin(t);
						CardPanel().Children().Append(singleCardUC);
						cardLists.Append(singleCardUC.CardTitleVM());
						cardUCLists.Append(singleCardUC);
						cardListViewModel.CardLists().Append(singleCardUC.CardTitleVM());
						singleCardUC.MyDeleteEventHandler([this](const auto&, auto deleteViewModel)
							{
								uint32_t indexOf = 0;
								cardLists.IndexOf(deleteViewModel, indexOf);
								DeleteCardList(indexOf, to_string(deleteViewModel.HeaderTitle()));
							});

						singleCardUC.ListViewChangeItemEventHandler([this](const auto&, auto deleteModel) {
							dragCardContent = deleteModel;
							});

						singleCardUC.ListViewAddItemEventHandler([this](const auto&, auto exchangeViewModel) {
							exchangeViewModel.Contents().InsertAt(0, dragCardContent);
							});

					}
				}
			}
			
			
	}
}




//static MyCardDemo2::MainPage MainPage::Current()
//{
//	return *this;
//}


