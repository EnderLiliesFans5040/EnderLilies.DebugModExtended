#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "RichTextFormatElement.h"
#include "RefreshableRichTextBlock.generated.h"

UCLASS()
class ZENITH_API URefreshableRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FText Format;
    
    UPROPERTY(EditAnywhere)
    TArray<FRichTextFormatElement> FormatElements;
    
public:
    URefreshableRichTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetupAndRefresh(const FText& NewFormat, const TArray<FRichTextFormatElement>& NewFormatElements);
    
    UFUNCTION(BlueprintCallable)
    void SetFormatElements(const TArray<FRichTextFormatElement>& NewFormatElements);
    
    UFUNCTION(BlueprintCallable)
    void SetFormat(const FText& NewFormat);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintPure)
    TArray<FRichTextFormatElement> GetFormatElements() const;
    
};

