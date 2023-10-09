#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BitshiftBPFLibrary.generated.h"

UCLASS(BlueprintType)
class UBitshiftBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBitshiftBPFLibrary();
    UFUNCTION(BlueprintPure)
    static int32 BitshiftRight(const int32 Value, const int32 bitshift);
    
    UFUNCTION(BlueprintPure)
    static int32 BitshiftLeft(const int32 Value, const int32 bitshift);
    
};

