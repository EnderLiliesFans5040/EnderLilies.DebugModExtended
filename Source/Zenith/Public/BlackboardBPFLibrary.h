#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlackboardBPFLibrary.generated.h"

class UBTNode;

UCLASS(Blueprintable)
class UBlackboardBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlackboardBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLocationFromBlackboardKey(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    
};

