#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MovePlayerPawnOutputPinDelegate.h"
#include "MovePlayerPawnAsyncAction.generated.h"

class AZenithPlayerController;
class UMovePlayerPawnAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API UMovePlayerPawnAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovePlayerPawnOutputPin OnFinished;
    
    UMovePlayerPawnAsyncAction();

private:
    UFUNCTION(BlueprintCallable)
    void Tick();
    
    UFUNCTION(BlueprintCallable)
    void OnSimulatedInputChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    static UMovePlayerPawnAsyncAction* MovePlayerPawn(AZenithPlayerController* PlayerController, FVector TargetLocation, float AcceptableRadius, bool bAllowVerticalMovement);
    
};

