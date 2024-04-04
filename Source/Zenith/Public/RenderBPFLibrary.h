#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ETranslucencyLayer.h"
#include "EUMGZOrderLayer.h"
#include "RenderBPFLibrary.generated.h"

UCLASS(Blueprintable)
class URenderBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URenderBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUMGZOrder(EUMGZOrderLayer Layer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTranslucencySortPriority(ETranslucencyLayer Layer);
    
};

