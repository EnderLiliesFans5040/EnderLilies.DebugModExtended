#pragma once
#include "CoreMinimal.h"
#include "ESoundMaterial.generated.h"

UENUM()
enum class ESoundMaterial : uint8 {
    NONE,
    Iron = 0xA,
    Meat = 0x14,
    Wood = 0x1E,
    Stone = 0x28,
};

