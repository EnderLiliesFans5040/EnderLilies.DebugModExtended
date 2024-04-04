#pragma once
#include "CoreMinimal.h"
#include "ERichTextFormatType.generated.h"

UENUM(BlueprintType)
enum class ERichTextFormatType : uint8 {
    DIRECTION,
    COMMAND,
    UI,
    CUSTOM = 10,
};

