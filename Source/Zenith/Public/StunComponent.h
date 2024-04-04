#pragma once
#include "CoreMinimal.h"
#include "KnockbackData.h"
#include "RegenerativeParamComponent.h"
#include "StunComponent.generated.h"

class UCommandQueueComponent;
class UKnockbackComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UStunComponent : public URegenerativeParamComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackData StunKnockbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateAirLaunchVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommandQueueComponent* CommandComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKnockbackComponent* KnockbackComponent;
    
public:
    UStunComponent(const FObjectInitializer& ObjectInitializer);

};

