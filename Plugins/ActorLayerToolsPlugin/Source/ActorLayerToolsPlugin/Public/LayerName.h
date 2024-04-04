#pragma once
#include "CoreMinimal.h"
#include "LayerName.generated.h"

USTRUCT(BlueprintType)
struct ACTORLAYERTOOLSPLUGIN_API FLayerName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FLayerName();
};

