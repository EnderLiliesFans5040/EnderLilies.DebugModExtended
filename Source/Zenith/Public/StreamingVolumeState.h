#pragma once
#include "CoreMinimal.h"
#include "StreamingVolumeState.generated.h"

UENUM(BlueprintType)
enum class StreamingVolumeState : uint8 {
    None,
    LoadingPrimary,
    LoadingSecondary,
    FullyLoaded,
    WaitBeforeUnload,
};

