#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EventUserWidgetEventDelegate.h"
#include "EventUserWidget.generated.h"

class UEventPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EVENTPLUGIN_API UEventUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventUserWidgetEvent OnKeyDownDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventPlayer* EventPlayer;
    
public:
    UEventUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartNewAction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStep();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventFinish();
    
};

