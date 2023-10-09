#include "FluidMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void UFluidMeshComponent::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFluidMeshComponent::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UFluidMeshComponent::IsActorInteractionEnabled() const {
    return false;
}

TArray<AActor*> UFluidMeshComponent::GetInteractingActors() const {
    return TArray<AActor*>();
}

float UFluidMeshComponent::GetHeightAtLocation(const FVector& Location) const {
    return 0.0f;
}

UFluidMeshComponent::UFluidMeshComponent() {
    this->bEnableActorInteraction = true;
    this->CellSize = 10.00f;
    this->ActorHeightRange = 50.00f;
    this->SizeY = 20;
    this->SizeZ = 0;
    this->Owner = NULL;
    this->ShapeComponent = NULL;
    this->Vertices.AddDefaulted(42);
    this->UVs.AddDefaulted(42);
}

