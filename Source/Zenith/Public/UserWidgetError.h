#pragma once
#include "CoreMinimal.h"
#include "UserWidgetNavigable.h"
#include "UserWidgetError.generated.h"

UCLASS(Abstract, EditInlineNew)
class ZENITH_API UUserWidgetError : public UUserWidgetNavigable {
    GENERATED_BODY()
public:
    UUserWidgetError();
protected:
    UFUNCTION(BlueprintPure)
    bool ShouldReturnToTitle() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetErrorMessage(const FText& Title, const FText& Message);
    
};

