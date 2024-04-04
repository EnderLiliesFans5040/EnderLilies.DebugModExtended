#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESoundMaterial.h"
#include "SoundDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USoundDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundMaterial Material;
    
public:
    USoundDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESoundMaterial GetMaterial() const;
    
};

