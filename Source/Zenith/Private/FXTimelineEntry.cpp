#include "FXTimelineEntry.h"

FFXTimelineEntry::FFXTimelineEntry() {
    this->PSTemplate = NULL;
    this->Bone = ESpineBone::None;
    this->From = 0.00f;
    this->To = 0.00f;
    this->bAttach = false;
    this->bFollowBoneRotation = false;
    this->bFireAndForget = false;
    this->TranslucencyLayer = ETranslucencyLayer::Default;
    this->PoolMethod = EPSCPoolMethod::None;
    this->Instance = NULL;
}

