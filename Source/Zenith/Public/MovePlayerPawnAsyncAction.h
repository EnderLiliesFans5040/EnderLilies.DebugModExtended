#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovePlayerPawnOutputPinDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MovePlayerPawnAsyncAction.generated.h"

class UMovePlayerPawnAsyncAction;
class AZenithPlayerController;

UCLASS()
class ZENITH_API UMovePlayerPawnAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMovePlayerPawnOutputPin OnFinished;
    
    UMovePlayerPawnAsyncAction();
private:
    UFUNCTION()
    void Tick();
    
    UFUNCTION()
    void OnSimulatedInputChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    static UMovePlayerPawnAsyncAction* MovePlayerPawn(AZenithPlayerController* PlayerController, FVector TargetLocation, float AcceptableRadius, bool bAllowVerticalMovement);
    
};

