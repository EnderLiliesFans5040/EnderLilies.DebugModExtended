#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EEnemySpawnPointClearTiming.h"
#include "EnemySpawnPointEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EnemySpawnPoint.generated.h"

class UClearableComponent;
class AZenithCharacter;
class AAIController;
class AController;

UCLASS()
class ZENITH_API AEnemySpawnPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnemySpawnPointEvent OnEnemySpawnDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEnemySpawnPointEvent OnEnemyActivateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEnemySpawnPointEvent OnEnemyDeathStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEnemySpawnPointEvent OnEnemyDeathDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AZenithCharacter> CharacterToSpawn;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AAIController> ControllerOverride;
    
    UPROPERTY(EditAnywhere)
    bool bShouldActivateByDefault;
    
    UPROPERTY(EditAnywhere)
    EEnemySpawnPointClearTiming MarkClearTiming;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LockDifficultyLevelOfAreasOnClear;
    
    UPROPERTY(EditAnywhere)
    bool bAddDifficultyLevelOnClear;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> BlackboardOverride_Bool;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> BlackboardOverride_Float;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> BlackboardOverride_Vector;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, AActor*> BlackboardOverride_Actor;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHOOK_ConsiderAsBossSpawn;
    
public:
    AEnemySpawnPoint();
    UFUNCTION(BlueprintCallable)
    void OverrideEnemySpawned(AZenithCharacter* NewEnemy);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnregisterEnemy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnPointAlreadyCleared(bool bHasPreviousDeathTransform, FTransform PreviousDeathTransform);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRegisterEnemy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOverrideEnemySpawned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnemySpawn();
    
private:
    UFUNCTION()
    void OnEnemyRespawn();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnemyDeathStart();
    
private:
    UFUNCTION()
    void OnEnemyDeathProcessStart();
    
    UFUNCTION()
    void OnEnemyDeathProcessEnd();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnemyDeath();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnemyActivate();
    
private:
    UFUNCTION()
    void OnClearedStatusChecked(bool bCleared);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplyBlackboardOverride();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnemySpawned() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnemyActivated() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetEnemyController() const;
    
    UFUNCTION(BlueprintPure)
    AZenithCharacter* GetEnemy() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateEnemy();
    
};

