#pragma once
#include "CoreMinimal.h"
#include "BaseInventory.h"
#include "ItemPassiveInventory.generated.h"

UCLASS()
class UItemPassiveInventory : public UBaseInventory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FName> PassiveCheckedList;
    
public:
    UItemPassiveInventory();
    UFUNCTION(BlueprintCallable)
    void MarkPassiveAsChecked(const FName& PassiveID);
    
    UFUNCTION(BlueprintPure)
    bool IsPassiveChecked(const FName& PassiveID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllObtainedPassivesChecked() const;
    
};

