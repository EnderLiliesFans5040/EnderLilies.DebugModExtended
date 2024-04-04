#pragma once
#include "CoreMinimal.h"
#include "EFMODLogging.generated.h"

UENUM(BlueprintType)
enum EFMODLogging {
    LEVEL_NONE,
    LEVEL_ERROR,
    LEVEL_WARNING,
    LEVEL_LOG = 4,
    TYPE_MEMORY = 100,
    TYPE_FILE = 200,
    TYPE_CODEC = 400,
    TYPE_TRACE = 800,
    DISPLAY_TIMESTAMPS = 10000,
    DISPLAY_LINENUMBERS = 20000,
    DISPLAY_THREAD = 40000,
};

