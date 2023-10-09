#include "ActorBindingInfos.h"

FActorBindingInfos::FActorBindingInfos() {
    this->bDestroyOnEventFinish = false;
    this->TransformType = EActorBindingTransformType::Absolute;
}

