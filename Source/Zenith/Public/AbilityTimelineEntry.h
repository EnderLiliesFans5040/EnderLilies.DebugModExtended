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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDescription AbilityDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityVisualCue AbilityVisualCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAbility* Instance;
    
public:
    FAbilityTimelineEntry();
};

