#pragma once
#include "CoreMinimal.h"
#include "EResummonType.generated.h"

UENUM(BlueprintType)
enum class EResummonType : uint8 {
    AlwaysSummon,
    UnsummonIfSummoned,
};

