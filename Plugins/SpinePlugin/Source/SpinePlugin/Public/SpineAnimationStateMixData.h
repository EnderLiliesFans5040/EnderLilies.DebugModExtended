#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationStateMixData.generated.h"

USTRUCT(BlueprintType)
struct SPINEPLUGIN_API FSpineAnimationStateMixData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mix;
    
    FSpineAnimationStateMixData();
};

