#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceActor.h"
#include "ZenithLevelSequenceActor.generated.h"

class UZenithLevelSequencePlayer;

UCLASS(Blueprintable)
class ZENITH_API AZenithLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AZenithLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOrigin(FTransform Origin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UZenithLevelSequencePlayer* GetZenithSequencePlayer() const;
    
};

