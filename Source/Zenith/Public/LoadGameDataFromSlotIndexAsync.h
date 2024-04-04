#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LoadGameDataFromSlotIndexDelegateDelegate.h"
#include "LoadGameDataFromSlotIndexAsync.generated.h"

class ULoadGameDataFromSlotIndexAsync;
class UObject;
class USaveGame;

UCLASS(Blueprintable)
class ZENITH_API ULoadGameDataFromSlotIndexAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGame* LoadedSaveData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadGameDataFromSlotIndexDelegate OnFinish;
    
    ULoadGameDataFromSlotIndexAsync();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadGameDataFromSlotIndexAsync* LoadGameDataFromSlotIndexAsync(UObject* WorldContextObject, const int32 SlotIndex, bool bUseExclusiveMode);
    
};

