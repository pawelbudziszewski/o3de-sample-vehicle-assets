
#include "SampleVehicleAssetsModuleInterface.h"
#include <AzCore/Memory/Memory.h>

#include <SampleVehicleAssets/SampleVehicleAssetsTypeIds.h>

#include <Clients/SampleVehicleAssetsSystemComponent.h>

namespace SampleVehicleAssets
{
    AZ_TYPE_INFO_WITH_NAME_IMPL(SampleVehicleAssetsModuleInterface,
        "SampleVehicleAssetsModuleInterface", SampleVehicleAssetsModuleInterfaceTypeId);
    AZ_RTTI_NO_TYPE_INFO_IMPL(SampleVehicleAssetsModuleInterface, AZ::Module);
    AZ_CLASS_ALLOCATOR_IMPL(SampleVehicleAssetsModuleInterface, AZ::SystemAllocator);

    SampleVehicleAssetsModuleInterface::SampleVehicleAssetsModuleInterface()
    {
        // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
        // Add ALL components descriptors associated with this gem to m_descriptors.
        // This will associate the AzTypeInfo information for the components with the the SerializeContext, BehaviorContext and EditContext.
        // This happens through the [MyComponent]::Reflect() function.
        m_descriptors.insert(m_descriptors.end(), {
            SampleVehicleAssetsSystemComponent::CreateDescriptor(),
            });
    }

    AZ::ComponentTypeList SampleVehicleAssetsModuleInterface::GetRequiredSystemComponents() const
    {
        return AZ::ComponentTypeList{
            azrtti_typeid<SampleVehicleAssetsSystemComponent>(),
        };
    }
} // namespace SampleVehicleAssets
