#include "RefreshableRichTextBlock.h"

URefreshableRichTextBlock::URefreshableRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->DecoratorClasses.AddDefaulted(1);
    this->Format = FText::FromString(TEXT("{0}"));
}

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


