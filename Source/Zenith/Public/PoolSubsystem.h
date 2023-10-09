#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PoolSubsystem.generated.h"

class UPoolSystem;

UCLASS(BlueprintType)
class ZENITH_API UPoolSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPoolSystem* PoolSystem;
    
public:
    UPoolSubsystem();
    UFUNCTION(BlueprintPure)
    UPoolSystem* GetPoolSystem() const;
    
};

