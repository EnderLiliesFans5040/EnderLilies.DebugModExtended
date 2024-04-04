#pragma once
#include "CoreMinimal.h"
#include "HandlerComponentFactory.h"
#include "SteamAuthComponentModuleInterface.generated.h"

UCLASS(Blueprintable)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    USteamAuthComponentModuleInterface();

};

