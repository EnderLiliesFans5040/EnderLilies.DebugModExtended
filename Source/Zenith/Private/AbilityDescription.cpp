#include "AbilityDescription.h"

FAbilityDescription::FAbilityDescription() {
    this->AbilityClass = NULL;
    this->SpawnBone = ESpineBone::None;
    this->bFollowSpawnBoneRotation = false;
    this->AttachBone = ESpineBone::None;
    this->bFollowAttachBoneRotation = false;
    this->bFireAndForget = false;
}

