#pragma once
#include "CoreMinimal.h"
#include "CommandAction.h"
#include "CommandActionProxy.generated.h"

UCLASS(Abstract)
class ZENITH_API UCommandActionProxy : public UCommandAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCommandAction* CurrentCommandAction;
    
public:
    UCommandActionProxy();
};

