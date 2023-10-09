#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "EAptitudeType.h"
#include "ItemAptitudeData.generated.h"

USTRUCT(BlueprintType)
struct FItemAptitudeData : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInitialAptitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAptitudeType Aptitude;
    
    ZENITH_API FItemAptitudeData();
};

