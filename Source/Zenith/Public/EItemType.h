#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    None,
    Dummy,
    Parameter,
    Aptitude,
    Spirit,
    Passive,
    Tip,
};

