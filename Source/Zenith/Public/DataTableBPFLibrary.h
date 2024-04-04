#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "AchievementData.h"
#include "BaseItemData.h"
#include "ECommandSummonLimitType.h"
#include "EItemSpiritType.h"
#include "ERecollectionItemType.h"
#include "GameMapData.h"
#include "ItemPassiveData.h"
#include "ItemSpiritData.h"
#include "ItemTipData.h"
#include "RecollectionItemData.h"
#include "TutorialDialogData.h"
#include "DataTableBPFLibrary.generated.h"

class AZenithPlayerController;

UCLASS(Blueprintable)
class UDataTableBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataTableBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FDataTableRowHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialDialogData(const FDataTableRowHandle& Handle, FTutorialDialogData& out_TutorialDialogDataData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSpiritDataInfos(AZenithPlayerController* ZPlayerController, const FDataTableRowHandle& ItemSpiritDataHandle, bool bIgnoreLevelOverride, EItemSpiritType& out_ItemSpiritType, ECommandSummonLimitType& out_CastLimitType, int32& out_CastCount, float& out_RecastTime, bool& out_bUnderwater);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRecollectionItemData(const FDataTableRowHandle& Handle, ERecollectionItemType RecollectionItemType, FRecollectionItemData& out_RecollectionItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemTipData(const FDataTableRowHandle& Handle, FItemTipData& out_ItemTipData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemSpiritData(const FDataTableRowHandle& Handle, FItemSpiritData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemPassiveData(const FDataTableRowHandle& Handle, FItemPassiveData& out_ItemPassiveData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameMapData(const FDataTableRowHandle& Handle, FGameMapData& out_GameMapData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBaseItemData(const FDataTableRowHandle& Handle, FBaseItemData& out_ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievementData(const FDataTableRowHandle& Handle, FAchievementData& out_AchievementData);
    
};

