#include "AITask_CustomMoveTo.h"

class AAIController;
class AActor;
class UAITask_MoveTo;

UAITask_MoveTo* UAITask_CustomMoveTo::CustomAIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking) {
    return NULL;
}

