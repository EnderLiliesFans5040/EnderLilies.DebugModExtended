#pragma once
#include "CoreMinimal.h"
#include "EUIInputTypes.h"
#include "UIBinding.h"
#include "UIInputSettingsData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FUIInputSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIInputTypes, FUIBinding> BindingsForUI;
    
    FUIInputSettingsData();
};

