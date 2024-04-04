#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask_MoveTo.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "AITask_CustomMoveTo.generated.h"

class AAIController;
class AActor;

UCLASS(Blueprintable)
class ZENITH_API UAITask_CustomMoveTo : public UAITask_MoveTo {
    GENERATED_BODY()
public:
    //UAITask_CustomMoveTo();

    UFUNCTION(BlueprintCallable)
    static UAITask_MoveTo* CustomAIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
    
};

