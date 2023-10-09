#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HookPoint.generated.h"

class USphereComponent;
class USceneComponent;
class AZenithCharacter;

UCLASS()
class ZENITH_API AHookPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
    AHookPoint();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookPointUsed(AZenithCharacter* UsingCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyHookPointUsed(AZenithCharacter* UsingCharacter);
    
    UFUNCTION(BlueprintPure)
    FTransform GetHookTransform() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHookLocation() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetHookAttachComponent() const;
    
};

