// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

void* winrt_make_MyCardDemo2_MyConverter()
{
    return winrt::detach_abi(winrt::make<winrt::MyCardDemo2::factory_implementation::MyConverter>());
}
namespace winrt::MyCardDemo2
{
    MyConverter::MyConverter() :
        MyConverter(make<MyCardDemo2::implementation::MyConverter>())
    {
    }
}
