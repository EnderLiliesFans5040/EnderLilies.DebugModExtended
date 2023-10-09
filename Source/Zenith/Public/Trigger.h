#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trigger.generated.h"

class UClearableComponent;

UCLASS(Abstract)
class ZENITH_API ATrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(EditAnywhere)
    bool bIsRepeatable;
    
    UPROPERTY(EditAnywhere)
    float MinDelayBetweenRepeat;
    
public:
    ATrigger();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggerAlreadyCleared();
    
private:
    UFUNCTION()
    void OnClearedStatusChecked(bool bCleared);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkAsTriggered();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanTrigger() const;
    
};

