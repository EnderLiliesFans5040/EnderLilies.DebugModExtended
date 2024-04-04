#include "AE_StunDamageAbsolute.h"
#include "EAbilityEffectQueue.h"

UAE_StunDamageAbsolute::UAE_StunDamageAbsolute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityEffectQueue = EAbilityEffectQueue::PRE_DEFAULT;
    this->bIgnoreIfTargetGuard = true;
    this->bIgnoreIfTargetJustGuard = true;
    this->bIgnoreIfTargetParry = true;
    this->Damage = 0;
}


