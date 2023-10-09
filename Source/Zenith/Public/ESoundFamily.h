#pragma once
#include "CoreMinimal.h"
#include "ESoundFamily.generated.h"

UENUM()
enum class ESoundFamily : uint8 {
    None,
    BGM,
    SE,
    Ambience,
};

