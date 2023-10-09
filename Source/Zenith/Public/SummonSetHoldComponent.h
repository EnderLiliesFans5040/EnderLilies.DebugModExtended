#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "SummonSetHoldComponent.generated.h"

class UCommandAction;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USummonSetHoldComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommandAction> SummonSetSwitchCommandAction;
    
public:
    USummonSetHoldComponent();
private:
    UFUNCTION()
    void OnSettingsSaved();
    
};

