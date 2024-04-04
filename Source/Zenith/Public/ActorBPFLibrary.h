#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "ActorBPFLibrary.generated.h"

class AActor;
class APlayerController;
class UActorComponent;
class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UActorBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetActorLocationToGround(AActor* Actor, float OffsetFromGround);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayer(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* GetHomingTargetOfActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetDefaultActorFromClass(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorTopLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorLocationForFeetLocation(const AActor* Actor, FVector FeetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorHalfHeight(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorFeetLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPressedKeys(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void ClampActorToBoxYZ(AActor* Actor, UBoxComponent* Box, bool bSweep);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponent(AActor* Actor, TSubclassOf<UActorComponent> ComponentType);
    
};

