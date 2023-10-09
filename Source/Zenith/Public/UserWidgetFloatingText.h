#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UserWidgetFloatingText.generated.h"

class USceneComponent;

UCLASS(EditInlineNew)
class ZENITH_API UUserWidgetFloatingText : public UUserWidget {
    GENERATED_BODY()
public:
    UUserWidgetFloatingText();
    UFUNCTION(BlueprintCallable)
    void DetachFromComponent();
    
    UFUNCTION(BlueprintCallable)
    void AttachToComponent(USceneComponent* SceneComponent, FVector InWorldLocationOffset, FVector2D InPositionOffset);
    
};

