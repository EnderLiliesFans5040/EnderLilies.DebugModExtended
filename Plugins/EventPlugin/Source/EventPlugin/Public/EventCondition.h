#pragma once
#include "CoreMinimal.h"
#include "EventObject.h"
#include "EventCondition.generated.h"

class AActor;
class APlayerController;
class UEventBlackBoard;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class EVENTPLUGIN_API UEventCondition : public UEventObject {
    GENERATED_BODY()
public:
    UEventCondition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsConditionMet(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
};

