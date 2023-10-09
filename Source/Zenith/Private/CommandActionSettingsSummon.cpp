#include "CommandActionSettingsSummon.h"

FCommandActionSettingsSummon::FCommandActionSettingsSummon() {
    this->ResummonType = EResummonType::AlwaysSummon;
    this->SpiritLocationStyle = ESpiritLocationStyle::Default;
    this->SpiritEndType = ESpiritEndType::Manual;
    this->TimeUntilAutoEnd = 0.00f;
}

