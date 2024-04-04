#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.generated.h"

UENUM(BlueprintType)
enum class EAptitudeType : uint8 {
    None,
    Jump = 10,
    DoubleJump,
    Dodge = 20,
    Dash = 30,
    DashAttack,
    PoundAttack = 40,
    Swim = 70,
    Dive = 75,
    Wallgrab = 90,
    Hook = 100,
    DoorUnlock = 110,
    SpecialAttack = 120,
    Stumble = 200,
};

