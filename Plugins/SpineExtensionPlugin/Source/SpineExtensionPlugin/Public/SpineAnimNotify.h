#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SpineAnimNotify.generated.h"

class UAnimSequenceBase;
class USpineSkeletonAnimationComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SPINEEXTENSIONPLUGIN_API USpineAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SpineContext;
    
public:
    USpineAnimNotify();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotify(USpineSkeletonAnimationComponent* SpineComp, UAnimSequenceBase* Animation) const;
    
};

