#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveIconUserWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class ZENITH_API USaveIconUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USaveIconUserWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideAndRemoveFromViewport();
    
};

