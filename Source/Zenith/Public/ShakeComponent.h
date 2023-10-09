#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "ShakeData.h"
#include "ShakeComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UShakeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FComponentReference TargetComponent;
    
    UShakeComponent();
    UFUNCTION(BlueprintCallable)
    void LaunchShake(const FShakeData& ShakeData);
    
};

