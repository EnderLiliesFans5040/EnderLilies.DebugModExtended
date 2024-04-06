#pragma once
#include "CoreMinimal.h"
#include "SpineBeforeUpdateWorldTransformDelegateDelegate.generated.h"

class USpineSkeletonComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineBeforeUpdateWorldTransformDelegate, USpineSkeletonComponent*, Skeleton);

