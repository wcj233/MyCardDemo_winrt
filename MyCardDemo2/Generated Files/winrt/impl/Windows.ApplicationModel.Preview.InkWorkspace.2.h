// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_ApplicationModel_Preview_InkWorkspace_2_H
#define WINRT_Windows_ApplicationModel_Preview_InkWorkspace_2_H
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.1.h"
namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace
{
    struct WINRT_EBO InkWorkspaceHostedAppManager : Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager
    {
        InkWorkspaceHostedAppManager(std::nullptr_t) noexcept {}
        InkWorkspaceHostedAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager(ptr, take_ownership_from_abi) {}
        static Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager GetForCurrentApp();
    };
}
#endif
