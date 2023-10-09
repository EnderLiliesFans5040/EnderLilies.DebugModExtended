#pragma once
#include "CoreMinimal.h"
#include "RegenerativeParamComponent.h"
#include "KnockbackRuntimeData.h"
#include "StaminaComponent.generated.h"

class UKnockbackComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UStaminaComponent : public URegenerativeParamComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UKnockbackComponent* KnockbackComponent;
    
public:
    UStaminaComponent();
private:
    UFUNCTION()
    void OnKnockbackEnd(FKnockbackRuntimeData KnockbackRuntimeData);
    
};

