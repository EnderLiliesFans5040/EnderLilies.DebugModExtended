#include "AbilityComponent.h"
#include "Templates/SubclassOf.h"

UAbilityComponent::UAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAbilityComponent::StopAllAbilities(EAbilityStopReason AbilityStopReason, bool bStopFireAndForgetAbilities) {
}

void UAbilityComponent::StopAbility(AAbility* Ability, EAbilityStopReason AbilityStopReason) {
}

void UAbilityComponent::OnGameMapSwitch() {
}

void UAbilityComponent::OnDisposeAbility(AAbility* Ability) {
}

AAbility* UAbilityComponent::LaunchAbilityFromDescription(const FAbilityDescription& AbilityDescription, const FTransform& Offset) {
    return NULL;
}

AAbility* UAbilityComponent::LaunchAbilityAbsolute(TSubclassOf<AAbility> AbilityClass, const FAbilityParams& AbilityParameters, FTransform AbilityTransform, bool bFireAndForget) {
    return NULL;
}

AAbility* UAbilityComponent::LaunchAbility(TSubclassOf<AAbility> AbilityClass, const FAbilityParams& AbilityParameters, FTransform Offset, ESpineBone SpawnBone, FName CustomSpawnBone, bool bFollowSpawnBoneRotation, ESpineBone AttachBone, FName CustomAttachBone, bool bFollowAttachBoneRotation, bool bFireAndForget) {
    return NULL;
}


