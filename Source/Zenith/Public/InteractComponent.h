#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ECommandRemoveTypes.h"
#include "Engine/EngineTypes.h"
#include "InteractComponent.generated.h"

class APawn;
class UState;
class AActor;
class UCommandAction;
class USphereComponent;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UInteractComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float Radius;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> ForbiddenStates;
    
    UPROPERTY(Instanced, Transient)
    USphereComponent* SphereComponent;
    
    UPROPERTY(Transient)
    APawn* PawnOwner;
    
public:
    UInteractComponent();
private:
    UFUNCTION()
    void OnStartCommand(UCommandAction* CommandAction);
    
    UFUNCTION()
    void OnEndCommand(UCommandAction* CommandAction, ECommandRemoveTypes RemoveType);
    
    UFUNCTION()
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

