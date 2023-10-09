#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ConstantForceComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UConstantForceComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FComponentReference TargetComponentReference;
    
    UPROPERTY(EditAnywhere)
    FVector ConstantForce;
    
public:
    UConstantForceComponent();
protected:
    UFUNCTION(BlueprintPure)
    FVector GetConstantForce() const;
    
};

