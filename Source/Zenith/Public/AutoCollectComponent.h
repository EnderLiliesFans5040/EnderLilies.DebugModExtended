#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AutoCollectComponent.generated.h"

class AActor;
class USphereComponent;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAutoCollectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float Radius;
    
    UPROPERTY(Instanced, Transient)
    USphereComponent* SphereComponent;
    
public:
    UAutoCollectComponent();
private:
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

