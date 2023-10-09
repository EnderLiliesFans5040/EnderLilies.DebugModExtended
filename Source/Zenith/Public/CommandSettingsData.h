#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommandSettings.h"
#include "CommandSettingsData.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UCommandSettingsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCommandSettings CommandSettings;
    
    UCommandSettingsData();
};

