#include "SpineAnimNotifyState.h"




float USpineAnimNotifyState::GetExecutionTime() const {
    return 0.0f;
}

float USpineAnimNotifyState::GetExecutionRatio() const {
    return 0.0f;
}

USpineAnimNotifyState::USpineAnimNotifyState() {
    this->ExecutionTime = 0.00f;
    this->Duration = 0.00f;
}

