
#include <AzCore/Memory/Memory_fwd.h>
#include <AzCore/Module/Module.h>
#include <AzCore/RTTI/RTTIMacros.h>
#include <AzCore/RTTI/TypeInfoSimple.h>

namespace SampleVehicleAssets
{
    class SampleVehicleAssetsModuleInterface
        : public AZ::Module
    {
    public:
        AZ_TYPE_INFO_WITH_NAME_DECL(SampleVehicleAssetsModuleInterface)
        AZ_RTTI_NO_TYPE_INFO_DECL()
        AZ_CLASS_ALLOCATOR_DECL

        SampleVehicleAssetsModuleInterface();

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override;
    };
}// namespace SampleVehicleAssets
