#pragma once
#include "CoreMinimal.h"
#include "ERichTextDecoratorMode.generated.h"

UENUM()
enum class ERichTextDecoratorMode : uint8 {
    Auto,
    ForceKeyboard,
    ForceGamepad,
};

