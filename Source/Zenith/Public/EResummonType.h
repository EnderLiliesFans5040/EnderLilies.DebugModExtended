#pragma once
#include "CoreMinimal.h"
#include "EResummonType.generated.h"

UENUM()
enum class EResummonType : uint8 {
    AlwaysSummon,
    UnsummonIfSummoned,
};

