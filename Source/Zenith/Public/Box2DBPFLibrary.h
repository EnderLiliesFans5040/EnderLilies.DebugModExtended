#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBoxSide.h"
#include "Box2DBPFLibrary.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class UBox2DBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBox2DBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInside(const FBox2D Box, const FVector2D PointToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBoxInside(const FBox2D Box, const FVector2D BoxToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClosestPointOnSurfaceYZ(const UBoxComponent* Box, const FVector Point, EBoxSide& BoxSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetClosestPointOnSurface(const FBox2D Box, const FVector2D Point, EBoxSide& BoxSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ClampPointInside(const FBox2D Box, const FVector2D Point);
    
};

