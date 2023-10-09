#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReusableActor.generated.h"

UCLASS()
class ZENITH_API AReusableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bDeactivateOnBeginPlay;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCollisionOnActivate;
    
    AReusableActor();
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

