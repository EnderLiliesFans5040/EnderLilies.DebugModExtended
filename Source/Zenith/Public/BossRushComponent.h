#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossRushRecordData.h"
#include "BossRushComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UBossRushComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBossRushComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnbindEvents();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 TryAddNewRecord(const FBossRushRecordData& NewRecordData);
    
    UFUNCTION(BlueprintCallable)
    void StartBossRush();
    
    UFUNCTION(BlueprintCallable)
    void ResetRecords();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBossRush();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRespawn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossRushActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBossRushRecordData GetRecordData(const int32 RecordIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossRushTime() const;
    
    UFUNCTION(BlueprintCallable)
    void EndBossRush();
    
    UFUNCTION(BlueprintCallable)
    void ClearBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUpdateTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindEvents();
    
};

