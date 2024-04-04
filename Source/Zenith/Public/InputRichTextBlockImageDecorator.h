#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "EInputStyle.h"
#include "ERichTextDecoratorMode.h"
#include "InputRichTextBlockImageDecorator.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UInputRichTextBlockImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERichTextDecoratorMode DecoratorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputStyle, UDataTable*> IconSets;
    
public:
    UInputRichTextBlockImageDecorator();

};

