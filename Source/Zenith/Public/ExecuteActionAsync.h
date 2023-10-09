#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommandActionOutputPinDelegate.h"
#include "ExecuteActionAsync.generated.h"

class UCommandAction;
class UExecuteActionAsync;
class UCommandQueueComponent;
class UObject;

UCLASS()
class ZENITH_API UExecuteActionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCommandActionOutputPin OnFinish;
    
    UExecuteActionAsync();
private:
    UFUNCTION()
    void Update();
    
    UFUNCTION()
    void Finish();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UExecuteActionAsync* ExecuteActionAsync(const UObject* WorldContextObject, UCommandQueueComponent* CommandQueueComponent, const TSubclassOf<UCommandAction>& CommandActionClass);
    
};

