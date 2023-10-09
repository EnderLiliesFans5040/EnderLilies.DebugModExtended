#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotifyState.h"
#include "ESpineBone.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SpineAnimNotifyState_TimedParticleEffect.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(CollapseCategories, EditInlineNew)
class SPINEEXTENSIONPLUGIN_API USpineAnimNotifyState_TimedParticleEffect : public USpineAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
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
    bool bDetachOnDeactivate;
    
    UPROPERTY(EditAnywhere)
    bool bFollowBoneRotation;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyAtEnd;
    
private:
    UPROPERTY(Instanced)
    UParticleSystemComponent* CurrentParticleComponent;
    
public:
    USpineAnimNotifyState_TimedParticleEffect();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void CustomizeParticleEffect(UParticleSystemComponent* ParticleSystem) const;
    
};

