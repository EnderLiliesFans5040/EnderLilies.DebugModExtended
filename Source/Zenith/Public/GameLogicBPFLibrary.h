#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDirectionInputTypes.h"
#include "Engine/EngineTypes.h"
#include "GameLogicBPFLibrary.generated.h"

class AActor;
class APlayerController;
class UObject;
class UForceFeedbackEffect;
class UCameraShakeBase;

UCLASS(BlueprintType)
class UGameLogicBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameLogicBPFLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopAllForceFeedbacks(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void LaunchForceFeedback(APlayerController* PlayerController, UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LaunchCameraShake(const UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    
    UFUNCTION(BlueprintPure)
    static bool IsSameVerticalDirection(EDirectionInputTypes DirectionA, EDirectionInputTypes DirectionB, bool bConsiderNeutralAsSame);
    
    UFUNCTION(BlueprintPure)
    static bool IsSameHorizontalDirection(EDirectionInputTypes DirectionA, EDirectionInputTypes DirectionB, bool bConsiderNeutralAsSame);
    
    UFUNCTION(BlueprintPure)
    static bool IsPureVerticalDirection(EDirectionInputTypes Direction, bool bConsiderNeutralAsVertical);
    
    UFUNCTION(BlueprintPure)
    static bool IsPureHorizontalDirection(EDirectionInputTypes Direction, bool bConsiderNeutralAsHorizontal);
    
    UFUNCTION(BlueprintPure)
    static int32 GetSpecialAttackMPCost();
    
    UFUNCTION(BlueprintPure)
    static FName GetRestPlayerPointStartTag();
    
    UFUNCTION(BlueprintPure)
    static AActor* GetClosestEnemyOfActor(AActor* Actor, float MinDistance, float Range, bool bNeedLineOfSight, TEnumAsByte<ECollisionChannel> VisibilityChannel, bool bFrontCheck);
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputeLaunchVelocityToDestination(const FVector& Origin, const FVector& DestinationLocation, float GravityFactor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseStrengthenOnAnySpirit(APlayerController* PlayerController);
    
};

