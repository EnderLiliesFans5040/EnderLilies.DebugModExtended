#pragma once
#include "CoreMinimal.h"
#include "ESoundFamily.h"
#include "GameFramework/SaveGame.h"
#include "UIInputSettingsData.h"
#include "EInputStyle.h"
#include "ActionBinding.h"
#include "AxisBinding.h"
#include "GameSettingsData.h"
#include "SaveSettings.generated.h"

UCLASS()
class ZENITH_API USaveSettings : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Language;
    
    UPROPERTY()
    TMap<FName, FActionBinding> BindingsForActions;
    
    UPROPERTY()
    TMap<FName, FAxisBinding> BindingsForAxises;
    
    UPROPERTY()
    EInputStyle InputStyle;
    
    UPROPERTY()
    FUIInputSettingsData UIInputSettingsData;
    
    UPROPERTY()
    FGameSettingsData GameSettings;
    
    UPROPERTY()
    TMap<ESoundFamily, float> VolumeForSoundFamilies;
    
    UPROPERTY()
    bool bInitializationCompleted;
    
    USaveSettings();
};

