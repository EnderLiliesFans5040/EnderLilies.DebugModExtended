#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjectArray.h"
#include "PoolSystem.generated.h"

UCLASS(Blueprintable)
class ZENITH_API UPoolSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FObjectArray> AvailableInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

