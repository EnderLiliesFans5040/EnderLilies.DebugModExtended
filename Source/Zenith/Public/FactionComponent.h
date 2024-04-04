#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFaction.h"
#include "FactionEventDelegate.h"
#include "FactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionEvent OnFactionChange;
    
    UFactionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFaction(EFaction NewFaction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameFaction(EFaction OtherFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerFaction() const;
    
};

