#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ZenithAIBaseController.h"
#include "ZenithAICompanionController.generated.h"

class AController;
class APawn;
class UState;

UCLASS(Blueprintable)
class ZENITH_API AZenithAICompanionController : public AZenithAIBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetAreaExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> ForbidIdleStates;
    
public:
    AZenithAICompanionController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLeaderController(AController* NewLeaderController);
    
    UFUNCTION(BlueprintCallable)
    void ResetStateAndLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaderPawnChange();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetLeaderPawn() const;
    
};

