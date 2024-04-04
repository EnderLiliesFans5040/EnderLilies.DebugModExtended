#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESpineBone.h"
#include "BaseBoneComponent.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSIONPLUGIN_API UBaseBoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBaseBoneComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetBoneTransformByName(const FString& BoneName, bool bFollowRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetBoneTransform(ESpineBone Bone, bool bFollowRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetAttachComponentByName(const FString& BoneName, bool bFollowRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetAttachComponent(ESpineBone Bone, bool bFollowRotation);
    
};

