#pragma once
#include "CoreMinimal.h"
#include "AbilityDescription.h"
#include "AbilityVisualCue.h"
#include "AbilityTimelineEntry.generated.h"

class AAbility;

USTRUCT(BlueprintType)
struct ZENITH_API FAbilityTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAbilityDescription AbilityDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float From;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float To;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAbilityVisualCue AbilityVisualCue;
    
private:
    UPROPERTY(Transient)
    AAbility* Instance;
    
public:
    FAbilityTimelineEntry();
};

