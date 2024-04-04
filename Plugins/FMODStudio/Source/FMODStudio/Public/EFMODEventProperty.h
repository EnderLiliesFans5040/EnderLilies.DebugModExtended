#pragma once
#include "CoreMinimal.h"
#include "EFMODEventProperty.generated.h"

UENUM(BlueprintType)
namespace EFMODEventProperty {
    enum Type {
        ChannelPriority,
        ScheduleDelay,
        ScheduleLookahead,
        MinimumDistance,
        MaximumDistance,
        Count,
    };
}

