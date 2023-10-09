#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "ItemTipData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemTipData : public FBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> TipImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Number;
    
    ZENITH_API FItemTipData();
};

