#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputSnapshot.h"
#include "ZenithInputComponent.generated.h"

class APawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UZenithInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APawn* PawnOwner;
    
    UPROPERTY(Transient)
    FInputSnapshot NextInputSnapshot;
    
    UPROPERTY(Transient)
    FInputSnapshot InputSnapshot;
    
public:
    UPROPERTY(EditAnywhere)
    float MinInputForDirectionType;
    
    UZenithInputComponent();
    UFUNCTION(BlueprintPure)
    FInputSnapshot GetInputSnapshot() const;
    
};

