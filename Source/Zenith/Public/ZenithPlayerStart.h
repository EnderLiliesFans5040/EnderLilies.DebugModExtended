#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "ZenithPlayerStart.generated.h"

class APlayerController;
class APawn;

UCLASS()
class ZENITH_API AZenithPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    AZenithPlayerStart();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerRespawn(APlayerController* PlayerController, APawn* Pawn);
    
};

