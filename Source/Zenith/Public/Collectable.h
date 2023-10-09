#pragma once
#include "CoreMinimal.h"
#include "ReusableActor.h"
#include "Collectable.generated.h"

class APlayerController;

UCLASS(Abstract)
class ZENITH_API ACollectable : public AReusableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bAutoCollectOnActivate;
    
public:
    ACollectable();
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrantDrop();
    
private:
    UFUNCTION()
    void OnGameMapSwitch();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCollect(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    bool IsDropGranted() const;
    
    UFUNCTION(BlueprintCallable)
    void GrantDrop();
    
    UFUNCTION(BlueprintPure)
    int32 GetExperienceValue() const;
    
    UFUNCTION(BlueprintPure)
    APlayerController* GetCollectingPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    void Collect(APlayerController* PlayerController);
    
};

