#pragma once
#include "CoreMinimal.h"
#include "BaseInventory.h"
#include "ItemPassiveInventory.generated.h"

UCLASS(Blueprintable)
class UItemPassiveInventory : public UBaseInventory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PassiveCheckedList;
    
public:
    UItemPassiveInventory();

    UFUNCTION(BlueprintCallable)
    void MarkPassiveAsChecked(const FName& PassiveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassiveChecked(const FName& PassiveID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllObtainedPassivesChecked() const;
    
};

