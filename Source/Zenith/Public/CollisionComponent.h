#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "CollisionEventDelegate.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "CollisionComponent.generated.h"

class AZenithCharacter;
class UState;
class UStateComponent;
class UPrimitiveComponent;
class UFactionComponent;
class UCharacterMovementComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FComponentReference> HurtboxReferences;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FComponentReference> HitboxReferences;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldProcessOverlapContacts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> ContactDamageSkipStates;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreOneWayPlatform;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreWorldDynamic;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanBeJustGuarded;
    
    UPROPERTY(EditDefaultsOnly)
    bool bExecuteGotJustGuardedEvents;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanBeParried;
    
    UPROPERTY(EditDefaultsOnly)
    bool bExecuteParriedEvents;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> Hurtboxes;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> Hitboxes;
    
    UPROPERTY(Instanced, Transient)
    UPrimitiveComponent* RootPrimitiveComponent;
    
    UPROPERTY(Instanced, Transient)
    UCharacterMovementComponent* CharacterMovementComponent;
    
    UPROPERTY(Instanced, Transient)
    UFactionComponent* FactionComponent;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Transient)
    TMap<AZenithCharacter*, int32> OverlappingCharacters2;
    
    UPROPERTY(BlueprintAssignable)
    FCollisionEvent OnOverlapEnemyPawn;
    
    UPROPERTY(BlueprintAssignable)
    FCollisionEvent OnContactDamage;
    
public:
    UCollisionComponent();
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToPawnChannels(TEnumAsByte<ECollisionResponse> CollisionResponse, bool bAsDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToChannels(TEnumAsByte<ECollisionResponse> CollisionResponseToAllChannels, TEnumAsByte<ECollisionResponse> CollisionResponseToWorldStaticChannel, bool bAsDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionProfile(const FName& NewCollisionProfileName);
    
    UFUNCTION(BlueprintCallable)
    void RevertCollisionResponseToPawnChannels();
    
private:
    UFUNCTION()
    void OnStateRemoved();
    
    UFUNCTION()
    void OnStateAdded();
    
    UFUNCTION()
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

