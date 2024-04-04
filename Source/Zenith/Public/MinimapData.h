#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MinimapData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMinimapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MinimapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterWorldLocation;
    
    ZENITH_API FMinimapData();
};

