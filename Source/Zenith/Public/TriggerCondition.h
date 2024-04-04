#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TriggerCondition.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class UTriggerCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContext;
    
public:
    UTriggerCondition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckCondition(APlayerController* PlayerController) const;
    
};

