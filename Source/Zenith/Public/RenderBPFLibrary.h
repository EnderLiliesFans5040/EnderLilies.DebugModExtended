#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUMGZOrderLayer.h"
#include "ETranslucencyLayer.h"
#include "RenderBPFLibrary.generated.h"

UCLASS(BlueprintType)
class URenderBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URenderBPFLibrary();
    UFUNCTION(BlueprintPure)
    static int32 GetUMGZOrder(EUMGZOrderLayer Layer);
    
    UFUNCTION(BlueprintPure)
    static int32 GetTranslucencySortPriority(ETranslucencyLayer Layer);
    
};

