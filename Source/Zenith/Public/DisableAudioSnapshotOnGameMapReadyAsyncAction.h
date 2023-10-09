#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DisableAudioSnapshotOnGameMapReadyAsyncAction.generated.h"

class UDisableAudioSnapshotOnGameMapReadyAsyncAction;
class UObject;

UCLASS()
class ZENITH_API UDisableAudioSnapshotOnGameMapReadyAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UDisableAudioSnapshotOnGameMapReadyAsyncAction();
private:
    UFUNCTION()
    void OnGameMapReady();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDisableAudioSnapshotOnGameMapReadyAsyncAction* DisableAudioSnapshotOnGameMapReady(const UObject* WorldContextObject, bool bConsiderFadeAsLoading, FName AudioSnapshotTag);
    
private:
    UFUNCTION()
    void CheckGameMapReady();
    
};

