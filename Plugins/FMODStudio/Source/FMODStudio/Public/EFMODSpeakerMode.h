#pragma once
#include "CoreMinimal.h"
#include "EFMODSpeakerMode.generated.h"

UENUM(BlueprintType)
namespace EFMODSpeakerMode {
    enum Type {
        Stereo,
        Surround_5_1,
        Surround_7_1,
    };
}

