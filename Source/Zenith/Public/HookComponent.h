#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAptitudeType.h"
#include "Engine/EngineTypes.h"
#include "HookComponent.generated.h"

class AActor;
class ACharacter;
class USphereComponent;
class AHookPoint;
class UPrimitiveComponent;
class UZenithInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHookComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USphereComponent* SphereComponent;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float SphereRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MinHookDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreHookPointBelowActor;
    
    UPROPERTY(EditDefaultsOnly)
    float HookPointBelowActorDistanceWeightMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    EAptitudeType NecessaryAptitude;
    
    UPROPERTY(Transient)
    ACharacter* CharacterOwner;
    
    UPROPERTY(Instanced, Transient)
    UZenithInputComponent* InputComponent;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AHookPoint>> HookPoints;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AHookPoint> CurrentHookPoint;
    
public:
    UHookComponent();
    UFUNCTION(BlueprintCallable)
    void UnlockHook();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnlockHook(AHookPoint* HookPoint);
    
private:
    UFUNCTION()
    void OnUnlockAptitude();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockHook(AHookPoint* HookPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookChanged();
    
private:
    UFUNCTION()
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockCurrentHook();
    
    UFUNCTION(BlueprintPure)
    AHookPoint* GetCurrentHookPoint() const;
    
};

