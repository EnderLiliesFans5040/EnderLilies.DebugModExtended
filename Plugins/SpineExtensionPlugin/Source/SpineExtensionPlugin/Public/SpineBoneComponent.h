#pragma once
#include "CoreMinimal.h"
#include "BaseBoneComponent.h"
#include "ESpineBone.h"
#include "SpineBoneComponent.generated.h"

class UNavMovementComponent;
class USceneComponent;
class USpineSkeletonAnimationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API USpineBoneComponent : public UBaseBoneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ESpineBone, USceneComponent*> BoneFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ESpineBone, USceneComponent*> RotatedBoneFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SpineAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavMovementComponent* NavMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneFeetComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpineBone, FString> BoneNames;
    
    USpineBoneComponent(const FObjectInitializer& ObjectInitializer);

};

