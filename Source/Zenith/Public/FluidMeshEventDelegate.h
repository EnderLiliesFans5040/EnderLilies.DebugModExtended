#pragma once
#include "CoreMinimal.h"
#include "FluidMeshEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFluidMeshEvent, AActor*, Actor, float, VelocityZ);

