#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RefreshPawnFromController.generated.h"

UCLASS(BlueprintType)
class ZENITH_API URefreshPawnFromController : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlackboardKeySelector KeyController;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlackboardKeySelector KeyResult;
    
    URefreshPawnFromController();
};

