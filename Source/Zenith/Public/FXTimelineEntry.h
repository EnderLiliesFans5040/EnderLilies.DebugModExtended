#pragma once
#include "CoreMinimal.h"
#include "ESpineBone.h"
#include "UObject/NoExportTypes.h"
#include "ETranslucencyLayer.h"
#include "Particles/WorldPSCPool.h"
#include "FXTimelineEntry.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct ZENITH_API FFXTimelineEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpineBone Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CustomBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float From;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float To;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAttach;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFollowBoneRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFireAndForget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETranslucencyLayer TranslucencyLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPSCPoolMethod PoolMethod;
    
    UPROPERTY(Instanced)
    UParticleSystemComponent* Instance;
    
    FFXTimelineEntry();
};

