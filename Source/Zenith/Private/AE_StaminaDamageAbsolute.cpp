#include "AE_StaminaDamageAbsolute.h"
#include "EAbilityEffectQueue.h"

UAE_StaminaDamageAbsolute::UAE_StaminaDamageAbsolute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityEffectQueue = EAbilityEffectQueue::PRE_DEFAULT;
    this->bIgnoreIfTargetGuard = true;
    this->bIgnoreIfTargetJustGuard = true;
    this->bIgnoreIfTargetParry = true;
    this->DamageEffectType = EStaminaDamageEffectType::Absolute;
    this->Damage = 0;
    this->TargetPercentDamage = 0.00f;
}


