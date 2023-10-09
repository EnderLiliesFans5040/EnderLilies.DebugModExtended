#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFaction.h"
#include "FactionEventDelegate.h"
#include "FactionComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFaction Faction;
    
    UPROPERTY(BlueprintAssignable)
    FFactionEvent OnFactionChange;
    
    UFactionComponent();
    UFUNCTION(BlueprintCallable)
    void SetFaction(EFaction NewFaction);
    
    UFUNCTION(BlueprintPure)
    bool IsSameFaction(EFaction OtherFaction) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerFaction() const;
    
};

