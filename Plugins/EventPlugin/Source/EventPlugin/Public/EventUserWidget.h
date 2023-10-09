#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EventUserWidgetEventDelegate.h"
#include "EventUserWidget.generated.h"

class UEventPlayer;

UCLASS(Abstract, EditInlineNew)
class EVENTPLUGIN_API UEventUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEventUserWidgetEvent OnKeyDownDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UEventPlayer* EventPlayer;
    
public:
    UEventUserWidget();
    UFUNCTION(BlueprintNativeEvent)
    void RequestRemove();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartNewAction();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStep();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventFinish();
    
};

