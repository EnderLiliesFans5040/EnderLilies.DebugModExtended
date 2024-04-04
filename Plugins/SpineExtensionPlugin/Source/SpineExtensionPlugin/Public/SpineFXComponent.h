#pragma once
#include "CoreMinimal.h"
#include "BaseFXComponent.h"
#include "SpineFXComponent.generated.h"

class UBaseBoneComponent;
class UNavMovementComponent;
class UParticleSystemComponent;
class USpineSkeletonRendererComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API USpineFXComponent : public UBaseFXComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* RendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseBoneComponent* BoneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavMovementComponent* NavComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UParticleSystemComponent>> RunningFXs;
    
public:
    USpineFXComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFXSystemEnd(UParticleSystemComponent* ParticleSystem);
    
};

