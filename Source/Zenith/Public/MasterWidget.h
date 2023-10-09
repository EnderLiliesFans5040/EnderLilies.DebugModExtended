#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MasterWidget.generated.h"

class UWidget;

UCLASS(Abstract, EditInlineNew)
class ZENITH_API UMasterWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMasterWidget();
    UFUNCTION(BlueprintNativeEvent)
    void SetVisible(bool bVisible);
    
    UFUNCTION(BlueprintNativeEvent)
    void AddChild(UWidget* Widget, int32 ZOrder);
    
};

