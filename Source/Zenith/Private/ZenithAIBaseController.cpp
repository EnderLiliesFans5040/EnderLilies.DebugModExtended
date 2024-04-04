#include "ZenithAIBaseController.h"

AZenithAIBaseController::AZenithAIBaseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviourTree = NULL;
    this->BlackboardAsset = NULL;
}

void AZenithAIBaseController::StopAllLogic() {
}

void AZenithAIBaseController::ResumeLogic() {
}

void AZenithAIBaseController::RestartLogic() {
}

void AZenithAIBaseController::PauseLogic() {
}


