#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PoolSubsystem.generated.h"

class UPoolSystem;

UCLASS(Blueprintable)
class ZENITH_API UPoolSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoolSystem* PoolSystem;
    
public:
    UPoolSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPoolSystem* GetPoolSystem() const;
    
};

