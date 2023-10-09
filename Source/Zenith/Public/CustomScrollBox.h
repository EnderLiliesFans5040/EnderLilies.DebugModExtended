#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "CustomScrollBox.generated.h"

class UNativeWidgetHost;

UCLASS()
class UCustomScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UCustomScrollBox();
    UFUNCTION(BlueprintCallable)
    void ScrollWidgetHostIntoView(UNativeWidgetHost* NativeWidgetHost, bool InAnimateScroll, EDescendantScrollDestination InDestination, float InScrollPadding);
    
};

