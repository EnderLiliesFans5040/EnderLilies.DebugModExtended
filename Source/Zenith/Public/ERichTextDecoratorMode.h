#pragma once
#include "CoreMinimal.h"
#include "ERichTextDecoratorMode.generated.h"

UENUM(BlueprintType)
enum class ERichTextDecoratorMode : uint8 {
    Auto,
    ForceKeyboard,
    ForceGamepad,
};

