#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PostLoadVisibilityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UPostLoadVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPostLoadVisibilityComponent(const FObjectInitializer& ObjectInitializer);

};

