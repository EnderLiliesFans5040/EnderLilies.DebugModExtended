#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.generated.h"

UENUM(BlueprintType)
enum class EAptitudeType : uint8 {
    None,
    Jump = 0xA,
    DoubleJump,
    Dodge = 0x14,
    Dash = 0x1E,
    DashAttack,
    PoundAttack = 0x28,
    Swim = 0x46,
    Dive = 0x4B,
    Wallgrab = 0x5A,
    Hook = 0x64,
    DoorUnlock = 0x6E,
    SpecialAttack = 0x78,
    Stumble = 0xC8,
};

