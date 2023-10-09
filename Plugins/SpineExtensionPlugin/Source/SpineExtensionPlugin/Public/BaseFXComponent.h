#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESpineBone.h"
#include "Particles/WorldPSCPool.h"
#include "UObject/NoExportTypes.h"
#include "BaseFXComponent.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API UBaseFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    ESpineBone DefaultFXBone;
    
public:
    UBaseFXComponent();
    UFUNCTION(BlueprintCallable)
    void StopAllRunningFXs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UParticleSystemComponent* SpawnFX(UParticleSystem* ParticleSystem, ESpineBone Bone, FName CustomBone, FTransform Offset, bool bAttach, bool bFollowBoneRotation, int32 TranslucencySortPriority, EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX);
    
    UFUNCTION(BlueprintPure)
    ESpineBone GetDefaultFXBone() const;
    
};

