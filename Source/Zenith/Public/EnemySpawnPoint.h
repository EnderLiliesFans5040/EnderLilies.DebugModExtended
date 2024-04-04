#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EEnemySpawnPointClearTiming.h"
#include "EnemySpawnPointEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "EnemySpawnPoint.generated.h"

class AAIController;
class AController;
class AZenithCharacter;
class UClearableComponent;

UCLASS(Blueprintable)
class ZENITH_API AEnemySpawnPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnPointEvent OnEnemySpawnDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnPointEvent OnEnemyActivateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnPointEvent OnEnemyDeathStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnPointEvent OnEnemyDeathDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZenithCharacter> CharacterToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIController> ControllerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldActivateByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemySpawnPointClearTiming MarkClearTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LockDifficultyLevelOfAreasOnClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddDifficultyLevelOnClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BlackboardOverride_Bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BlackboardOverride_Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> BlackboardOverride_Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> BlackboardOverride_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHOOK_ConsiderAsBossSpawn;
    
public:
    AEnemySpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverrideEnemySpawned(AZenithCharacter* NewEnemy);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnregisterEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnPointAlreadyCleared(bool bHasPreviousDeathTransform, FTransform PreviousDeathTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegisterEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverrideEnemySpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemySpawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnemyRespawn();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDeathStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnemyDeathProcessStart();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDeathProcessEnd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyActivate();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClearedStatusChecked(bool bCleared);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyBlackboardOverride();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemySpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetEnemyController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZenithCharacter* GetEnemy() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateEnemy();
    
};

