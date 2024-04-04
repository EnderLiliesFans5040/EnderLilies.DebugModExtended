#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScreenBPFLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UScreenBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScreenBPFLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ProjectWorldToViewport(UObject* WorldContextObject, FVector WorldLocation, FVector2D& out_ViewportLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DeprojectViewportToWorldAtDepth(UObject* WorldContextObject, FVector2D ViewportLocation, FVector& out_WorldLocation, float Depth);
    
};

