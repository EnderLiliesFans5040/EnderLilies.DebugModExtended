#include "CustomPhysicsVolumeWater.h"
#include "FluidMeshComponent.h"

bool ACustomPhysicsVolumeWater::IsSimulatingWaterLine() const {
    return false;
}

float ACustomPhysicsVolumeWater::GetHeightAtLocation(const FVector& Location) const {
    return 0.0f;
}

float ACustomPhysicsVolumeWater::GetFluidFriction() const {
    return 0.0f;
}

ACustomPhysicsVolumeWater::ACustomPhysicsVolumeWater() {
    this->FluidMeshComponent = CreateDefaultSubobject<UFluidMeshComponent>(TEXT("FluidMeshComponent"));
    this->FluidFriction = 3.00f;
}

