#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CommandActionGameplay.h"
#include "NextComboAction.h"
#include "CommandActionComboEntry.generated.h"

class UCommandActionCombo;
class UCommandActionComboEntry;

UCLASS(Abstract)
class ZENITH_API UCommandActionComboEntry : public UCommandActionGameplay {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FNextComboAction> NextCombos;
    
    UPROPERTY(Transient)
    UCommandActionCombo* OwnerCommandActionCombo;
    
public:
    UCommandActionComboEntry();
    UFUNCTION(BlueprintImplementableEvent)
    TArray<TSubclassOf<UCommandActionComboEntry>> GetSubCommands() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UCommandActionCombo* GetOwnerCommandActionCombo() const;
    
};

