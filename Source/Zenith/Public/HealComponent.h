#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealEventDelegate.h"
#include "HealComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHealComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnUseHealDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnRestoreHealDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnFullyRestoreHealsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnHealCountLevelChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnHealCountChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnHealPowerLevelChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealCountLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealCountBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPowerPercentageBonus;
    
public:
    UHealComponent(const FObjectInitializer& ObjectInitializer);

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
    
    UFUNCTION(BlueprintCallable)
    void PlayerCantHealChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealCountMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingHealCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHealPowerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHealCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHealValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHealPowerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

