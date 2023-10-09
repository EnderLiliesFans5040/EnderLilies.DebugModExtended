#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "DropComponent.generated.h"

class ACollectable;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bAutomaticallyRegisterOnDeath;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ACollectable> CollectableClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ExperienceDrop;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ExperienceCountPerCollectable;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxExperienceCollectableCount;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle DropDataHandle;
    
public:
    UDropComponent();
    UFUNCTION(BlueprintCallable)
    void SetDropDataHandle(const FDataTableRowHandle& NewDropDataHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* From);
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchDropProcess();
    
};

