#include "FluidVolumeMeshComponent.h"

UFluidVolumeMeshComponent::UFluidVolumeMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Subdivisions = 1;
    this->Vertices.AddDefaulted(6);
    this->Normals.AddDefaulted(6);
    this->UVs.AddDefaulted(6);
}


