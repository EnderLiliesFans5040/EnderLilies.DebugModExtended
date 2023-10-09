#pragma once
#include "CoreMinimal.h"
#include "ESpineBone.h"
#include "BaseBoneComponent.h"
#include "SpineBoneComponent.generated.h"

class UNavMovementComponent;
class USceneComponent;
class USpineSkeletonAnimationComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API USpineBoneComponent : public UBaseBoneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TMap<ESpineBone, USceneComponent*> BoneFollowers;
    
    UPROPERTY(Instanced)
    TMap<ESpineBone, USceneComponent*> RotatedBoneFollowers;
    
    UPROPERTY(Instanced)
    USpineSkeletonAnimationComponent* SpineAnimComponent;
    
    UPROPERTY(Instanced)
    UNavMovementComponent* NavMovementComponent;
    
    UPROPERTY(Instanced)
    USceneComponent* SceneFeetComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESpineBone, FString> BoneNames;
    
    USpineBoneComponent();
};

