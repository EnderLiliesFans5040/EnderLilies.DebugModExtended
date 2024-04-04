#pragma once
#include "CoreMinimal.h"
#include "ECommandInputTypes.generated.h"

UENUM(BlueprintType)
enum class ECommandInputTypes : uint8 {
    NONE,
    JUMP,
    DODGE,
    ATTACK,
    SUMMON_1,
    SUMMON_2,
    SUMMON_SET_SWITCH,
    HOOK,
    HEAL,
    INTERACT,
    MAINMENU,
    PAUSE,
    MINIMAP,
    ANY = 100,
};

