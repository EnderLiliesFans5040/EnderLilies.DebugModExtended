#pragma once
#include "CoreMinimal.h"
#include "EResummonType.h"
#include "ESpiritLocationStyle.h"
#include "ESpiritEndType.h"
#include "UObject/NoExportTypes.h"
#include "CommandActionSettingsSummon.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FCommandActionSettingsSummon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EResummonType ResummonType;
    
    UPROPERTY(EditDefaultsOnly)
    ESpiritLocationStyle SpiritLocationStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector LocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    ESpiritEndType SpiritEndType;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeUntilAutoEnd;
    
public:
    FCommandActionSettingsSummon();
};

