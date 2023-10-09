#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SpineAnimNotify.generated.h"

class USpineSkeletonAnimationComponent;
class UAnimSequenceBase;

UCLASS(Abstract, CollapseCategories)
class SPINEEXTENSIONPLUGIN_API USpineAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    USpineSkeletonAnimationComponent* SpineContext;
    
public:
    USpineAnimNotify();
    UFUNCTION(BlueprintImplementableEvent)
    bool Received_SpineNotify(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation) const;
    
};

