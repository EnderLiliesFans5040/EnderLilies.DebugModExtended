#pragma once
#include "CoreMinimal.h"
#include "FMODProjectLocale.generated.h"

USTRUCT(BlueprintType)
struct FFMODProjectLocale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocaleName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocaleCode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefault;
    
    FMODSTUDIO_API FFMODProjectLocale();
};

