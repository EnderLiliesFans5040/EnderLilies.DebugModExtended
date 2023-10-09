#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "ZenithPathFollowingComponent.generated.h"

class AZenithCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UZenithPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bUseQuadraticBezier;
    
    UPROPERTY(EditDefaultsOnly)
    float BezierControlPointDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float BezierMinHeightBetweenPoints;
    
    UPROPERTY(Transient)
    AZenithCharacter* ZenithCharacter;
    
public:
    UZenithPathFollowingComponent();
};

