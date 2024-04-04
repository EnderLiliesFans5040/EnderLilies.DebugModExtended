#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ActionBinding.h"
#include "AxisBinding.h"
#include "EInputStyle.h"
#include "ESoundFamily.h"
#include "GameSettingsData.h"
#include "UIInputSettingsData.h"
#include "SaveSettings.generated.h"

UCLASS(Blueprintable)
class ZENITH_API USaveSettings : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActionBinding> BindingsForActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAxisBinding> BindingsForAxises;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputStyle InputStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIInputSettingsData UIInputSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSettingsData GameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundFamily, float> VolumeForSoundFamilies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializationCompleted;
    
    USaveSettings();

};

