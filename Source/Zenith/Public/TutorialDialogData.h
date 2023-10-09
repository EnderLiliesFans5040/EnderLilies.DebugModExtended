#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RichTextFormatElement.h"
#include "TutorialDialogData.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FTutorialDialogData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Message;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FRichTextFormatElement> FormatElements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMediaSource* Video;
    
    ZENITH_API FTutorialDialogData();
};

