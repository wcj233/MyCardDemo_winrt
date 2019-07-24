﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "SingleCardUserControl.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

namespace winrt::MyCardDemo2::implementation
{
    using Application = ::winrt::Windows::UI::Xaml::Application;
    using ComponentResourceLocation = ::winrt::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation;
    using DataTemplate = ::winrt::Windows::UI::Xaml::DataTemplate;
    using DependencyObject = ::winrt::Windows::UI::Xaml::DependencyObject;
    using DependencyProperty = ::winrt::Windows::UI::Xaml::DependencyProperty;
    using IComponentConnector = ::winrt::Windows::UI::Xaml::Markup::IComponentConnector;
    using Uri = ::winrt::Windows::Foundation::Uri;
    using XamlBindingHelper = ::winrt::Windows::UI::Xaml::Markup::XamlBindingHelper;

    template <typename D, typename ... I>
    void SingleCardUserControlT<D, I...>::InitializeComponent()
    {
        if (!_contentLoaded)
        {
            _contentLoaded = true;
            Uri resourceLocator{ L"ms-appx:///SingleCardUserControl.xaml" };
            Application::LoadComponent(*this, resourceLocator, ComponentResourceLocation::Application);
        }
    }

    template <typename D, typename ... I>
    void SingleCardUserControlT<D, I...>::Connect(int32_t connectionId, IInspectable const& target)
    {
        switch (connectionId)
        {
        case 7:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::StackPanel>();
                this->BGStackPanel(targetElement);
            }
            break;
        case 8:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::ListView>();
                this->cardContentListView(targetElement);
                auto weakThis = ::winrt::make_weak<class_type>(*this);
                targetElement.DragItemsStarting([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->CardContentListView_DragItemsStarting(p0, p1);
                    }
                });
                targetElement.DragItemsCompleted([weakThis](::winrt::Windows::UI::Xaml::Controls::ListViewBase const& p0, ::winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->CardContentListView_DragItemsCompleted(p0, p1);
                    }
                });
                targetElement.DragOver([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::DragEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->CardContentListView_DragOver(p0, p1);
                    }
                });
                targetElement.Drop([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::DragEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->CardContentListView_Drop(p0, p1);
                    }
                });
            }
            break;
        case 11:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem>();
                auto weakThis = ::winrt::make_weak<class_type>(*this);
                targetElement.Click([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::RoutedEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->MenuFlyoutItem_Click(p0, p1);
                    }
                });
            }
            break;
        case 16:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::Button>();
                this->cardContentNum(targetElement);
                auto weakThis = ::winrt::make_weak<class_type>(*this);
                targetElement.Click([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::RoutedEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->CardContentNum_Click(p0, p1);
                    }
                });
            }
            break;
        case 17:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::TextBlock>();
                this->cardTitle(targetElement);
            }
            break;
        case 18:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::Image>();
                this->deleteImage(targetElement);
                auto weakThis = ::winrt::make_weak<class_type>(*this);
                targetElement.Tapped([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->DeleteImage_Tapped(p0, p1);
                    }
                });
            }
            break;
        case 19:
            {
                auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::Image>();
                this->addImage(targetElement);
                auto weakThis = ::winrt::make_weak<class_type>(*this);
                targetElement.Tapped([weakThis](::winrt::Windows::Foundation::IInspectable const& p0, ::winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& p1){
                    if (auto t = weakThis.get())
                    {
                        ::winrt::get_self<D>(t)->AddImage_Tapped_1(p0, p1);
                    }
                });
            }
            break;
        }
        _contentLoaded = true;
    }

    template <typename D, typename ... I>
    void SingleCardUserControlT<D, I...>::DisconnectUnloadedObject(int32_t)
    {
        throw ::winrt::hresult_invalid_argument { L"No unloadable objects to disconnect." };
    }

    template <typename D, typename ... I>
    void SingleCardUserControlT<D, I...>::UnloadObject(DependencyObject const&)
    {
        throw ::winrt::hresult_invalid_argument { L"No unloadable objects." };
    }

    template <typename D, typename... I>
    IComponentConnector SingleCardUserControlT<D, I...>::GetBindingConnector(int32_t connectionId, IInspectable const& target)
    {
        ::winrt::com_ptr<::winrt::MyCardDemo2::implementation::XamlBindings> bindings;
        switch (connectionId)
        {
            case 1: // SingleCardUserControl.xaml line 1
                {
                    auto element1 = target.as<::winrt::Windows::UI::Xaml::Controls::UserControl>();
                    auto objBindings = std::make_unique<SingleCardUserControl_obj1_Bindings>();
                    objBindings->SetDataRoot(*this);
                    bindings = ::winrt::make_self<::winrt::MyCardDemo2::implementation::XamlBindings>(std::move(objBindings));
                    Bindings = bindings;
                    element1.Loading({&*bindings, &::winrt::MyCardDemo2::implementation::XamlBindings::Loading});
                }
                break;
            case 10: // SingleCardUserControl.xaml line 92
                {
                    auto element10 = target.as<::winrt::Windows::UI::Xaml::Controls::Grid>();
                    auto objBindings = std::make_unique<SingleCardUserControl_obj10_Bindings>();
                    objBindings->SetDataRoot(element10.DataContext());
                    objBindings->SetConverterLookupRoot(*this);
                    bindings = ::winrt::make_self<::winrt::MyCardDemo2::implementation::XamlBindings>(std::move(objBindings));
                    bindings->SubscribeForDataContextChanged(element10);
                    DataTemplate::SetExtensionInstance(element10, bindings.as<::winrt::Windows::UI::Xaml::IDataTemplateExtension>());
                    XamlBindingHelper::SetDataTemplateComponent(element10, bindings.as<::winrt::Windows::UI::Xaml::Markup::IDataTemplateComponent>());
                }
                break;
        }
        return bindings ? bindings.as<::winrt::Windows::UI::Xaml::Markup::IComponentConnector>() : nullptr;
    }

    template <typename D, typename ... I>
    struct SingleCardUserControlT<D, I...>::SingleCardUserControl_obj10_Bindings
        : public ::winrt::MyCardDemo2::implementation::ReferenceTypeXamlBindings<::winrt::MyCardDemo2::CardModel, ::winrt::MyCardDemo2::implementation::XamlBindingTrackingBase>
{
        SingleCardUserControl_obj10_Bindings()
        {
        }

        void Connect(int32_t connectionId, IInspectable const& target) override
        {
            switch(connectionId)
            {
            case 10: // SingleCardUserControl.xaml line 92
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::Grid>();
                    obj10 = targetElement;
                }
                break;
            case 12: // SingleCardUserControl.xaml line 104
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Shapes::Ellipse>();
                    obj12 = targetElement;
                }
                break;
            case 13: // SingleCardUserControl.xaml line 106
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::TextBlock>();
                    obj13 = targetElement;
                }
                break;
            case 14: // SingleCardUserControl.xaml line 107
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::TextBlock>();
                    obj14 = targetElement;
                }
                break;
            case 15: // SingleCardUserControl.xaml line 108
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::TextBlock>();
                    obj15 = targetElement;
                }
                break;
            }
        }

        void DisconnectUnloadedObject(int connectionId) override
        {
            throw ::winrt::hresult_invalid_argument { L"No unloadable elements to disconnect." };
        }

        void Recycle() override
        {
        }

        void ProcessBindings(IInspectable const& item, int itemIndex, int phase, int32_t& nextPhase)
        {
            nextPhase = -1;
            switch (phase)
            {
            case 0:
                {
                    nextPhase = -1;
                    SetDataRoot(item);
                    if (_dataContextChangedToken.value != 0)
                    {
                        this->obj10.get().DataContextChanged(_dataContextChangedToken);
                        _dataContextChangedToken.value = 0;
                    }
                    _isInitialized = true;
                 }
                 break;
            }
            Update_(::winrt::unbox_value<::winrt::MyCardDemo2::CardModel>(item) , 1 << phase);
        }

        void SetConverterLookupRoot(::winrt::Windows::UI::Xaml::FrameworkElement const& rootElement)
        {
            converterLookupRoot = rootElement;
        }

        ::winrt::Windows::UI::Xaml::Data::IValueConverter LookupConverter(::winrt::hstring const& key)
        {
            if (!localResources)
            {
                localResources = converterLookupRoot.get().Resources();
                converterLookupRoot = nullptr;
            }
            auto boxedKey = ::winrt::box_value(key);
            return (localResources.HasKey(boxedKey) ? localResources.Lookup(boxedKey) : ::winrt::Windows::UI::Xaml::Application::Current().Resources().Lookup(boxedKey))
                .as<::winrt::Windows::UI::Xaml::Data::IValueConverter>();
        }

    private:
        // Fields for each control that has bindings.
        ::winrt::weak_ref<::winrt::Windows::UI::Xaml::Controls::Grid> obj10;
        ::winrt::Windows::UI::Xaml::Shapes::Ellipse obj12 { nullptr };
        ::winrt::Windows::UI::Xaml::Controls::TextBlock obj13 { nullptr };
        ::winrt::Windows::UI::Xaml::Controls::TextBlock obj14 { nullptr };
        ::winrt::Windows::UI::Xaml::Controls::TextBlock obj15 { nullptr };
        ::winrt::Windows::UI::Xaml::ResourceDictionary localResources { nullptr };
        ::winrt::weak_ref<::winrt::Windows::UI::Xaml::FrameworkElement> converterLookupRoot;

        // Update methods for each path node used in binding steps.

        void Update_(::winrt::MyCardDemo2::CardModel obj, int32_t phase)
        {
            if (obj)
            {
                if ((phase & (NOT_PHASED | (1 << 0))) != 0)
                {
                    Update_StatusColor(obj.StatusColor(), phase);
                    Update_ContentTitle(obj.ContentTitle(), phase);
                    Update_ContentDetail(obj.ContentDetail(), phase);
                    Update_AlarmTime(obj.AlarmTime(), phase);
                }
            }
        }

        void Update_StatusColor(::winrt::hstring obj, int32_t phase)
        {
            if((phase & ((1 << 0) | NOT_PHASED )) != 0)
            {
                // SingleCardUserControl.xaml line 104
                Set_Windows_UI_Xaml_Shapes_Shape_Fill(obj12, ::winrt::unbox_value<::winrt::Windows::UI::Xaml::Media::Brush>(LookupConverter(L"FormatConverter").Convert(::winrt::box_value(obj), ::winrt::xaml_typename<::winrt::Windows::UI::Xaml::Media::Brush>(), ::winrt::box_value(::winrt::hstring(L"color")), ::winrt::hstring{})), std::nullopt);
            }
        }

        void Update_ContentTitle(::winrt::hstring obj, int32_t phase)
        {
            if((phase & ((1 << 0) | NOT_PHASED )) != 0)
            {
                // SingleCardUserControl.xaml line 106
                Set_Windows_UI_Xaml_Controls_TextBlock_Text(obj13, obj);
            }
        }

        void Update_ContentDetail(::winrt::hstring obj, int32_t phase)
        {
            if((phase & ((1 << 0) | NOT_PHASED )) != 0)
            {
                // SingleCardUserControl.xaml line 107
                Set_Windows_UI_Xaml_Controls_TextBlock_Text(obj14, obj);
            }
        }

        void Update_AlarmTime(::winrt::hstring obj, int32_t phase)
        {
            if((phase & ((1 << 0) | NOT_PHASED )) != 0)
            {
                // SingleCardUserControl.xaml line 108
                Set_Windows_UI_Xaml_Controls_TextBlock_Text(obj15, ::winrt::unbox_value<::winrt::hstring>(LookupConverter(L"FormatConverter").Convert(::winrt::box_value(obj), ::winrt::xaml_typename<::winrt::hstring>(), ::winrt::box_value(::winrt::hstring(L"time")), ::winrt::hstring{})));
            }
        }

        static void Set_Windows_UI_Xaml_Shapes_Shape_Fill(::winrt::Windows::UI::Xaml::Shapes::Shape const& obj, ::winrt::Windows::UI::Xaml::Media::Brush value, std::optional<::winrt::hstring> const& targetNullValue)
        {
            if (!value && targetNullValue)
            {
                value = ::winrt::Windows::UI::Xaml::Markup::XamlBindingHelper::ConvertValue(::winrt::xaml_typename<::winrt::Windows::UI::Xaml::Media::Brush>(), ::winrt::box_value(::winrt::hstring(targetNullValue.value()))).as<::winrt::Windows::UI::Xaml::Media::Brush>();
            }
            obj.Fill(value);
        }

        static void Set_Windows_UI_Xaml_Controls_TextBlock_Text(::winrt::Windows::UI::Xaml::Controls::TextBlock const& obj, ::winrt::hstring const& value)
        {
            obj.Text(value);
        }
    }; 

    struct SingleCardUserControl_obj1_BindingsTracking : public XamlBindingTrackingBase
    {
        SingleCardUserControl_obj1_BindingsTracking()
        {}

        // Event handlers

        void VectorChanged_Object(
            ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> const& sender,
            ::winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const& e)
        {
            VectorChanged(sender, e);
        }

        // Listener update functions

        void UpdateVectorChangedListener_Object(
            ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> const& obj,
            ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> & cache,
            ::winrt::event_token & token)
        {
            if (cache && cache != obj)
            {
                cache.VectorChanged(token);
                cache = nullptr;
            }
            if (!cache && obj)
            {
                cache = obj;
                token = obj.VectorChanged({this, &SingleCardUserControl_obj1_BindingsTracking::VectorChanged_Object});
            }
        }
    };

    template <typename D, typename ... I>
    struct SingleCardUserControlT<D, I...>::SingleCardUserControl_obj1_Bindings
        : public ::winrt::MyCardDemo2::implementation::ReferenceTypeXamlBindings<::winrt::MyCardDemo2::SingleCardUserControl, SingleCardUserControl_obj1_BindingsTracking>
        , public ::winrt::MyCardDemo2::implementation::IXamlBindingTracking
{
        SingleCardUserControl_obj1_Bindings()
        {
            InitializeTracking(this);
        }

        ~SingleCardUserControl_obj1_Bindings()
        {
            ReleaseAllListeners();
        }

        void Connect(int32_t connectionId, IInspectable const& target) override
        {
            switch(connectionId)
            {
            case 8: // SingleCardUserControl.xaml line 77
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::ListView>();
                    obj8 = targetElement;
                }
                break;
            case 16: // SingleCardUserControl.xaml line 70
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::Button>();
                    obj16 = targetElement;
                }
                break;
            case 17: // SingleCardUserControl.xaml line 71
                {
                    auto targetElement = target.as<::winrt::Windows::UI::Xaml::Controls::TextBlock>();
                    obj17 = targetElement;
                }
                break;
            }
        }

        void DisconnectUnloadedObject(int connectionId) override
        {
            throw ::winrt::hresult_invalid_argument { L"No unloadable elements to disconnect." };
        }


    private:
        // Fields for each control that has bindings.
        ::winrt::Windows::UI::Xaml::Controls::ListView obj8 { nullptr };
        ::winrt::Windows::UI::Xaml::Controls::Button obj16 { nullptr };
        ::winrt::Windows::UI::Xaml::Controls::TextBlock obj17 { nullptr };

        // Fields for binding tracking.
        ::winrt::Windows::UI::Xaml::Data::INotifyPropertyChanged cachePC_CardTitleVM{nullptr};
        ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> cacheVC_CardTitleVM_Contents{nullptr};
        ::winrt::event_token tokenPC_CardTitleVM {};
        ::winrt::event_token tokenVC_CardTitleVM_Contents {};

        // Update methods for each path node used in binding steps.

        void Update_(::winrt::MyCardDemo2::SingleCardUserControl obj, int32_t phase)
        {
            if (obj)
            {
                if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
                {
                    Update_CardTitleVM(obj.CardTitleVM(), phase);
                }
            }
        }

        void Update_CardTitleVM(::winrt::MyCardDemo2::CardViewModel obj, int32_t phase)
        {
            _bindingsTracking->UpdatePropertyChangedListener(obj, cachePC_CardTitleVM, tokenPC_CardTitleVM);
            if (obj)
            {
                if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
                {
                    Update_CardTitleVM_Contents(obj.Contents(), phase);
                    Update_CardTitleVM_HeaderTitle(obj.HeaderTitle(), phase);
                }
            }
        }

        void Update_CardTitleVM_Contents(::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> obj, int32_t phase)
        {
            _bindingsTracking->UpdateVectorChangedListener_Object(obj, cacheVC_CardTitleVM_Contents, tokenVC_CardTitleVM_Contents);
            if (obj)
            {
                if ((phase & (NOT_PHASED | DATA_CHANGED | (1 << 0))) != 0)
                {
                    Update_CardTitleVM_Contents_Size(obj.Size(), phase);
                }
            }
            if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
            {
                // SingleCardUserControl.xaml line 77
                Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource(obj8, obj, std::nullopt);
            }
        }

        void Update_CardTitleVM_Contents_Size(uint32_t obj, int32_t phase)
        {
            if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
            {
                // SingleCardUserControl.xaml line 70
                Set_Windows_UI_Xaml_Controls_ContentControl_Content(obj16, ::winrt::box_value(obj), std::nullopt);
            }
        }

        void Update_CardTitleVM_HeaderTitle(::winrt::hstring obj, int32_t phase)
        {
            if((phase & ((1 << 0) | NOT_PHASED | DATA_CHANGED)) != 0)
            {
                // SingleCardUserControl.xaml line 71
                Set_Windows_UI_Xaml_Controls_TextBlock_Text(obj17, obj);
            }
        }

        virtual void ReleaseAllListeners() override
        {
            _bindingsTracking->UpdatePropertyChangedListener(nullptr, cachePC_CardTitleVM, tokenPC_CardTitleVM);
            _bindingsTracking->UpdateVectorChangedListener_Object(nullptr, cacheVC_CardTitleVM_Contents, tokenVC_CardTitleVM_Contents);
        }

        virtual void PropertyChanged(IInspectable const& sender, ::winrt::Windows::UI::Xaml::Data::PropertyChangedEventArgs const& e) override
        {
            if (cachePC_CardTitleVM && cachePC_CardTitleVM == sender)
            {
                auto propName = e.PropertyName();
                auto obj = sender.as<::winrt::MyCardDemo2::CardViewModel>();
                if (propName.empty())
                {
                    if (obj)
                    {
                        Update_CardTitleVM_Contents(obj.Contents(), DATA_CHANGED);
                        Update_CardTitleVM_HeaderTitle(obj.HeaderTitle(), DATA_CHANGED);
                    }
                }
                else if (propName == L"Contents")
                {
                    if (obj)
                    {
                        Update_CardTitleVM_Contents(obj.Contents(), DATA_CHANGED);
                    }
                }
                else if (propName == L"HeaderTitle")
                {
                    if (obj)
                    {
                        Update_CardTitleVM_HeaderTitle(obj.HeaderTitle(), DATA_CHANGED);
                    }
                }
            }
        }

        void CollectionChanged(IInspectable const& sender, ::winrt::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const& e) override
        {
        }

        void VectorChanged(IInspectable const& sender, ::winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const& e) override
        {
            if (cacheVC_CardTitleVM_Contents && cacheVC_CardTitleVM_Contents == sender)
            {
                ::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable> obj = sender.as<::winrt::Windows::Foundation::Collections::IObservableVector<::winrt::Windows::Foundation::IInspectable>>();
                if (obj)
                {
                    Update_CardTitleVM_Contents_Size(obj.Size(), DATA_CHANGED);
                }
            }
        }

        void MapChanged(IInspectable const& sender, ::winrt::Windows::Foundation::Collections::IMapChangedEventArgs<::winrt::hstring> const& e) override
        {
        }

        void DependencyPropertyChanged(DependencyObject const& sender, DependencyProperty const& prop) override
        {
            if (sender)
            {
            }
        }


        static void Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource(::winrt::Windows::UI::Xaml::Controls::ItemsControl const& obj, ::winrt::Windows::Foundation::IInspectable value, std::optional<::winrt::hstring> const& targetNullValue)
        {
            if (!value && targetNullValue)
            {
                value = ::winrt::Windows::UI::Xaml::Markup::XamlBindingHelper::ConvertValue(::winrt::xaml_typename<::winrt::Windows::Foundation::IInspectable>(), ::winrt::box_value(::winrt::hstring(targetNullValue.value()))).as<::winrt::Windows::Foundation::IInspectable>();
            }
            obj.ItemsSource(value);
        }

        static void Set_Windows_UI_Xaml_Controls_ContentControl_Content(::winrt::Windows::UI::Xaml::Controls::ContentControl const& obj, ::winrt::Windows::Foundation::IInspectable value, std::optional<::winrt::hstring> const& targetNullValue)
        {
            if (!value && targetNullValue)
            {
                value = ::winrt::Windows::UI::Xaml::Markup::XamlBindingHelper::ConvertValue(::winrt::xaml_typename<::winrt::Windows::Foundation::IInspectable>(), ::winrt::box_value(::winrt::hstring(targetNullValue.value()))).as<::winrt::Windows::Foundation::IInspectable>();
            }
            obj.Content(value);
        }

        static void Set_Windows_UI_Xaml_Controls_TextBlock_Text(::winrt::Windows::UI::Xaml::Controls::TextBlock const& obj, ::winrt::hstring const& value)
        {
            obj.Text(value);
        }
    }; 

    template struct SingleCardUserControlT<struct SingleCardUserControl>;
}


#pragma warning(pop)

