#pragma once
#include "CoreMinimal.h"
#include "ReusableActor.h"
#include "Collectable.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class ZENITH_API ACollectable : public AReusableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCollectOnActivate;
    
public:
    ACollectable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrantDrop();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapSwitch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollect(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDropGranted() const;
    
    UFUNCTION(BlueprintCallable)
    void GrantDrop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExperienceValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetCollectingPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    void Collect(APlayerController* PlayerController);
    
};

