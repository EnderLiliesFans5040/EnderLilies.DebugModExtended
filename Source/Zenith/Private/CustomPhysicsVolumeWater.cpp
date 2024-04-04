#include "CustomPhysicsVolumeWater.h"
#include "ECustomMovementMode.h"
#include "FluidMeshComponent.h"

ACustomPhysicsVolumeWater::ACustomPhysicsVolumeWater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementMode = MOVE_Custom;
    this->CustomMovementMode = ECustomMovementMode::Swimming;
    this->FluidMeshComponent = CreateDefaultSubobject<UFluidMeshComponent>(TEXT("FluidMeshComponent"));
    this->FluidFriction = 3.00f;
    this->FluidMeshComponent->SetupAttachment(RootComponent);
}

bool ACustomPhysicsVolumeWater::IsSimulatingWaterLine() const {
    return false;
}

float ACustomPhysicsVolumeWater::GetHeightAtLocation(const FVector& Location) const {
    return 0.0f;
}

float ACustomPhysicsVolumeWater::GetFluidFriction() const {
    return 0.0f;
}


