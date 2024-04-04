#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HookPoint.generated.h"

class AZenithCharacter;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ZENITH_API AHookPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    AHookPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHookPointUsed(AZenithCharacter* UsingCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyHookPointUsed(AZenithCharacter* UsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHookTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHookLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetHookAttachComponent() const;
    
};

