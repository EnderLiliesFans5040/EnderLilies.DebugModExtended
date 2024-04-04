#pragma once
#include "CoreMinimal.h"
#include "CommandActionProxy.h"
#include "ECommandRemoveTypes.h"
#include "KnockbackRuntimeData.h"
#include "NextComboAction.h"
#include "Templates/SubclassOf.h"
#include "CommandActionCombo.generated.h"

class UCommandAction;
class UCommandActionComboEntry;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandActionCombo : public UCommandActionProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNextComboAction> NextCombos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResetComboOnInputs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UCommandActionComboEntry>, UCommandActionComboEntry*> CommandActionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandActionComboEntry* CurrDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandActionComboEntry* NextDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandActionComboEntry* OverrideNextDefinition;
    
public:
    UCommandActionCombo();

    UFUNCTION(BlueprintCallable)
    void SetNextComboEntry(TSubclassOf<UCommandActionComboEntry> NextComboEntry, bool bExecuteAutomatically);
    
    UFUNCTION(BlueprintCallable)
    void ResetCombo();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetCombo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnStartCommand(UCommandAction* Command);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnKnockback(FKnockbackRuntimeData KnockbackRuntimeData);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEndCommand(UCommandAction* Command, ECommandRemoveTypes RemoveType);
    
};

