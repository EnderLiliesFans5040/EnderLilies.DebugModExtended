#pragma once
#include "CoreMinimal.h"
#include "ProfileDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FProfileDelegate, bool, bValidSelection);

