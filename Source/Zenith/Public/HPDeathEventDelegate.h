#pragma once
#include "CoreMinimal.h"
#include "HPDeathEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHPDeathEvent, AActor*, From);

