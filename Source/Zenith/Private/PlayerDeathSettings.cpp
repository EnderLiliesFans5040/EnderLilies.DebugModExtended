#include "PlayerDeathSettings.h"

FPlayerDeathSettings::FPlayerDeathSettings() {
    this->TimeDilation = 0.00f;
    this->TimeDilationDuration = 0.00f;
    this->TimeDilationBlendIn = 0.00f;
    this->TimeDilationBlendOut = 0.00f;
    this->TimeBeforeFinishDeathProcess = 0.00f;
    this->ParticleTemplate = NULL;
    this->SoundEvent = NULL;
    this->ForceFeedback = NULL;
}

