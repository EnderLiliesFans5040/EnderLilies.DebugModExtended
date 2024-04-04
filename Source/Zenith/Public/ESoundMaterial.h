#pragma once
#include "CoreMinimal.h"
#include "ESoundMaterial.generated.h"

UENUM(BlueprintType)
enum class ESoundMaterial : uint8 {
    NONE,
    Iron = 10,
    Meat = 20,
    Wood = 30,
    Stone = 40,
};

