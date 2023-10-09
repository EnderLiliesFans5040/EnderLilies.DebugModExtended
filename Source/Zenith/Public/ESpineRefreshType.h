#pragma once
#include "CoreMinimal.h"
#include "ESpineRefreshType.generated.h"

UENUM()
enum class ESpineRefreshType {
    DoNotRefresh,
    RefreshWithoutTransition,
    RefreshWithTransition,
};

