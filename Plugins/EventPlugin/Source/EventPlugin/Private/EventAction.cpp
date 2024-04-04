#include "EventAction.h"

UEventAction::UEventAction() {
    this->bFireAndForget = false;
}

void UEventAction::TickAction(float DeltaTime, APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard) {
}

void UEventAction::StartAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard) {
}





EEventActionResult UEventAction::GetResult() const {
    return EEventActionResult::NONE;
}

FTransform UEventAction::GetOriginTransform() const {
    return FTransform{};
}

UEventPlayer* UEventAction::GetEventPlayer() const {
    return NULL;
}

void UEventAction::FinishAction(EEventActionResult Result) {
}

void UEventAction::EndAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard) {
}

void UEventAction::AbortAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard) {
}


