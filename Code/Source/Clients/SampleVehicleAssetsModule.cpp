
#include <SampleVehicleAssets/SampleVehicleAssetsTypeIds.h>
#include <SampleVehicleAssetsModuleInterface.h>
#include "SampleVehicleAssetsSystemComponent.h"

namespace SampleVehicleAssets
{
    class SampleVehicleAssetsModule
        : public SampleVehicleAssetsModuleInterface
    {
    public:
        AZ_RTTI(SampleVehicleAssetsModule, SampleVehicleAssetsModuleTypeId, SampleVehicleAssetsModuleInterface);
        AZ_CLASS_ALLOCATOR(SampleVehicleAssetsModule, AZ::SystemAllocator);
    };
}// namespace SampleVehicleAssets

AZ_DECLARE_MODULE_CLASS(Gem_SampleVehicleAssets, SampleVehicleAssets::SampleVehicleAssetsModule)
