#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "SteamNetConnection.generated.h"

UCLASS(NonTransient)
class USteamNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsPassthrough;
    
    USteamNetConnection();
};

