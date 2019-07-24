#include "pch.h"
#include "AddCardContentPage.h"
#include "AddCardContentPage.g.cpp"
#include "winrt/Windows.System.h"
//#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/Windows.UI.Xaml.Input.h"
#include "winrt/Windows.Storage.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace std::chrono;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::Data::Xml::Dom;
using namespace Windows::UI::Notifications;
using namespace Windows::Storage;

#pragma warning(disable:4996)

namespace winrt::MyCardDemo2::implementation
{
	AddCardContentPage::AddCardContentPage() {
		InitializeComponent();


		Windows::UI::Color mycolor = myColorPicker().Color();
		int iA = mycolor.A;
		int iR = mycolor.R;
		int iG = mycolor.G;
		int iB = mycolor.B;
		std::string sA = std::to_string(iA);
		std::string sR = std::to_string(iR);
		std::string sG = std::to_string(iG);
		std::string sB = std::to_string(iB);

		std::string sTotal = sA + "," + sR + "," + sG + "," + sB;
		myColorString = winrt::to_hstring(sTotal);
	}

	void AddCardContentPage::OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e)
	{
		AddCardTitleVM(e.Parameter().as<MyCardDemo2::CardViewModel>());
	}

	MyCardDemo2::CardViewModel AddCardContentPage::AddCardTitleVM() {
		return myCardVM;
	}

	void AddCardContentPage::AddCardTitleVM(MyCardDemo2::CardViewModel value) {
		myCardVM = value;
	}
}


void winrt::MyCardDemo2::implementation::AddCardContentPage::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	
	//Windows::UI::Xaml::Controls::Button clickButton = submitButton().as<Windows::UI::Xaml::Controls::Button>();
	Windows::UI::Xaml::Controls::Button clickButton = sender.as<Windows::UI::Xaml::Controls::Button>();
	if (unbox_value<hstring>(clickButton.Tag()) == L"Back") {
		Frame().GoBack();
	}
	else {
		if (titleTextBox().Text().size()>0 && contentTextBox().Text().size() > 0) {
			if (selectedAlarmTime != L"") {
				DateTime startTime = winrt::clock::now();
				time_t todayt = clock::to_time_t(startTime);
				struct tm* p;
				p = gmtime(&todayt);
				int nowTim = ((p->tm_hour + 8) % 24 * 3600) + (p->tm_min * 60);
				int chooseTim = atoi(to_string(selectedAlarmTime).c_str());
				if (nowTim >= chooseTim) {
					winrt::Windows::UI::Xaml::Controls::TimePicker picker = sender.as<winrt::Windows::UI::Xaml::Controls::TimePicker>();
					FlyoutBase::ShowAttachedFlyout(picker);
					return;
				}
			}

			if (selectedAlarmTime != L"") {
				//add notification
				Windows::Foundation::DateTime startTime = winrt::clock::now();
				time_t todayt = clock::to_time_t(startTime);
			
				struct tm* p;
				p = gmtime(&todayt);
				int nowTim = ((p->tm_hour + 8) % 24 * 3600) + (p->tm_min * 60);
				int chooseTim = atoi(to_string(selectedAlarmTime).c_str());
				int timeDis = chooseTim - nowTim;
				p->tm_hour = (p->tm_hour + 8) % 24 + timeDis / 3600;
				p->tm_min = p->tm_min + (timeDis % 3600 / 60);
				p->tm_sec = 0;

				time_t alarmTime = mktime(p);
				hstring toastXmlString = L"<toast><visual><binding template = 'ToastGeneric'><text>" + titleTextBox().Text() + L"</text><text>"+ contentTextBox().Text() + L"</text> </binding></visual></toast>";
				XmlDocument xml;
				xml.LoadXml(toastXmlString);
				ScheduledToastNotification toastNoti = ScheduledToastNotification(xml, clock::from_time_t(alarmTime));
				toastNoti.Id(to_hstring(todayt));
				ToastNotificationManager::CreateToastNotifier().AddToSchedule(toastNoti);
				myCardVM.Contents().Append(winrt::make<MyCardDemo2::implementation::CardModel>(toastNoti.Id(), titleTextBox().Text(), contentTextBox().Text(), selectedAlarmTime, myColorString));
				
			}
			else {
				myCardVM.Contents().Append(winrt::make<MyCardDemo2::implementation::CardModel>(L"", titleTextBox().Text(), contentTextBox().Text(), selectedAlarmTime, myColorString));
			}
			
			Frame().GoBack();
		}
		else {
			Windows::UI::Xaml::Controls::Button addButton = sender.as<Windows::UI::Xaml::Controls::Button>();
			Windows::UI::Xaml::Controls::Primitives::FlyoutBase::ShowAttachedFlyout(addButton);
		}
	}
}


void winrt::MyCardDemo2::implementation::AddCardContentPage::MyColorPicker_ColorChanged(winrt::Windows::UI::Xaml::Controls::ColorPicker const& sender, winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs const& args)
{
	Windows::UI::Color mycolor = sender.Color();
	int iA = mycolor.A;
	int iR = mycolor.R;
	int iG = mycolor.G;
	int iB = mycolor.B;
	std::string sA = std::to_string(iA);
	std::string sR = std::to_string(iR);
	std::string sG = std::to_string(iG);
	std::string sB = std::to_string(iB);

	std::string sTotal = sA +","+ sR + "," + sG + "," + sB;
	myColorString = winrt::to_hstring(sTotal);
}


void winrt::MyCardDemo2::implementation::AddCardContentPage::AlarmTime_SelectedTimeChanged(winrt::Windows::UI::Xaml::Controls::TimePicker const& sender, winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs const& args)
{
	std::chrono::duration a = sender.Time();
	typedef std::chrono::duration<int, std::ratio<1>> seconds_type;
	seconds_type h_onehour(duration_cast<seconds_type>(a));
	int seconds = h_onehour.count();
	selectedAlarmTime = to_hstring(seconds);
	//now
	DateTime startTime = winrt::clock::now();
	time_t todayt = clock::to_time_t(startTime); //timestamp
	struct tm* p;
	p = gmtime(&todayt);
	int nowTim = ((p->tm_hour + 8) % 24 * 3600) + (p->tm_min * 60);
	if (nowTim >= seconds) {
		winrt::Windows::UI::Xaml::Controls::TimePicker picker = sender.as<winrt::Windows::UI::Xaml::Controls::TimePicker>();
		FlyoutBase::ShowAttachedFlyout(picker);
		selectedAlarmTime = L"";
		sender.SelectedTime(nullptr);


	}

}
