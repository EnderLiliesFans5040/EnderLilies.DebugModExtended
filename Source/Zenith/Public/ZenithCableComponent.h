#pragma once
#include "CoreMinimal.h"
#include "CableComponent.h"
#include "ZenithCableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UZenithCableComponent : public UCableComponent {
    GENERATED_BODY()
public:
    UZenithCableComponent(const FObjectInitializer& ObjectInitializer);

};

