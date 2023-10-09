#pragma once
#include "CoreMinimal.h"
#include "ProcRenderUpdateSettings.generated.h"

USTRUCT(BlueprintType)
struct FProcRenderUpdateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bUpdatePositionData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateColorData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateNormalData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateTangentData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateUV0Data;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateUV1Data;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateUV2Data;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateUV3Data;
    
    PROCEDURALRENDERMESHPLUGIN_API FProcRenderUpdateSettings();
};

