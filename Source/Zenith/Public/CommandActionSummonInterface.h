#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "CommandActionSummonInterface.generated.h"

class AZenithSpirit;

UINTERFACE(Blueprintable)
class UCommandActionSummonInterface : public UInterface {
    GENERATED_BODY()
};

class ICommandActionSummonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<AZenithSpirit> GetSpiritClass() const;
    
};

