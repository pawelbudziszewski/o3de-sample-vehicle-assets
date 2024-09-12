
#include <SampleVehicleAssets/SampleVehicleAssetsTypeIds.h>
#include <SampleVehicleAssetsModuleInterface.h>
#include "SampleVehicleAssetsEditorSystemComponent.h"

namespace SampleVehicleAssets
{
    class SampleVehicleAssetsEditorModule
        : public SampleVehicleAssetsModuleInterface
    {
    public:
        AZ_RTTI(SampleVehicleAssetsEditorModule, SampleVehicleAssetsEditorModuleTypeId, SampleVehicleAssetsModuleInterface);
        AZ_CLASS_ALLOCATOR(SampleVehicleAssetsEditorModule, AZ::SystemAllocator);

        SampleVehicleAssetsEditorModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            // Add ALL components descriptors associated with this gem to m_descriptors.
            // This will associate the AzTypeInfo information for the components with the the SerializeContext, BehaviorContext and EditContext.
            // This happens through the [MyComponent]::Reflect() function.
            m_descriptors.insert(m_descriptors.end(), {
                SampleVehicleAssetsEditorSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         * Non-SystemComponents should not be added here
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList {
                azrtti_typeid<SampleVehicleAssetsEditorSystemComponent>(),
            };
        }
    };
}// namespace SampleVehicleAssets

AZ_DECLARE_MODULE_CLASS(Gem_SampleVehicleAssets, SampleVehicleAssets::SampleVehicleAssetsEditorModule)
