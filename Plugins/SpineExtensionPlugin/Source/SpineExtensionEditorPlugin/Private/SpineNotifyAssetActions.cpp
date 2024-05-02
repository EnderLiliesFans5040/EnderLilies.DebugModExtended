#include "SpineNotifyAssetActions.h"
#include "SpineNotifyAsset.h"

UClass* FSpineNotifyAssetTypeActions::GetSupportedClass() const
{
    return USpineNotifyAsset::StaticClass();
}

FText FSpineNotifyAssetTypeActions::GetName() const
{
    return INVTEXT("Ender Spine Notify Asset");
}

FColor FSpineNotifyAssetTypeActions::GetTypeColor() const
{
    return FColor::Cyan;
}

uint32 FSpineNotifyAssetTypeActions::GetCategories()
{
    return EAssetTypeCategories::Misc;
}
