#include "DataTableBPFLibrary.h"

UDataTableBPFLibrary::UDataTableBPFLibrary() {
}

bool UDataTableBPFLibrary::IsValid(const FDataTableRowHandle& Handle) {
    return false;
}

bool UDataTableBPFLibrary::GetTutorialDialogData(const FDataTableRowHandle& Handle, FTutorialDialogData& out_TutorialDialogDataData) {
    return false;
}

bool UDataTableBPFLibrary::GetSpiritDataInfos(AZenithPlayerController* ZPlayerController, const FDataTableRowHandle& ItemSpiritDataHandle, bool bIgnoreLevelOverride, EItemSpiritType& out_ItemSpiritType, ECommandSummonLimitType& out_CastLimitType, int32& out_CastCount, float& out_RecastTime, bool& out_bUnderwater) {
    return false;
}

bool UDataTableBPFLibrary::GetRecollectionItemData(const FDataTableRowHandle& Handle, ERecollectionItemType RecollectionItemType, FRecollectionItemData& out_RecollectionItemData) {
    return false;
}

bool UDataTableBPFLibrary::GetItemTipData(const FDataTableRowHandle& Handle, FItemTipData& out_ItemTipData) {
    return false;
}

bool UDataTableBPFLibrary::GetItemSpiritData(const FDataTableRowHandle& Handle, FItemSpiritData& out_ItemData) {
    return false;
}

bool UDataTableBPFLibrary::GetItemPassiveData(const FDataTableRowHandle& Handle, FItemPassiveData& out_ItemPassiveData) {
    return false;
}

bool UDataTableBPFLibrary::GetGameMapData(const FDataTableRowHandle& Handle, FGameMapData& out_GameMapData) {
    return false;
}

bool UDataTableBPFLibrary::GetBaseItemData(const FDataTableRowHandle& Handle, FBaseItemData& out_ItemData) {
    return false;
}

bool UDataTableBPFLibrary::GetAchievementData(const FDataTableRowHandle& Handle, FAchievementData& out_AchievementData) {
    return false;
}


