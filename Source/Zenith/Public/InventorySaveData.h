#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "InventorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FInventorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> ItemGenerics;
    
    UPROPERTY()
    TArray<FName> ItemParameters;
    
    UPROPERTY()
    TArray<FName> ItemSpirits;
    
    UPROPERTY()
    TMap<FName, int32> ItemSpiritLevels;
    
    UPROPERTY()
    TArray<FName> ItemSpiritCheckedStatus;
    
    UPROPERTY()
    TArray<FName> ItemAptitudes;
    
    UPROPERTY()
    TArray<FName> ItemPassives;
    
    UPROPERTY()
    TArray<FName> ItemPassiveCheckedStatus;
    
    UPROPERTY()
    TArray<FName> ItemTips;
    
    UPROPERTY()
    TMap<FName, bool> ItemTipsReadStatus;
    
    UPROPERTY()
    TMap<ECurrencyType, int32> Currencies;
    
    ZENITH_API FInventorySaveData();
};

