#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Breakable.generated.h"

class USceneComponent;
class UHPComponent;
class UClearableComponent;

UCLASS(Abstract)
class ZENITH_API ABreakable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHPComponent* HPComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bMarkClearedOnDeath;
    
public:
    ABreakable();
private:
    UFUNCTION()
    void OnDeath(AActor* From);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreak();
    
};

