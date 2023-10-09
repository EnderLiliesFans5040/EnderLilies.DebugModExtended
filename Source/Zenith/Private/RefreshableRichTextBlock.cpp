#include "RefreshableRichTextBlock.h"

void URefreshableRichTextBlock::SetupAndRefresh(const FText& NewFormat, const TArray<FRichTextFormatElement>& NewFormatElements) {
}

void URefreshableRichTextBlock::SetFormatElements(const TArray<FRichTextFormatElement>& NewFormatElements) {
}

void URefreshableRichTextBlock::SetFormat(const FText& NewFormat) {
}

void URefreshableRichTextBlock::Refresh() {
}

TArray<FRichTextFormatElement> URefreshableRichTextBlock::GetFormatElements() const {
    return TArray<FRichTextFormatElement>();
}

URefreshableRichTextBlock::URefreshableRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
}

