#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "ItemTipData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemTipData : public FBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TipImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    ZENITH_API FItemTipData();
};

