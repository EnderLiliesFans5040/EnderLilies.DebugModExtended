#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "TargetComponent.generated.h"

class AActor;
class USphereComponent;
class UPrimitiveComponent;
class UZenithInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNeedLineOfSight;
    
protected:
    UPROPERTY(Instanced)
    USphereComponent* SphereComponent;
    
private:
    UPROPERTY(Instanced)
    UZenithInputComponent* InputComponent;
    
    UPROPERTY()
    TArray<AActor*> Targets;
    
    UPROPERTY()
    AActor* CurrentTarget;
    
public:
    UTargetComponent();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetChanged();
    
private:
    UFUNCTION()
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentTarget() const;
    
};

