#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Breakable.generated.h"

class UClearableComponent;
class UHPComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ZENITH_API ABreakable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHPComponent* HPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkClearedOnDeath;
    
public:
    ABreakable(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* From);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreak();
    
};

