#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "MGBPFLibrary.generated.h"

class UImage;
class UObject;
class UPanelWidget;
class UPaperSprite;
class UScrollBox;
class UUserWidget;

UCLASS(Blueprintable)
class UMGBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMGBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetupVerticalWrapNavigation(UPanelWidget* PanelWidget, int32 ColumnCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushFromSprite(UImage* Target, UPaperSprite* Sprite, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetBrushFromSoftSprite(UImage* Target, TSoftObjectPtr<UPaperSprite> SoftSprite, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateAllWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetScrollboxStartShadowColor(UScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetScrollboxEndShadowColor(UScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFocusCause GetFocusCause(FFocusEvent FocusEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UUserWidget*> GetAllTopLevelWidgets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushUMGAnimations(UObject* WorldContextObject);
    
};

