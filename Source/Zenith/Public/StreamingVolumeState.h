#pragma once
#include "CoreMinimal.h"
#include "StreamingVolumeState.generated.h"

UENUM()
enum class StreamingVolumeState {
    None,
    LoadingPrimary,
    LoadingSecondary,
    FullyLoaded,
    WaitBeforeUnload,
};

