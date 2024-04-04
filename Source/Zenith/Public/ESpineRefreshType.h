#pragma once
#include "CoreMinimal.h"
#include "ESpineRefreshType.generated.h"

UENUM(BlueprintType)
enum class ESpineRefreshType : uint8 {
    DoNotRefresh,
    RefreshWithoutTransition,
    RefreshWithTransition,
};

