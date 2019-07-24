// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190506.1

#ifndef WINRT_Windows_Perception_Spatial_Preview_2_H
#define WINRT_Windows_Perception_Spatial_Preview_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Perception.Spatial.Preview.1.h"
namespace winrt::Windows::Perception::Spatial::Preview
{
    struct WINRT_EBO SpatialGraphInteropFrameOfReferencePreview : Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview
    {
        SpatialGraphInteropFrameOfReferencePreview(std::nullptr_t) noexcept {}
        SpatialGraphInteropFrameOfReferencePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview(ptr, take_ownership_from_abi) {}
    };
    struct SpatialGraphInteropPreview
    {
        SpatialGraphInteropPreview() = delete;
        static Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId);
        static Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition);
        static Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation);
        static Windows::Perception::Spatial::SpatialLocator CreateLocatorForNode(winrt::guid const& nodeId);
        static Windows::Perception::Spatial::Preview::SpatialGraphInteropFrameOfReferencePreview TryCreateFrameOfReference(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem);
        static Windows::Perception::Spatial::Preview::SpatialGraphInteropFrameOfReferencePreview TryCreateFrameOfReference(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& relativePosition);
        static Windows::Perception::Spatial::Preview::SpatialGraphInteropFrameOfReferencePreview TryCreateFrameOfReference(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation);
    };
}
#endif
