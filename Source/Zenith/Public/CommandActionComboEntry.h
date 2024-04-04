#pragma once
#include "CoreMinimal.h"
#include "CommandActionGameplay.h"
#include "NextComboAction.h"
#include "Templates/SubclassOf.h"
#include "CommandActionComboEntry.generated.h"

class UCommandActionCombo;
class UCommandActionComboEntry;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandActionComboEntry : public UCommandActionGameplay {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNextComboAction> NextCombos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandActionCombo* OwnerCommandActionCombo;
    
public:
    UCommandActionComboEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<TSubclassOf<UCommandActionComboEntry>> GetSubCommands() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommandActionCombo* GetOwnerCommandActionCombo() const;
    
};

