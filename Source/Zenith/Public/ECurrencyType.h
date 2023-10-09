#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.generated.h"

UENUM(BlueprintType)
enum class ECurrencyType : uint8 {
    Spirit_Lv1,
    Spirit_Lv2,
    Spirit_Lv3,
    Spirit_MAX UMETA(Hidden),
};

