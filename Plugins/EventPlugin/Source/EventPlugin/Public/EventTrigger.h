#pragma once
#include "CoreMinimal.h"
#include "EventObject.h"
#include "EventTrigger.generated.h"

class AActor;
class APlayerController;
class UEventBlackBoard;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class EVENTPLUGIN_API UEventTrigger : public UEventObject {
    GENERATED_BODY()
public:
    UEventTrigger();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteTrigger(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
};

