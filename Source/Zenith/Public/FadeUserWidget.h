#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FadeEventDelegate.h"
#include "FadeUserWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class ZENITH_API UFadeUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFadeEvent OnFadeFinish;
    
    UFadeUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareFadeIn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyFinish(bool bWasFadeIn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchFadeIn();
    
};

