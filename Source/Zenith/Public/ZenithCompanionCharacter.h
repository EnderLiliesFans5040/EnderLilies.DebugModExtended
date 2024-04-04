#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "EventActorEventDelegate.h"
#include "EventActorInterface.h"
#include "ECommandInputTypes.h"
#include "ECompanionState.h"
#include "ItemSpiritData.h"
#include "ZenithCompanionCharacter.generated.h"

class AActor;
class APawn;
class UCommandSettingsData;
class USceneComponent;
class USpineAnimationComponent;
class USpineSkeletonAnimationComponent;
class USpineSkeletonRendererComponent;

UCLASS(Blueprintable)
class ZENITH_API AZenithCompanionCharacter : public ACharacter, public IEventActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FXHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* SkeletonComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SkeletonAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineAnimationComponent* SpineAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeForSpeedBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IdleLocationOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActorEvent OnEventStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActorEvent OnEventStopDelegate;
    
public:
    AZenithCompanionCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMoveTargetWithTime(AActor* Target, FVector Offset, float TimeToReachTarget, bool bShowSpineOnArrival, bool bSpineFacingRight);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveTarget(AActor* Target, FVector Offset, bool bShowSpineOnArrival, bool bSpineFacingRight);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(float NewMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void ResetMoveSpeed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowSpine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTranslucencyPriority(int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMeshComponentsHiddenInGame(bool bHiddenInGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetAssociatedSpiritData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderPawnChanged(APawn* NewLeaderPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideSpine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrivedAtTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable)
    void NotifySpineVisible();
    
    UFUNCTION(BlueprintCallable)
    void NotifySpineHidden();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HideSpine();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECompanionState GetCurrentState() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAssociatedSpiritData(ECommandInputTypes& CommandInputType, UCommandSettingsData*& CommandSettingsData, FItemSpiritData& ItemSpiritData) const;
    

    // Fix for true pure virtual functions not being implemented
};

