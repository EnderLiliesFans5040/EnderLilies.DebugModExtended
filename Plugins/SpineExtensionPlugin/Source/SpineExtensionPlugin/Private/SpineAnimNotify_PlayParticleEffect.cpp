#include "SpineAnimNotify_PlayParticleEffect.h"

USpineAnimNotify_PlayParticleEffect::USpineAnimNotify_PlayParticleEffect() {
    this->PSTemplate = NULL;
    this->Bone = ESpineBone::Root;
    this->bAttachToBone = false;
    this->bFollowBoneRotation = false;
    this->bRegisterAsRunningFX = false;
}



