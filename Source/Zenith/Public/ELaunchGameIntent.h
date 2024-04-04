#pragma once
#include "CoreMinimal.h"
#include "ELaunchGameIntent.generated.h"

UENUM(BlueprintType)
enum class ELaunchGameIntent : uint8 {
    Unknown,
    NewGame,
    Continue,
    NewGamePlus,
};

