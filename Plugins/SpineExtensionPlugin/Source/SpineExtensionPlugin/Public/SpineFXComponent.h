#pragma once
#include "CoreMinimal.h"
#include "BaseFXComponent.h"
#include "SpineFXComponent.generated.h"

class UParticleSystemComponent;
class USpineSkeletonRendererComponent;
class UNavMovementComponent;
class UBaseBoneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API USpineFXComponent : public UBaseFXComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USpineSkeletonRendererComponent* RendererComponent;
    
    UPROPERTY(Instanced)
    UBaseBoneComponent* BoneComponent;
    
    UPROPERTY(Instanced)
    UNavMovementComponent* NavComponent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<UParticleSystemComponent>> RunningFXs;
    
public:
    USpineFXComponent();
private:
    UFUNCTION()
    void OnFXSystemEnd(UParticleSystemComponent* ParticleSystem);
    
};

