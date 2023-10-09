#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpineAnimNotify.h"
#include "ESpineBone.h"
#include "UObject/NoExportTypes.h"
#include "SpineAnimNotify_PlayParticleEffect.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(CollapseCategories)
class SPINEEXTENSIONPLUGIN_API USpineAnimNotify_PlayParticleEffect : public USpineAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    ESpineBone Bone;
    
    UPROPERTY(EditAnywhere)
    FName CustomBone;
    
    UPROPERTY(EditAnywhere)
    bool bAttachToBone;
    
    UPROPERTY(EditAnywhere)
    bool bFollowBoneRotation;
    
    UPROPERTY(EditAnywhere)
    bool bRegisterAsRunningFX;
    
    USpineAnimNotify_PlayParticleEffect();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void CustomizeParticleEffect(UParticleSystemComponent* ParticleSystem) const;
    
};

