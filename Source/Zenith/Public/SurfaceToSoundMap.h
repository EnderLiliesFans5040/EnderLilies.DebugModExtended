#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SurfaceToSoundMap.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct ZENITH_API FSurfaceToSoundMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UFMODEvent*> Sounds;
    
    FSurfaceToSoundMap();
};

