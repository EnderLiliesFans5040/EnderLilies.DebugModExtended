#pragma once
#include "CoreMinimal.h"
#include "RegenerativeParamComponent.h"
#include "KnockbackData.h"
#include "StunComponent.generated.h"

class UCommandQueueComponent;
class UKnockbackComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UStunComponent : public URegenerativeParamComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FKnockbackData StunKnockbackData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bGenerateAirLaunchVector;
    
    UPROPERTY(Instanced, Transient)
    UCommandQueueComponent* CommandComponent;
    
    UPROPERTY(Instanced, Transient)
    UKnockbackComponent* KnockbackComponent;
    
public:
    UStunComponent();
};

