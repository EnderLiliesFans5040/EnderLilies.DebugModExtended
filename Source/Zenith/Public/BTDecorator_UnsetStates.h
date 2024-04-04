#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Templates/SubclassOf.h"
#include "BTDecorator_UnsetStates.generated.h"

class UState;

UCLASS(Blueprintable)
class ZENITH_API UBTDecorator_UnsetStates : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfPresentBeforeUnset;
    
    UBTDecorator_UnsetStates();

};

