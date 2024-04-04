#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EActorBindingTransformType.h"
#include "ActorBindingInfos.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorBindingInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnEventFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorBindingTransformType TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    EVENTPLUGIN_API FActorBindingInfos();
};

