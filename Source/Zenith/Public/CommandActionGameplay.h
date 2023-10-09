#pragma once
#include "CoreMinimal.h"
#include "CommandAction.h"
#include "SpineAnimationDefinition.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "CommandActionGameplay.generated.h"

UCLASS(Abstract)
class ZENITH_API UCommandActionGameplay : public UCommandAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpineAnimationDefinition> Animations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideStopAnimationBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StopAnimationBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveInputToForceEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinInputForFacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bResetVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanWalkOffLedges;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> CollisionResponseOverrides;
    
    UCommandActionGameplay();
};

