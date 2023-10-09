#include "ActorLayerToolsBlueprintLibrary.h"

class UObject;
class AActor;

TArray<AActor*> UActorLayerToolsBlueprintLibrary::GetActorsFromLayer(UObject* WorldContextObject, const FLayerName& Layer) {
    return TArray<AActor*>();
}

UActorLayerToolsBlueprintLibrary::UActorLayerToolsBlueprintLibrary() {
}

