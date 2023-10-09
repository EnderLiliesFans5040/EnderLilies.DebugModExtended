#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NextComboAction.h"
#include "CommandActionProxy.h"
#include "KnockbackRuntimeData.h"
#include "ECommandRemoveTypes.h"
#include "CommandActionCombo.generated.h"

class UCommandActionComboEntry;
class UCommandAction;

UCLASS(Abstract)
class ZENITH_API UCommandActionCombo : public UCommandActionProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FNextComboAction> NextCombos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ResetComboOnInputs;
    
protected:
    UPROPERTY(Transient)
    TMap<TSubclassOf<UCommandActionComboEntry>, UCommandActionComboEntry*> CommandActionInstances;
    
    UPROPERTY(Transient)
    UCommandActionComboEntry* CurrDefinition;
    
    UPROPERTY(Transient)
    UCommandActionComboEntry* NextDefinition;
    
    UPROPERTY(Transient)
    UCommandActionComboEntry* OverrideNextDefinition;
    
public:
    UCommandActionCombo();
    UFUNCTION(BlueprintCallable)
    void SetNextComboEntry(TSubclassOf<UCommandActionComboEntry> NextComboEntry, bool bExecuteAutomatically);
    
    UFUNCTION(BlueprintCallable)
    void ResetCombo();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnResetCombo();
    
private:
    UFUNCTION()
    void OnPawnStartCommand(UCommandAction* Command);
    
    UFUNCTION()
    void OnPawnKnockback(FKnockbackRuntimeData KnockbackRuntimeData);
    
    UFUNCTION()
    void OnPawnEndCommand(UCommandAction* Command, ECommandRemoveTypes RemoveType);
    
};

