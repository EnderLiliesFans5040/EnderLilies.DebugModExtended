#include "MGBPFLibrary.h"

UMGBPFLibrary::UMGBPFLibrary() {
}

void UMGBPFLibrary::SetupVerticalWrapNavigation(UPanelWidget* PanelWidget, int32 ColumnCount) {
}

void UMGBPFLibrary::SetBrushFromSprite(UImage* Target, UPaperSprite* Sprite, bool bMatchSize) {
}

void UMGBPFLibrary::SetBrushFromSoftSprite(UImage* Target, TSoftObjectPtr<UPaperSprite> SoftSprite, bool bMatchSize) {
}

void UMGBPFLibrary::InvalidateAllWidgets() {
}

FLinearColor UMGBPFLibrary::GetScrollboxStartShadowColor(UScrollBox* ScrollBox) {
    return FLinearColor{};
}

FLinearColor UMGBPFLibrary::GetScrollboxEndShadowColor(UScrollBox* ScrollBox) {
    return FLinearColor{};
}

EFocusCause UMGBPFLibrary::GetFocusCause(FFocusEvent FocusEvent) {
    return EFocusCause::Mouse;
}

TArray<UUserWidget*> UMGBPFLibrary::GetAllTopLevelWidgets(UObject* WorldContextObject) {
    return TArray<UUserWidget*>();
}

void UMGBPFLibrary::FlushUMGAnimations(UObject* WorldContextObject) {
}


