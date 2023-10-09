#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESoundMaterial.h"
#include "SoundDataComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USoundDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ESoundMaterial Material;
    
public:
    USoundDataComponent();
    UFUNCTION(BlueprintPure)
    ESoundMaterial GetMaterial() const;
    
};

