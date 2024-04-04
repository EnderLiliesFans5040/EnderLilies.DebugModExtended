#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveIconUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZENITH_API USaveIconUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USaveIconUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideAndRemoveFromViewport();
    
};

