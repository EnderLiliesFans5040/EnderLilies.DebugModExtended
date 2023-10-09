#pragma once
#include "CoreMinimal.h"
#include "InteractableEventDelegate.generated.h"

class AInteractable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableEvent, AInteractable*, Interactable);

