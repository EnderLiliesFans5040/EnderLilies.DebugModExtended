#pragma once
#include "CoreMinimal.h"
#include "EZenithError.generated.h"

UENUM()
enum class EZenithError : uint8 {
    None,
    SaveFailed = 0x64,
    LoadFailed,
    LoadInvalidSaveDataVersion,
};

