#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameStateZenithBase.generated.h"

UCLASS(Blueprintable)
class ZENITH_API AGameStateZenithBase : public AGameStateBase {
    GENERATED_BODY()
public:
    AGameStateZenithBase(const FObjectInitializer& ObjectInitializer);

};

