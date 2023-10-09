#include "SpineAnimationRuntimeData.h"

USpineAnimationRuntimeData::USpineAnimationRuntimeData() {
    this->TrackEntry = NULL;
    this->bStarted = false;
    this->bExecutedInterrupt = false;
    this->bExecutedComplete = false;
    this->bExecutedEnd = false;
}

