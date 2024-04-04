#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFaction.h"
#include "Templates/SubclassOf.h"
#include "PawnBPFLibrary.generated.h"

class AAIController;
class APawn;
class AZenithPlayerController;

UCLASS(Blueprintable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AZenithPlayerController* GetZenithPlayerController(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void AttributeFaction(APawn* Pawn, EFaction Faction);
    
};

