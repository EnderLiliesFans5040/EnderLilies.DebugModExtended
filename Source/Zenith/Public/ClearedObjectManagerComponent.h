#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClearedObjectManagerActionDelegate.h"
#include "GameMapData.h"
#include "NameSet.h"
#include "NameTransformMap.h"
#include "ClearedObjectManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UClearedObjectManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearedObjectManagerAction OnBecameReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearedObjectManagerAction OnGameMapCompletionUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearedSavedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameTransformMap> GenericSavedTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> MapCompletionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> PreviousRunsClearedSavedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameTransformMap> PreviousRunsGenericSavedTransforms;
    
public:
    UClearedObjectManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetClearedObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameMapCompletionPercentage(const FName& GameMapID, const FGameMapData& GameMapData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameMapCompletionActorCount(const FName& GameMapID) const;
    
};

