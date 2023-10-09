#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_SetStates.generated.h"

class UState;

UCLASS(BlueprintType)
class ZENITH_API UBTDecorator_SetStates : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> States;
    
    UBTDecorator_SetStates();
};

