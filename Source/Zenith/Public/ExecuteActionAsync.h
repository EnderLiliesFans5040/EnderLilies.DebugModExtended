#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommandActionOutputPinDelegate.h"
#include "Templates/SubclassOf.h"
#include "ExecuteActionAsync.generated.h"

class UCommandAction;
class UCommandQueueComponent;
class UExecuteActionAsync;
class UObject;

UCLASS(Blueprintable)
class ZENITH_API UExecuteActionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandActionOutputPin OnFinish;
    
    UExecuteActionAsync();

private:
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UExecuteActionAsync* ExecuteActionAsync(const UObject* WorldContextObject, UCommandQueueComponent* CommandQueueComponent, const TSubclassOf<UCommandAction>& CommandActionClass);
    
};

