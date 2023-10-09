#include "KnockbackRuntimeData.h"

FKnockbackRuntimeData::FKnockbackRuntimeData() {
    this->KnockbackID = 0;
    this->KnockbackType = EKnockbackTypes::Normal;
    this->ExecutionTime = 0.00f;
    this->bInRecovery = false;
    this->EndType = EKnockbackEndType::Default;
}

