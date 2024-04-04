#include "GameLogicBPFLibrary.h"
#include "Templates/SubclassOf.h"

UGameLogicBPFLibrary::UGameLogicBPFLibrary() {
}

void UGameLogicBPFLibrary::StopAllForceFeedbacks(APlayerController* PlayerController) {
}

void UGameLogicBPFLibrary::LaunchForceFeedback(APlayerController* PlayerController, UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) {
}

void UGameLogicBPFLibrary::LaunchCameraShake(const UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
}

bool UGameLogicBPFLibrary::IsSameVerticalDirection(EDirectionInputTypes DirectionA, EDirectionInputTypes DirectionB, bool bConsiderNeutralAsSame) {
    return false;
}

bool UGameLogicBPFLibrary::IsSameHorizontalDirection(EDirectionInputTypes DirectionA, EDirectionInputTypes DirectionB, bool bConsiderNeutralAsSame) {
    return false;
}

bool UGameLogicBPFLibrary::IsPureVerticalDirection(EDirectionInputTypes Direction, bool bConsiderNeutralAsVertical) {
    return false;
}

bool UGameLogicBPFLibrary::IsPureHorizontalDirection(EDirectionInputTypes Direction, bool bConsiderNeutralAsHorizontal) {
    return false;
}

int32 UGameLogicBPFLibrary::GetSpecialAttackMPCost() {
    return 0;
}

FName UGameLogicBPFLibrary::GetRestPlayerPointStartTag() {
    return NAME_None;
}

AActor* UGameLogicBPFLibrary::GetClosestEnemyOfActor(AActor* Actor, float MinDistance, float Range, bool bNeedLineOfSight, TEnumAsByte<ECollisionChannel> VisibilityChannel, bool bFrontCheck) {
    return NULL;
}

FVector UGameLogicBPFLibrary::ComputeLaunchVelocityToDestination(const FVector& Origin, const FVector& DestinationLocation, float GravityFactor, float Duration) {
    return FVector{};
}

bool UGameLogicBPFLibrary::CanUseStrengthenOnAnySpirit(APlayerController* PlayerController) {
    return false;
}


