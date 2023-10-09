#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealEventDelegate.h"
#include "HealComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHealComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealEvent OnUseHealDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FHealEvent OnRestoreHealDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FHealEvent OnFullyRestoreHealsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FHealEvent OnHealCountLevelChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FHealEvent OnHealCountChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FHealEvent OnHealPowerLevelChangedDelegate;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxHealCountLevel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxHealPowerLevel;
    
    UPROPERTY(VisibleAnywhere)
    int32 HealCountBonus;
    
    UPROPERTY(VisibleAnywhere)
    float HealPowerPercentageBonus;
    
public:
    UHealComponent();
    UFUNCTION(BlueprintCallable)
    void UseHeal();
    
    UFUNCTION(BlueprintCallable)
    float SubHealPowerPercentageBonus(float HealPercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    int32 SubHealCountBonus(int32 HealCountBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    int32 SetHealPowerLevel(int32 NewHealPowerLevel);
    
    UFUNCTION(BlueprintCallable)
    int32 SetHealCountLevel(int32 NewHealCountLevel);
    
    UFUNCTION(BlueprintCallable)
    bool RestoreHeal();
    
    UFUNCTION()
    void PlayerCantHealChanged();
    
    UFUNCTION(BlueprintPure)
    bool IsHealCountMax() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingHealCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxHealPowerLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxHealCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHealValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHealPowerLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHealCountLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool FullyRestoreHeals();
    
    UFUNCTION(BlueprintCallable)
    float AddHealPowerPercentageBonus(float HealPercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddHealPowerLevel();
    
    UFUNCTION(BlueprintCallable)
    void AddHealCountLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 AddHealCountBonus(int32 HealCountBonusToAdd);
    
};

