#include "SpineAnimNotifyState_TimedParticleEffect.h"

USpineAnimNotifyState_TimedParticleEffect::USpineAnimNotifyState_TimedParticleEffect() {
    this->PSTemplate = NULL;
    this->Bone = ESpineBone::Root;
    this->bAttachToBone = false;
    this->bDetachOnDeactivate = false;
    this->bFollowBoneRotation = false;
    this->bDestroyAtEnd = false;
    this->CurrentParticleComponent = NULL;
}



