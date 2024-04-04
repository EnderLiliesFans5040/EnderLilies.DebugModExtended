#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Particles/WorldPSCPool.h"
#include "ESpineBone.h"
#include "BaseFXComponent.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API UBaseFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpineBone DefaultFXBone;
    
public:
    UBaseFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAllRunningFXs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UParticleSystemComponent* SpawnFX(UParticleSystem* ParticleSystem, ESpineBone Bone, FName CustomBone, FTransform Offset, bool bAttach, bool bFollowBoneRotation, int32 TranslucencySortPriority, EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpineBone GetDefaultFXBone() const;
    
};

