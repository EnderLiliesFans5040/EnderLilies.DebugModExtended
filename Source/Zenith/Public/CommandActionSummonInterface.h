#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "CommandActionSummonInterface.generated.h"

class AZenithSpirit;

UINTERFACE(Blueprintable)
class UCommandActionSummonInterface : public UInterface {
    GENERATED_BODY()
};

class ICommandActionSummonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<AZenithSpirit> GetSpiritClass() const;
    
};

