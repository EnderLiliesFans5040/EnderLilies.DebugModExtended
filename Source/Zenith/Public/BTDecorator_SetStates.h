#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Templates/SubclassOf.h"
#include "BTDecorator_SetStates.generated.h"

class UState;

UCLASS(Blueprintable)
class ZENITH_API UBTDecorator_SetStates : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> States;
    
    UBTDecorator_SetStates();

};

