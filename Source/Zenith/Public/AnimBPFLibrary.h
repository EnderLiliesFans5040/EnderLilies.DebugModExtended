#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimBPFLibrary.generated.h"

class AZenithCharacter;

UCLASS(BlueprintType)
class UAnimBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimBPFLibrary();
    UFUNCTION(BlueprintPure)
    static void GetAnimData(const AZenithCharacter* Character, bool& out_bRunning, float& out_XYVelocityRatio);
    
};

