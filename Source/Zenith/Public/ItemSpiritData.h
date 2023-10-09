#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "Engine/DataTable.h"
#include "EItemSpiritType.h"
#include "ItemSpiritData.generated.h"

class UDataTable;
class AZenithCompanionCharacter;

USTRUCT(BlueprintType)
struct FItemSpiritData : public FBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EItemSpiritType ItemSpiritType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* SpiritLevelTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInitialSpirit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBossSpirit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AZenithCompanionCharacter> CompanionClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LayerPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle AptitudeToUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle AptitudeToUnlockTutorial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SecondaryAptitudeToUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SecondaryAptitudeToUnlockTutorial;
    
    ZENITH_API FItemSpiritData();
};

