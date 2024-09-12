
#pragma once

namespace SampleVehicleAssets
{
    // System Component TypeIds
    inline constexpr const char* SampleVehicleAssetsSystemComponentTypeId = "{E1D82F4D-7C1F-43B6-B81E-1EBD3C99B6C8}";
    inline constexpr const char* SampleVehicleAssetsEditorSystemComponentTypeId = "{96A75AA2-2C70-4485-847B-6CD1868CB269}";

    // Module derived classes TypeIds
    inline constexpr const char* SampleVehicleAssetsModuleInterfaceTypeId = "{72DD638A-CDA4-493E-9266-4131F6E4B5F1}";
    inline constexpr const char* SampleVehicleAssetsModuleTypeId = "{48B542A4-5277-4119-9C03-11F2E8A5CC8C}";
    // The Editor Module by default is mutually exclusive with the Client Module
    // so they use the Same TypeId
    inline constexpr const char* SampleVehicleAssetsEditorModuleTypeId = SampleVehicleAssetsModuleTypeId;

    // Interface TypeIds
    inline constexpr const char* SampleVehicleAssetsRequestsTypeId = "{DE2325FC-FBBD-417F-BFCC-3B1DD4006301}";
} // namespace SampleVehicleAssets
