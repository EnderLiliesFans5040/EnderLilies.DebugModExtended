#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Passive.generated.h"

class AController;
class APawn;

UCLASS(Abstract, Blueprintable)
class UPassive : public UObject {
    GENERATED_BODY()
public:
    UPassive();
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnequipPassive(AController* Controller);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemoveFromPawn(APawn* Pawn, AController* Controller);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEquipPassive(AController* Controller);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplyToPawn(APawn* Pawn, AController* Controller);
    
};

