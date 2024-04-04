#include "FluidSurfaceMeshComponent.h"

UFluidSurfaceMeshComponent::UFluidSurfaceMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Subdivisions = 1;
    this->SubdivisionsX = 1;
    this->SubdivisionsY = 1;
    this->Vertices.AddDefaulted(4);
    this->UVs.AddDefaulted(4);
}


