#include "ZenithCompanionCharacter.h"
#include "SpineSkeletonRendererComponent.h"
#include "Components/SceneComponent.h"
#include "SpineSkeletonAnimationComponent.h"
#include "SpineAnimationComponent.h"

class AActor;
class UCommandSettingsData;

void AZenithCompanionCharacter::SetMoveTargetWithTime(AActor* Target, FVector Offset, float TimeToReachTarget, bool bShowSpineOnArrival, bool bSpineFacingRight) {
}

void AZenithCompanionCharacter::SetMoveTarget(AActor* Target, FVector Offset, bool bShowSpineOnArrival, bool bSpineFacingRight) {
}

void AZenithCompanionCharacter::SetMoveSpeed(float NewMoveSpeed) {
}

void AZenithCompanionCharacter::SetActive(bool bActive) {
}

void AZenithCompanionCharacter::ResetMoveSpeed() {
}













void AZenithCompanionCharacter::NotifySpineVisible() {
}

void AZenithCompanionCharacter::NotifySpineHidden() {
}

bool AZenithCompanionCharacter::IsActive() const {
    return false;
}

void AZenithCompanionCharacter::HideSpine() {
}

ECompanionState AZenithCompanionCharacter::GetCurrentState() const {
    return ECompanionState::NONE;
}

void AZenithCompanionCharacter::GetAssociatedSpiritData(ECommandInputTypes& CommandInputType, UCommandSettingsData*& CommandSettingsData, FItemSpiritData& ItemSpiritData) const {
}

AZenithCompanionCharacter::AZenithCompanionCharacter() {
    this->FXHolder = CreateDefaultSubobject<USceneComponent>(TEXT("FXHolder"));
    this->SkeletonComponent = CreateDefaultSubobject<USpineSkeletonRendererComponent>(TEXT("SpineSkeletonRenderer"));
    this->SkeletonAnimComponent = CreateDefaultSubobject<USpineSkeletonAnimationComponent>(TEXT("SpineSkeletonAnimation"));
    this->SpineAnimationComponent = CreateDefaultSubobject<USpineAnimationComponent>(TEXT("SpineAnimation"));
    this->DefaultMoveSpeed = 100.00f;
    this->RotationSpeed = 200.00f;
    this->RangeForSpeedBonus = 200.00f;
}

