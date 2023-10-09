#pragma once
#include "CoreMinimal.h"
#include "EUIInputTypes.h"
#include "ERichTextFormatType.h"
#include "ECommandInputTypes.h"
#include "EDirectionInputTypes.h"
#include "UObject/NoExportTypes.h"
#include "RichTextFormatElement.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FRichTextFormatElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERichTextFormatType FormatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDirectionInputTypes DirectionInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECommandInputTypes CommandInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUIInputTypes UIInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CustomInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bVerticalCenter;
    
    FRichTextFormatElement();
};

