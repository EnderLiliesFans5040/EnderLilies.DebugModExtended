#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/EngineTypes.h"
#include "FindClosestEnemy.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UFindClosestEnemy : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlackboardKeySelector KeyResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckFront;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckLineOfSight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> VisibilityCollisionChannel;
    
    UFindClosestEnemy();
};

