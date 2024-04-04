#pragma once
#include "CoreMinimal.h"
#include "ELightEmulatorMode.generated.h"

UENUM(BlueprintType)
enum class ELightEmulatorMode : uint8 {
    LightSimulation,
    CustomValues,
};

