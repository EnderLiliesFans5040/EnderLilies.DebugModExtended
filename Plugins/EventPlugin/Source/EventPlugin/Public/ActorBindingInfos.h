#pragma once
#include "CoreMinimal.h"
#include "EActorBindingTransformType.h"
#include "UObject/NoExportTypes.h"
#include "ActorBindingInfos.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorBindingInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyOnEventFinish;
    
    UPROPERTY(EditAnywhere)
    EActorBindingTransformType TransformType;
    
    UPROPERTY(EditAnywhere)
    FTransform SpawnTransform;
    
    EVENTPLUGIN_API FActorBindingInfos();
};

