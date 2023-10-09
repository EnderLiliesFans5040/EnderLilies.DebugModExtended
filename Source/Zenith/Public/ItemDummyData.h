#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "ItemDummyData.generated.h"

USTRUCT(BlueprintType)
struct FItemDummyData : public FBaseItemData {
    GENERATED_BODY()
public:
    ZENITH_API FItemDummyData();
};

