#include "Command.h"

UCommand::UCommand() {
    this->CommandID = 0;
    this->CurrentResult = ECommandResult::NONE;
    this->TTL = 0.00f;
    this->bRemoveIfNotStartable = true;
    this->CommandInputType = ECommandInputTypes::NONE;
    this->CommandAction = NULL;
    this->GroupID = 0;
    this->FrameID = 0;
}


