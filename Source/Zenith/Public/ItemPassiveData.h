#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "Templates/SubclassOf.h"
#include "ItemPassiveData.generated.h"

class UPassive;

USTRUCT(BlueprintType)
struct FItemPassiveData : public FBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPassive> PassiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvailableInGame;
    
    ZENITH_API FItemPassiveData();
};

