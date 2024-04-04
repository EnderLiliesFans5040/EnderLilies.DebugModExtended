#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "ZenithPlayerStart.generated.h"

class APawn;
class APlayerController;

UCLASS(Blueprintable)
class ZENITH_API AZenithPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    AZenithPlayerStart(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerRespawn(APlayerController* PlayerController, APawn* Pawn);
    
};

