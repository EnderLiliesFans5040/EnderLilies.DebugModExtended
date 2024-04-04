#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "SteamNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class USteamNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    USteamNetDriver();

};

