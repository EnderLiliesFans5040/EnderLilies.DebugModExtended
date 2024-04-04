#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FMODOcclusionDetails.generated.h"

USTRUCT(BlueprintType)
struct FFMODOcclusionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> OcclusionTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseComplexCollisionForOcclusion;
    
    FMODSTUDIO_API FFMODOcclusionDetails();
};

