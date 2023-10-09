#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmulatedFog.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS()
class ZENITH_API AEmulatedFog : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(EditAnywhere)
    bool bInfiniteBounds;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool bActive;
    
public:
    AEmulatedFog();
    UFUNCTION(BlueprintCallable)
    void SetFogActive(bool bNewActive);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivateFog();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateFog();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInfiniteBounds() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFog(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ActivateFog(bool bForce);
    
};

