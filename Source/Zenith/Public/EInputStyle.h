#pragma once
#include "CoreMinimal.h"
#include "EInputStyle.generated.h"

UENUM()
enum class EInputStyle : uint8 {
    INPUTSTYLE_NONE,
    INPUTSTYLE_KEYBOARD,
    INPUTSTYLE_XBOX360 = 0xA,
    INPUTSTYLE_XBOXONE,
    INPUTSTYLE_PS4 = 0x14,
    INPUTSTYLE_PS5,
    INPUTSTYLE_SWITCH = 0x1E,
    INPUTSTYLE_PC_PS4 = 0x64,
    INPUTSTYLE_PC_PS5,
    INPUTSTYLE_PC_SWITCH,
    INPUTSTYLE_MAX UMETA(Hidden),
};

