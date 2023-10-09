#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjectArray.h"
#include "PoolSystem.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UPoolSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UClass*, FObjectArray> AvailableInstances;
    
    UPROPERTY()
    TArray<UObject*> InUseInstances;
    
public:
    UPoolSystem();
    UFUNCTION(BlueprintCallable)
    void ReturnToPool(UObject* ObjectInstance);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetFromPool(const UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    void ClearPool();
    
};

