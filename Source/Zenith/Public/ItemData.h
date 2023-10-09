#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "ItemData.generated.h"

USTRUCT(BlueprintType)
struct FItemData : public FBaseItemData {
    GENERATED_BODY()
public:
    ZENITH_API FItemData();
};

