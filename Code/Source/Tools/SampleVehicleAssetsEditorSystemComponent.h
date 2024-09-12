
#pragma once

#include <AzToolsFramework/API/ToolsApplicationAPI.h>

#include <Clients/SampleVehicleAssetsSystemComponent.h>

namespace SampleVehicleAssets
{
    /// System component for SampleVehicleAssets editor
    class SampleVehicleAssetsEditorSystemComponent
        : public SampleVehicleAssetsSystemComponent
        , protected AzToolsFramework::EditorEvents::Bus::Handler
    {
        using BaseSystemComponent = SampleVehicleAssetsSystemComponent;
    public:
        AZ_COMPONENT_DECL(SampleVehicleAssetsEditorSystemComponent);

        static void Reflect(AZ::ReflectContext* context);

        SampleVehicleAssetsEditorSystemComponent();
        ~SampleVehicleAssetsEditorSystemComponent();

    private:
        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        // AZ::Component
        void Activate() override;
        void Deactivate() override;
    };
} // namespace SampleVehicleAssets
