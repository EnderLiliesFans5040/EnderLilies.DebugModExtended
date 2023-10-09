#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraShake.h"
#include "OscillatorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UOscillatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OscillationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVOscillator LocOscillation;
    
    UPROPERTY(EditAnywhere)
    FComponentReference TargetComponent;
    
    UOscillatorComponent();
};

