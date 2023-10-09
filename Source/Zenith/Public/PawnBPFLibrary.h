#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFaction.h"
#include "PawnBPFLibrary.generated.h"

class APawn;
class AZenithPlayerController;
class AAIController;

UCLASS(BlueprintType)
class UPawnBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPawnBPFLibrary();
    UFUNCTION(BlueprintCallable)
    static void SpawnCustomController(APawn* Pawn, TSubclassOf<AAIController> AIControllerClass);
    
    UFUNCTION(BlueprintCallable)
    static void ResetZVelocity(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVelocity(APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static AZenithPlayerController* GetZenithPlayerController(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void AttributeFaction(APawn* Pawn, EFaction Faction);
    
};

