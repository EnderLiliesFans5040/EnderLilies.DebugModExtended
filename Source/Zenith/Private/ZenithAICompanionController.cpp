#include "ZenithAICompanionController.h"

class AController;
class APawn;

void AZenithAICompanionController::SetLeaderController(AController* NewLeaderController) {
}

void AZenithAICompanionController::ResetStateAndLocation() {
}

void AZenithAICompanionController::OnLeaderPawnChange() {
}

APawn* AZenithAICompanionController::GetLeaderPawn() const {
    return NULL;
}

AZenithAICompanionController::AZenithAICompanionController() {
    this->ForbidIdleStates.AddDefaulted(2);
}

