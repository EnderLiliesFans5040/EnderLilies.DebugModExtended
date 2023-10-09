#pragma once
#include "CoreMinimal.h"
#include "AbilityTimelineEntry.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTimeline.generated.h"

class UAbilityComponent;
class USpineFXComponent;

USTRUCT(BlueprintType)
struct ZENITH_API FAbilityTimeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UAbilityComponent* TargetAbilityComponent;
    
    UPROPERTY(Instanced, Transient)
    USpineFXComponent* FXComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform GlobalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FAbilityTimelineEntry> Entries;
    
public:
    FAbilityTimeline();
};

