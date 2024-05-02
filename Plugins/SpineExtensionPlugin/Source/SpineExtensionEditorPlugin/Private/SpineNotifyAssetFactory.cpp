#include "SpineNotifyAssetFactory.h"
#include "SpineNotifyAsset.h"

USpineNotifyAssetFactory::USpineNotifyAssetFactory()
{
    SupportedClass = USpineNotifyAsset::StaticClass();
    bCreateNew = true;
}

UObject* USpineNotifyAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<USpineNotifyAsset>(InParent, Class, Name, Flags, Context);
}
