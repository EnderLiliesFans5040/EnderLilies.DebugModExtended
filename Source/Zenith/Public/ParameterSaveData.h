#pragma once
#include "CoreMinimal.h"
#include "ParameterSaveData.generated.h"

USTRUCT(BlueprintType)
struct FParameterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Level;
    
    UPROPERTY()
    int32 ExpPoint;
    
    UPROPERTY()
    int32 SkinLevel;
    
    UPROPERTY()
    int32 FinalPassivePartCount;
    
    ZENITH_API FParameterSaveData();
};

