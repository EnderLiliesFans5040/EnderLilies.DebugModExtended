#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_UnsetStates.generated.h"

class UState;

UCLASS(BlueprintType)
class ZENITH_API UBTDecorator_UnsetStates : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> States;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckIfPresentBeforeUnset;
    
    UBTDecorator_UnsetStates();
};

