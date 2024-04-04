#pragma once
#include "CoreMinimal.h"
#include "ESaveExistsType.h"
#include "LoadGameDataFromSlotIndexDelegateDelegate.generated.h"

class USaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLoadGameDataFromSlotIndexDelegate, USaveGame*, SaveGame, ESaveExistsType, SaveExistsType);

