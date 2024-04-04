#pragma once
#include "CoreMinimal.h"
#include "KnockbackRuntimeData.h"
#include "RegenerativeParamComponent.h"
#include "StaminaComponent.generated.h"

class UKnockbackComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UStaminaComponent : public URegenerativeParamComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKnockbackComponent* KnockbackComponent;
    
public:
    UStaminaComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnKnockbackEnd(FKnockbackRuntimeData KnockbackRuntimeData);
    
};

