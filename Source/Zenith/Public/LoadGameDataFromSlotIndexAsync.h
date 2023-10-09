#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LoadGameDataFromSlotIndexDelegateDelegate.h"
#include "LoadGameDataFromSlotIndexAsync.generated.h"

class USaveGame;
class ULoadGameDataFromSlotIndexAsync;
class UObject;

UCLASS()
class ZENITH_API ULoadGameDataFromSlotIndexAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USaveGame* LoadedSaveData;
    
public:
    UPROPERTY(BlueprintAssignable)
    FLoadGameDataFromSlotIndexDelegate OnFinish;
    
    ULoadGameDataFromSlotIndexAsync();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadGameDataFromSlotIndexAsync* LoadGameDataFromSlotIndexAsync(UObject* WorldContextObject, const int32 SlotIndex, bool bUseExclusiveMode);
    
};

