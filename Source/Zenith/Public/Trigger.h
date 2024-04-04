#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trigger.generated.h"

class UClearableComponent;

UCLASS(Abstract, Blueprintable)
class ZENITH_API ATrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelayBetweenRepeat;
    
public:
    ATrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerAlreadyCleared();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClearedStatusChecked(bool bCleared);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkAsTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanTrigger() const;
    
};

