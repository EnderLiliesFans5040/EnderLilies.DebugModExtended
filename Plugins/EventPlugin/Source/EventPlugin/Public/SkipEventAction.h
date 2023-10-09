#pragma once
#include "CoreMinimal.h"
#include "EventObject.h"
#include "SkipEventAction.generated.h"

class UEventPlayer;

UCLASS(Abstract, Blueprintable)
class EVENTPLUGIN_API USkipEventAction : public UEventObject {
    GENERATED_BODY()
public:
    USkipEventAction();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkip(UEventPlayer* EventPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostSkip(UEventPlayer* EventPlayer);
    
};

