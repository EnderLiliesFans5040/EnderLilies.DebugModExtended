#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineAnimNotify_PlaySound.generated.h"

class USoundBase;

UCLASS(Blueprintable, CollapseCategories)
class SPINEEXTENSIONPLUGIN_API USpineAnimNotify_PlaySound : public USpineAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFollow: 1;
    
    USpineAnimNotify_PlaySound();

};

