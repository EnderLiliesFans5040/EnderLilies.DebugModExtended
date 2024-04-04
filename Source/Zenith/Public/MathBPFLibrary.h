#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveFloat.h"
#include "MathBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UMathBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundToPowerOfTwo(float A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LoopAround_Int(int32 X, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LoopAround_Float(float X, float Min, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector LerpVectorComponents(FVector A, FVector B, FVector Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMinTime(const FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxTime(const FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FloorToPowerOfTwo(float A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Evaluate(const FRuntimeFloatCurve& Curve, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Clamp(const FVector& Vector, const FVector Min, const FVector Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CeilToPowerOfTwo(float A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetweenAsRad(FVector VectorA, FVector VectorB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetweenAsDegree(FVector VectorA, FVector VectorB);
    
};

