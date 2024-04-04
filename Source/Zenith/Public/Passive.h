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

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnequipPassive(AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveFromPawn(APawn* Pawn, AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipPassive(AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyToPawn(APawn* Pawn, AController* Controller);
    
};

