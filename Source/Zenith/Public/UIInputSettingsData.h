#pragma once
#include "CoreMinimal.h"
#include "UIBinding.h"
#include "EUIInputTypes.h"
#include "UIInputSettingsData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FUIInputSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UPROPERTY()
    TMap<EUIInputTypes, FUIBinding> BindingsForUI;
    
    FUIInputSettingsData();
};

