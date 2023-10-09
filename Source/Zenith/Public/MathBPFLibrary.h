#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveFloat.h"
#include "MathBPFLibrary.generated.h"

UCLASS(BlueprintType)
class UMathBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathBPFLibrary();
    UFUNCTION(BlueprintPure)
    static int32 RoundToPowerOfTwo(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 LoopAround_Int(int32 X, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintPure)
    static float LoopAround_Float(float X, float Min, float Max);
    
    UFUNCTION(BlueprintPure)
    static FVector LerpVectorComponents(FVector A, FVector B, FVector Alpha);
    
    UFUNCTION(BlueprintPure)
    static float GetMinTime(const FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintPure)
    static float GetMaxTime(const FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintPure)
    static int32 FloorToPowerOfTwo(float A);
    
    UFUNCTION(BlueprintPure)
    static float Evaluate(const FRuntimeFloatCurve& Curve, float Time);
    
    UFUNCTION(BlueprintPure)
    static FVector Clamp(const FVector& Vector, const FVector Min, const FVector Max);
    
    UFUNCTION(BlueprintPure)
    static int32 CeilToPowerOfTwo(float A);
    
    UFUNCTION(BlueprintPure)
    static float AngleBetweenAsRad(FVector VectorA, FVector VectorB);
    
    UFUNCTION(BlueprintPure)
    static float AngleBetweenAsDegree(FVector VectorA, FVector VectorB);
    
};

