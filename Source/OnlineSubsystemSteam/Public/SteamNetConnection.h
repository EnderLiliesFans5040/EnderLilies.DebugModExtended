#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "SteamNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class USteamNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassthrough;
    
    USteamNetConnection();

};

