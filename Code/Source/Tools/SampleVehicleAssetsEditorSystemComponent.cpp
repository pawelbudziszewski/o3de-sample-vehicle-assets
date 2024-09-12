
#include <AzCore/Serialization/SerializeContext.h>
#include "SampleVehicleAssetsEditorSystemComponent.h"

#include <SampleVehicleAssets/SampleVehicleAssetsTypeIds.h>

namespace SampleVehicleAssets
{
    AZ_COMPONENT_IMPL(SampleVehicleAssetsEditorSystemComponent, "SampleVehicleAssetsEditorSystemComponent",
        SampleVehicleAssetsEditorSystemComponentTypeId, BaseSystemComponent);

    void SampleVehicleAssetsEditorSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<SampleVehicleAssetsEditorSystemComponent, SampleVehicleAssetsSystemComponent>()
                ->Version(0);
        }
    }

    SampleVehicleAssetsEditorSystemComponent::SampleVehicleAssetsEditorSystemComponent() = default;

    SampleVehicleAssetsEditorSystemComponent::~SampleVehicleAssetsEditorSystemComponent() = default;

    void SampleVehicleAssetsEditorSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        BaseSystemComponent::GetProvidedServices(provided);
        provided.push_back(AZ_CRC_CE("SampleVehicleAssetsEditorService"));
    }

    void SampleVehicleAssetsEditorSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        BaseSystemComponent::GetIncompatibleServices(incompatible);
        incompatible.push_back(AZ_CRC_CE("SampleVehicleAssetsEditorService"));
    }

    void SampleVehicleAssetsEditorSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        BaseSystemComponent::GetRequiredServices(required);
    }

    void SampleVehicleAssetsEditorSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        BaseSystemComponent::GetDependentServices(dependent);
    }

    void SampleVehicleAssetsEditorSystemComponent::Activate()
    {
        SampleVehicleAssetsSystemComponent::Activate();
        AzToolsFramework::EditorEvents::Bus::Handler::BusConnect();
    }

    void SampleVehicleAssetsEditorSystemComponent::Deactivate()
    {
        AzToolsFramework::EditorEvents::Bus::Handler::BusDisconnect();
        SampleVehicleAssetsSystemComponent::Deactivate();
    }

} // namespace SampleVehicleAssets
