#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "UObject/NoExportTypes.h"
#include "ZenithLevelSequenceActor.generated.h"

class UZenithLevelSequencePlayer;

UCLASS()
class ZENITH_API AZenithLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    //AZenithLevelSequenceActor() {};
    UFUNCTION(BlueprintCallable)
    void SetOrigin(FTransform Origin);
    
    UFUNCTION(BlueprintPure)
    UZenithLevelSequencePlayer* GetZenithSequencePlayer() const;
    
};

