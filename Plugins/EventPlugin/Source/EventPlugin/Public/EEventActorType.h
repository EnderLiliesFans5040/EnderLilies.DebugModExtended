#pragma once
#include "CoreMinimal.h"
#include "EEventActorType.generated.h"

UENUM(BlueprintType)
enum class EEventActorType : uint8 {
    None,
    Player = 10,
    Binding = 15,
};

