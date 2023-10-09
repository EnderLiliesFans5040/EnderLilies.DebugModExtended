#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "ResettableComponentInterface.h"
#include "UObject/NoExportTypes.h"
#include "AutoMoveComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UAutoMoveComponent : public UMovementComponent, public IResettableComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotationFollowsVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityFactor;
    
public:
    UAutoMoveComponent();
    UFUNCTION(BlueprintCallable)
    void SetVelocity(FVector NewVelocity);
    
    
    // Fix for true pure virtual functions not being implemented
};

