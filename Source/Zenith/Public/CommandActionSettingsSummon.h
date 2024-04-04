#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EResummonType.h"
#include "ESpiritEndType.h"
#include "ESpiritLocationStyle.h"
#include "CommandActionSettingsSummon.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FCommandActionSettingsSummon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResummonType ResummonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpiritLocationStyle SpiritLocationStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpiritEndType SpiritEndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilAutoEnd;
    
public:
    FCommandActionSettingsSummon();
};

