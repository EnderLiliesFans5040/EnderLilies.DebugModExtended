#pragma once
#include "CoreMinimal.h"
#include "EZenithError.generated.h"

UENUM(BlueprintType)
enum class EZenithError : uint8 {
    None,
    SaveFailed = 100,
    LoadFailed,
    LoadInvalidSaveDataVersion,
};

