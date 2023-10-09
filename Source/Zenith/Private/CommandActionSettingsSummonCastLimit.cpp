#include "CommandActionSettingsSummonCastLimit.h"

FCommandActionSettingsSummonCastLimit::FCommandActionSettingsSummonCastLimit() {
    this->CastLimitType = ECommandSummonLimitType::None;
    this->MaxCastCount = 0;
    this->MaxTime = 0.00f;
    this->MaxAttackCount = 0;
}

