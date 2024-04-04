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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRichTextFormatElement> FormatElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* Video;
    
    ZENITH_API FTutorialDialogData();
};

