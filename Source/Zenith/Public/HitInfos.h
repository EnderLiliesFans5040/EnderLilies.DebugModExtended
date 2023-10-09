#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HitInfos.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct ZENITH_API FHitInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform OriginalFromTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform OriginalToTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPrimitiveComponent* OtherComp;
    
    UPROPERTY(BlueprintReadOnly)
    bool bFromSweep;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeWhenHit;
    
    UPROPERTY(BlueprintReadOnly)
    bool bGuard;
    
    UPROPERTY(BlueprintReadOnly)
    bool bJustGuard;
    
    UPROPERTY(BlueprintReadOnly)
    bool bJustDodged;
    
    UPROPERTY(BlueprintReadOnly)
    bool bParried;
    
    FHitInfos();
};

