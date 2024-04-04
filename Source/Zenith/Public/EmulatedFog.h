#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmulatedFog.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ZENITH_API AEmulatedFog : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AEmulatedFog(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFogActive(bool bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivateFog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateFog();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfiniteBounds() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFog(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ActivateFog(bool bForce);
    
};

