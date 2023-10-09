#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommandSettings.h"
#include "ECommandInputTypes.h"
#include "CommandSet.generated.h"

class UCommandSettingsData;

UCLASS(BlueprintType)
class ZENITH_API UCommandSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<UCommandSettingsData*> CommandDataList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCommandSettings> Commands;
    
public:
    UCommandSet();
    UFUNCTION(BlueprintCallable)
    void RemoveCommand(int32 RuntimeID);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveAllCommandsForInputType(ECommandInputTypes InputType);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCommand(FCommandSettings CommandSettings);
    
};

