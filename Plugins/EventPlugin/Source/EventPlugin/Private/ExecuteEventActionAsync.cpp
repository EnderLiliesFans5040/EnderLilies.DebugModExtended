#include "ExecuteEventActionAsync.h"

UExecuteEventActionAsync::UExecuteEventActionAsync() {
    this->EventAction = NULL;
    this->EventPlayer = NULL;
    this->InteractingPlayer = NULL;
    this->Subject = NULL;
    this->Target = NULL;
    this->EventBlackBoard = NULL;
}

void UExecuteEventActionAsync::Update() {
}

void UExecuteEventActionAsync::Finish() {
}

UExecuteEventActionAsync* UExecuteEventActionAsync::ExecuteEventActionAsync(UObject* WorldContextObject, UEventPlayer* InEventPlayer, const FEventNode& EventNode, UEventAction* EventActionToExecute) {
    return NULL;
}


