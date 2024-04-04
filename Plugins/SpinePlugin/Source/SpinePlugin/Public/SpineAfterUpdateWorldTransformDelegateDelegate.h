#pragma once
#include "CoreMinimal.h"
#include "SpineAfterUpdateWorldTransformDelegateDelegate.generated.h"

class USpineSkeletonComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpineAfterUpdateWorldTransformDelegate, USpineSkeletonComponent*, Skeleton);

