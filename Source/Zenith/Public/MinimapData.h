#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MinimapData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMinimapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> MinimapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector MapSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector CenterWorldLocation;
    
    ZENITH_API FMinimapData();
};

