#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "ERichTextDecoratorMode.h"
#include "EInputStyle.h"
#include "InputRichTextBlockImageDecorator.generated.h"

class UDataTable;

UCLASS(Abstract)
class ZENITH_API UInputRichTextBlockImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ERichTextDecoratorMode DecoratorMode;
    
    UPROPERTY(EditAnywhere)
    TMap<EInputStyle, UDataTable*> IconSets;
    
public:
    UInputRichTextBlockImageDecorator();
};

