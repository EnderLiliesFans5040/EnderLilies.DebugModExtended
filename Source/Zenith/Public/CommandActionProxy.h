#pragma once
#include "CoreMinimal.h"
#include "CommandAction.h"
#include "CommandActionProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandActionProxy : public UCommandAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandAction* CurrentCommandAction;
    
public:
    UCommandActionProxy();

};

