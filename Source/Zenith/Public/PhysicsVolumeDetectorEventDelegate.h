#pragma once
#include "CoreMinimal.h"
#include "PhysicsVolumeDetectorEventDelegate.generated.h"

class ACustomPhysicsVolume;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhysicsVolumeDetectorEvent, const ACustomPhysicsVolume*, PhysicsVolume);

