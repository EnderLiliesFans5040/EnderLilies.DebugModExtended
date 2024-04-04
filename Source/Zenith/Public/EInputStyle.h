#pragma once
#include "CoreMinimal.h"
#include "EInputStyle.generated.h"

UENUM(BlueprintType)
enum class EInputStyle : uint8 {
    INPUTSTYLE_NONE,
    INPUTSTYLE_KEYBOARD,
    INPUTSTYLE_XBOX360 = 10,
    INPUTSTYLE_XBOXONE,
    INPUTSTYLE_PS4 = 20,
    INPUTSTYLE_PS5,
    INPUTSTYLE_SWITCH = 30,
    INPUTSTYLE_PC_PS4 = 100,
    INPUTSTYLE_PC_PS5,
    INPUTSTYLE_PC_SWITCH,
};

