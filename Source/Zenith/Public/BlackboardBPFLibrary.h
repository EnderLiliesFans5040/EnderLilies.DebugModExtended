#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BlackboardBPFLibrary.generated.h"

class UBTNode;

UCLASS(BlueprintType)
class UBlackboardBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlackboardBPFLibrary();
    UFUNCTION(BlueprintPure)
    static FVector GetLocationFromBlackboardKey(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
};

