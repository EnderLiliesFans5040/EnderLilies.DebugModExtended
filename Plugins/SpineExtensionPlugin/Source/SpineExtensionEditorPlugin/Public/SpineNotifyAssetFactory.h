#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SpineNotifyAssetFactory.generated.h"

UCLASS()
class USpineNotifyAssetFactory : public UFactory
{
    GENERATED_BODY()
public:
    USpineNotifyAssetFactory();
    UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
