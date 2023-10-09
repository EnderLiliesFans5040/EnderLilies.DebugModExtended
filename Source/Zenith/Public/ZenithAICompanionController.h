#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ZenithAIBaseController.h"
#include "UObject/NoExportTypes.h"
#include "ZenithAICompanionController.generated.h"

class UState;
class AController;
class APawn;

UCLASS()
class ZENITH_API AZenithAICompanionController : public AZenithAIBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FVector TargetAreaExtents;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> ForbidIdleStates;
    
public:
    AZenithAICompanionController();
    UFUNCTION(BlueprintCallable)
    void SetLeaderController(AController* NewLeaderController);
    
    UFUNCTION(BlueprintCallable)
    void ResetStateAndLocation();
    
private:
    UFUNCTION()
    void OnLeaderPawnChange();
    
public:
    UFUNCTION(BlueprintPure)
    APawn* GetLeaderPawn() const;
    
};

