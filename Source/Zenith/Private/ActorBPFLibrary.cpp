#include "ActorBPFLibrary.h"
#include "Templates/SubclassOf.h"

class APlayerController;
class AActor;
class UBoxComponent;
class USceneComponent;
class UActorComponent;

bool UActorBPFLibrary::SetActorLocationToGround(AActor* Actor, float OffsetFromGround) {
    return false;
}

bool UActorBPFLibrary::IsPlayer(AActor* Actor) {
    return false;
}

USceneComponent* UActorBPFLibrary::GetHomingTargetOfActor(const AActor* Actor) {
    return NULL;
}

AActor* UActorBPFLibrary::GetDefaultActorFromClass(UClass* Class) {
    return NULL;
}

FVector UActorBPFLibrary::GetActorTopLocation(const AActor* Actor) {
    return FVector{};
}

FVector UActorBPFLibrary::GetActorLocationForFeetLocation(const AActor* Actor, FVector FeetLocation) {
    return FVector{};
}

float UActorBPFLibrary::GetActorHalfHeight(const AActor* Actor) {
    return 0.0f;
}

FVector UActorBPFLibrary::GetActorFeetLocation(const AActor* Actor) {
    return FVector{};
}

void UActorBPFLibrary::FlushPressedKeys(APlayerController* PlayerController) {
}

void UActorBPFLibrary::ClampActorToBoxYZ(AActor* Actor, UBoxComponent* Box, bool bSweep) {
}

UActorComponent* UActorBPFLibrary::AddComponent(AActor* Actor, TSubclassOf<UActorComponent> ComponentType) {
    return NULL;
}

UActorBPFLibrary::UActorBPFLibrary() {
}

