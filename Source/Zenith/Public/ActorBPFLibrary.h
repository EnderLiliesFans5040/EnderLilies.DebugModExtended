#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorBPFLibrary.generated.h"

class APlayerController;
class AActor;
class UBoxComponent;
class USceneComponent;
class UActorComponent;

UCLASS(BlueprintType)
class UActorBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorBPFLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetActorLocationToGround(AActor* Actor, float OffsetFromGround);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayer(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static USceneComponent* GetHomingTargetOfActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetDefaultActorFromClass(UClass* Class);
    
    UFUNCTION(BlueprintPure)
    static FVector GetActorTopLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FVector GetActorLocationForFeetLocation(const AActor* Actor, FVector FeetLocation);
    
    UFUNCTION(BlueprintPure)
    static float GetActorHalfHeight(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FVector GetActorFeetLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPressedKeys(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void ClampActorToBoxYZ(AActor* Actor, UBoxComponent* Box, bool bSweep);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponent(AActor* Actor, TSubclassOf<UActorComponent> ComponentType);
    
};

