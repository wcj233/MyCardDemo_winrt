#include "pch.h"
#include "MyConverter.h"
#include "MyConverter.g.cpp"
#include "winrt/Windows.UI.Xaml.Media.h"

#pragma warning(disable:4996)

namespace winrt::MyCardDemo2::implementation
{
    Windows::Foundation::IInspectable MyConverter::Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language)
    {
		hstring param = unbox_value<hstring>(parameter);
		if (param == L"color") {
			hstring color = unbox_value<hstring>(value);
			if (value != nullptr && color.size() > 0)
			{
				int index = 0;
				hstring colorA;
				hstring colorR;
				hstring colorG;
				hstring colorB;
				for (auto const& element : color)
				{
					hstring singleS{ element };
					if (singleS == L",") {
						index++;
						continue;
					}
					if (index == 0) {
						colorA = operator+(colorA,singleS);
					}
					else if (index == 1) {
						colorR = operator+(colorR, singleS);
					}
					else if (index == 2) {
						colorG = operator+(colorG, singleS);
					}
					else {
						colorB = operator+(colorB, singleS);
					}
				}
				std::string sA = to_string(colorA);
				std::string sR = to_string(colorR);
				std::string sG = to_string(colorG);
				std::string sB = to_string(colorB);
				Windows::UI::Color color = Windows::UI::ColorHelper::FromArgb(atoi(sA.c_str()), atoi(sR.c_str()), atoi(sG.c_str()), atoi(sB.c_str()));
				Windows::UI::Xaml::Media::SolidColorBrush brush{color};
				return brush;
			}
			else {
				return nullptr;
			}
		}
		else {
			hstring time = unbox_value<hstring>(value);
			int chooseTim = atoi(to_string(time).c_str());
			if (value != nullptr && time.size() > 0)
			{
				char hourBuf[10] = { 0 };
				sprintf(hourBuf, "%02d", chooseTim / 3600);
				char minBuf[10] = { 0 };
				sprintf(minBuf, "%02d", chooseTim % 3600 / 60);
				hstring text = L"Alarm time : " + to_hstring(hourBuf) + L" : " + to_hstring(minBuf);
				
				return box_value(text);
			}
			else {
				hstring text = L"";
				return box_value(text);
			}
		}
		
    }
    Windows::Foundation::IInspectable MyConverter::ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, hstring const& language)
    {
        throw hresult_not_implemented();
    }
}
