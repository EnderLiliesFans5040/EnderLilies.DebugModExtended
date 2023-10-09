#pragma once
#include "CoreMinimal.h"
#include "EEventNodeType.generated.h"

UENUM(BlueprintType)
enum class EEventNodeType : uint8 {
    None,
    System = 0xA,
    Camera = 0xF,
    NPC = 0x64,
    Player = 0x6E,
};

