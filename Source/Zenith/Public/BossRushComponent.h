#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossRushRecordData.h"
#include "BossRushComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UBossRushComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBossRushComponent();
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartBossRush();
    
private:
    UFUNCTION()
    void OnPlayerRespawn();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMapSwitch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndBossRush();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClearBossRush();
    
    UFUNCTION(BlueprintPure)
    bool IsBossRushActive() const;
    
    UFUNCTION(BlueprintPure)
    FBossRushRecordData GetRecordData(const int32 RecordIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetBossRushTime() const;
    
    UFUNCTION(BlueprintCallable)
    void EndBossRush();
    
    UFUNCTION(BlueprintCallable)
    void ClearBossRush();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanUpdateTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindEvents();
    
};

