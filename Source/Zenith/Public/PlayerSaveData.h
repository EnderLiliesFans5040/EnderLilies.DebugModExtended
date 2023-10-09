#pragma once
#include "CoreMinimal.h"
#include "ParameterSaveData.h"
#include "RespawnPointSaveData.h"
#include "HealSaveData.h"
#include "InventorySaveData.h"
#include "PassiveEquipSaveData.h"
#include "SpiritEquipSaveData.h"
#include "PlayerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FRespawnPointSaveData RespawnPoint;
    
    UPROPERTY(BlueprintReadOnly)
    FParameterSaveData Parameters;
    
    UPROPERTY()
    FHealSaveData Heals;
    
    UPROPERTY()
    FInventorySaveData Inventory;
    
    UPROPERTY()
    FSpiritEquipSaveData SpiritEquip;
    
    UPROPERTY()
    FPassiveEquipSaveData PassiveEquip;
    
    UPROPERTY()
    TArray<FName> OpenedGameMapIDs;
    
    UPROPERTY()
    TArray<FName> OpenedAreaIDs;
    
    UPROPERTY()
    TArray<FName> PlayedEventIDs;
    
    UPROPERTY()
    TArray<FName> PreviousRunsPlayedEventIDs;
    
    UPROPERTY()
    TArray<FName> SeenTutorialIDs;
    
    UPROPERTY()
    TArray<FName> RecollectionCheckedIDs;
    
    UPROPERTY()
    int32 MinimapUISizeIndex;
    
    ZENITH_API FPlayerSaveData();
};

