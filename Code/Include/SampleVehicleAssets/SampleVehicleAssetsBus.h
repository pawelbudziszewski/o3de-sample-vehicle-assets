
#pragma once

#include <SampleVehicleAssets/SampleVehicleAssetsTypeIds.h>

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace SampleVehicleAssets
{
    class SampleVehicleAssetsRequests
    {
    public:
        AZ_RTTI(SampleVehicleAssetsRequests, SampleVehicleAssetsRequestsTypeId);
        virtual ~SampleVehicleAssetsRequests() = default;
        // Put your public methods here
    };

    class SampleVehicleAssetsBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using SampleVehicleAssetsRequestBus = AZ::EBus<SampleVehicleAssetsRequests, SampleVehicleAssetsBusTraits>;
    using SampleVehicleAssetsInterface = AZ::Interface<SampleVehicleAssetsRequests>;

} // namespace SampleVehicleAssets
