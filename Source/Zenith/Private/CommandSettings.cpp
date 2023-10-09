#include "CommandSettings.h"

FCommandSettings::FCommandSettings() {
    this->RuntimeID = 0;
    this->Priority = 0;
    this->CommandInputType = ECommandInputTypes::NONE;
    this->BufferTTL = 0.00f;
    this->bRemoveIfNotStartable = false;
    this->AlwaysFireWhileCommandPressed = false;
    this->FireOnDirectionChangeOnly = false;
    this->CommandActionType = NULL;
    this->GroupID = 0;
}

