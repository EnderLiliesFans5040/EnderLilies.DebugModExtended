#pragma once
#include "CoreMinimal.h"
#include "ESpiritDirectionStyle.generated.h"

UENUM(BlueprintType)
enum class ESpiritDirectionStyle : uint8 {
    FollowInput,
    NoChange = 0x5,
    CopySummoner = 0xA,
    DashBeforeAction = 0x14,
    DashWhileAction = 0x19,
};

