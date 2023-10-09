#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseItemData.h"
#include "ItemPassiveData.generated.h"

class UPassive;

USTRUCT(BlueprintType)
struct FItemPassiveData : public FBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPassive> PassiveClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAvailableInGame;
    
    ZENITH_API FItemPassiveData();
};

