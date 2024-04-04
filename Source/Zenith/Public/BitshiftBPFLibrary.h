#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BitshiftBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UBitshiftBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBitshiftBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitshiftRight(const int32 Value, const int32 bitshift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitshiftLeft(const int32 Value, const int32 bitshift);
    
};

