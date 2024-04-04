#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CVarsBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UCVarsBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCVarsBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUIHide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugIgnoreTouchDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugDrawJumpCurves();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActionAllowInfiniteJumps();
    
};

