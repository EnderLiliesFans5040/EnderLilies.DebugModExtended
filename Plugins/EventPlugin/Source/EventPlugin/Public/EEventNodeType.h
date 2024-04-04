#pragma once
#include "CoreMinimal.h"
#include "EEventNodeType.generated.h"

UENUM(BlueprintType)
enum class EEventNodeType : uint8 {
    None,
    System = 10,
    Camera = 15,
    NPC = 100,
    Player = 110,
};

