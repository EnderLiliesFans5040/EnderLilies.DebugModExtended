#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CommandActionGameplay.h"
#include "ESpiritDirectionStyle.h"
#include "SpineAnimationDefinition.h"
#include "CommandActionSpirit.generated.h"

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandActionSpirit : public UCommandActionGameplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpiritDirectionStyle SpiritDirectionStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionDashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> EnemyPawnCollisionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> DirectionDashAnimations;
    
public:
    UCommandActionSpirit();

};

