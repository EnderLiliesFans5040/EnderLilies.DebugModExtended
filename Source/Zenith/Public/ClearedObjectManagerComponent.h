#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClearedObjectManagerActionDelegate.h"
#include "NameSet.h"
#include "NameTransformMap.h"
#include "GameMapData.h"
#include "ClearedObjectManagerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UClearedObjectManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FClearedObjectManagerAction OnBecameReady;
    
    UPROPERTY(BlueprintAssignable)
    FClearedObjectManagerAction OnGameMapCompletionUpdated;
    
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, FNameSet> ClearedActors;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, FNameSet> ClearedSavedActors;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, FNameTransformMap> GenericSavedTransforms;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FNameSet> MapCompletionActors;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, FNameSet> PreviousRunsClearedSavedActors;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FName, FNameTransformMap> PreviousRunsGenericSavedTransforms;
    
public:
    UClearedObjectManagerComponent();
    UFUNCTION(BlueprintCallable)
    void ResetClearedObjects();
    
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameMapCompletionPercentage(const FName& GameMapID, const FGameMapData& GameMapData) const;
    
    UFUNCTION(BlueprintPure)
    float GetGameMapCompletionActorCount(const FName& GameMapID) const;
    
};

