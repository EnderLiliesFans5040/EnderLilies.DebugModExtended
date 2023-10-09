#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "FollowSplineEventDelegate.h"
#include "ResettableComponentInterface.h"
#include "Engine/EngineTypes.h"
#include "EFollowSplineType.h"
#include "FollowSplineComponent.generated.h"

class USplineComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFollowSplineComponent : public UMovementComponent, public IResettableComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USplineComponent* SplineComponent;
    
public:
    UPROPERTY(BlueprintAssignable)
    FFollowSplineEvent OnMoveStart;
    
    UPROPERTY(BlueprintAssignable)
    FFollowSplineEvent OnMoveFinished;
    
    UPROPERTY(EditAnywhere)
    FComponentReference TargetComponentReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFollowSplineType PlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBetweenMove;
    
    UFollowSplineComponent();
    UFUNCTION(BlueprintCallable)
    void Launch(bool bForward);
    
    
    // Fix for true pure virtual functions not being implemented
};

