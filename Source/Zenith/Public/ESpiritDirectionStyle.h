#pragma once
#include "CoreMinimal.h"
#include "ESpiritDirectionStyle.generated.h"

UENUM(BlueprintType)
enum class ESpiritDirectionStyle : uint8 {
    FollowInput,
    NoChange = 5,
    CopySummoner = 10,
    DashBeforeAction = 20,
    DashWhileAction = 25,
};

