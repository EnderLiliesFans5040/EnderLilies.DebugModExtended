#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FooterUserWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class ZENITH_API UFooterUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFooterUserWidget();
};

