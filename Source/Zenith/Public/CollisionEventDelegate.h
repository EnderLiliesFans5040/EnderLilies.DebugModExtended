#pragma once
#include "CoreMinimal.h"
#include "CollisionEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollisionEvent, AActor*, OverlapActor);

