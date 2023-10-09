#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CVarsBPFLibrary.generated.h"

UCLASS(BlueprintType)
class UCVarsBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCVarsBPFLibrary();
    UFUNCTION(BlueprintPure)
    static bool GetUIHide();
    
    UFUNCTION(BlueprintPure)
    static bool GetDebugIgnoreTouchDamage();
    
    UFUNCTION(BlueprintPure)
    static bool GetDebugDrawJumpCurves();
    
    UFUNCTION(BlueprintPure)
    static bool GetActionAllowInfiniteJumps();
    
};

