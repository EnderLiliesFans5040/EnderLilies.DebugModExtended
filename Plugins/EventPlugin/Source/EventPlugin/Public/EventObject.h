#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventObject.generated.h"

UCLASS(Abstract)
class EVENTPLUGIN_API UEventObject : public UObject {
    GENERATED_BODY()
public:
    UEventObject();
};

