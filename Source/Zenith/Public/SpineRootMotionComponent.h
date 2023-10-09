#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpineRootMotionComponent.generated.h"

class ACharacter;
class USpineSkeletonRendererComponent;
class USpineSkeletonAnimationComponent;
class USpineSkeletonComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpineRootMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float RootMotionFactor;
    
    UPROPERTY(Transient)
    ACharacter* CharacterOwner;
    
    UPROPERTY(Instanced, Transient)
    USpineSkeletonRendererComponent* SpineRenderer;
    
    UPROPERTY(Instanced, Transient)
    USpineSkeletonAnimationComponent* SpineAnimation;
    
public:
    USpineRootMotionComponent();
private:
    UFUNCTION()
    void OnAfterBoneTransformUpdate(USpineSkeletonComponent* SpineSkeletonComponent);
    
};

