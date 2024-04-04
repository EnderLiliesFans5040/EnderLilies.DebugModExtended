#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpineRootMotionComponent.generated.h"

class ACharacter;
class USpineSkeletonAnimationComponent;
class USpineSkeletonComponent;
class USpineSkeletonRendererComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpineRootMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* SpineRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SpineAnimation;
    
public:
    USpineRootMotionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAfterBoneTransformUpdate(USpineSkeletonComponent* SpineSkeletonComponent);
    
};

