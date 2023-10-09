#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LayerName.h"
#include "ActorLayerToolsBlueprintLibrary.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class UActorLayerToolsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorLayerToolsBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetActorsFromLayer(UObject* WorldContextObject, const FLayerName& Layer);
    
};

