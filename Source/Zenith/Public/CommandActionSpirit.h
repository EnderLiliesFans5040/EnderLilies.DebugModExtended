#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESpiritDirectionStyle.h"
#include "CommandActionGameplay.h"
#include "SpineAnimationDefinition.h"
#include "CommandActionSpirit.generated.h"

UCLASS(Abstract)
class ZENITH_API UCommandActionSpirit : public UCommandActionGameplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESpiritDirectionStyle SpiritDirectionStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DirectionDashSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DashDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableCollision;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionResponse> EnemyPawnCollisionResponse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpineAnimationDefinition> DirectionDashAnimations;
    
public:
    UCommandActionSpirit();
};

