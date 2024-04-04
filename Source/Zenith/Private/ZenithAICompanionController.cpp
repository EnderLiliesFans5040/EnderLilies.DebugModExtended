#include "ZenithAICompanionController.h"

AZenithAICompanionController::AZenithAICompanionController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForbidIdleStates.AddDefaulted(2);
}

void AZenithAICompanionController::SetLeaderController(AController* NewLeaderController) {
}

void AZenithAICompanionController::ResetStateAndLocation() {
}

void AZenithAICompanionController::OnLeaderPawnChange() {
}

APawn* AZenithAICompanionController::GetLeaderPawn() const {
    return NULL;
}


