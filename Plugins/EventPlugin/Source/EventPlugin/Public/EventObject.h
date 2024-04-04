#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventObject.generated.h"

UCLASS(Abstract, Blueprintable)
class EVENTPLUGIN_API UEventObject : public UObject {
    GENERATED_BODY()
public:
    UEventObject();

};

