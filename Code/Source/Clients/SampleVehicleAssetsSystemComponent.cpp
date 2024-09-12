
#include "SampleVehicleAssetsSystemComponent.h"

#include <SampleVehicleAssets/SampleVehicleAssetsTypeIds.h>

#include <AzCore/Serialization/SerializeContext.h>

namespace SampleVehicleAssets
{
    AZ_COMPONENT_IMPL(SampleVehicleAssetsSystemComponent, "SampleVehicleAssetsSystemComponent",
        SampleVehicleAssetsSystemComponentTypeId);

    void SampleVehicleAssetsSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<SampleVehicleAssetsSystemComponent, AZ::Component>()
                ->Version(0)
                ;
        }
    }

    void SampleVehicleAssetsSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("SampleVehicleAssetsService"));
    }

    void SampleVehicleAssetsSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("SampleVehicleAssetsService"));
    }

    void SampleVehicleAssetsSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void SampleVehicleAssetsSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    SampleVehicleAssetsSystemComponent::SampleVehicleAssetsSystemComponent()
    {
        if (SampleVehicleAssetsInterface::Get() == nullptr)
        {
            SampleVehicleAssetsInterface::Register(this);
        }
    }

    SampleVehicleAssetsSystemComponent::~SampleVehicleAssetsSystemComponent()
    {
        if (SampleVehicleAssetsInterface::Get() == this)
        {
            SampleVehicleAssetsInterface::Unregister(this);
        }
    }

    void SampleVehicleAssetsSystemComponent::Init()
    {
    }

    void SampleVehicleAssetsSystemComponent::Activate()
    {
        SampleVehicleAssetsRequestBus::Handler::BusConnect();
        AZ::TickBus::Handler::BusConnect();
    }

    void SampleVehicleAssetsSystemComponent::Deactivate()
    {
        AZ::TickBus::Handler::BusDisconnect();
        SampleVehicleAssetsRequestBus::Handler::BusDisconnect();
    }

    void SampleVehicleAssetsSystemComponent::OnTick([[maybe_unused]] float deltaTime, [[maybe_unused]] AZ::ScriptTimePoint time)
    {
    }

} // namespace SampleVehicleAssets
