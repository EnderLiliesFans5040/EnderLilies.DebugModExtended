#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.h"
#include "ItemData.h"
#include "ItemAptitudeData.generated.h"

USTRUCT(BlueprintType)
struct FItemAptitudeData : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialAptitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAptitudeType Aptitude;
    
    ZENITH_API FItemAptitudeData();
};

