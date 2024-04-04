#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneByteChannel.h"
#include "FMODEventControlChannel.generated.h"

USTRUCT(BlueprintType)
struct FFMODEventControlChannel : public FMovieSceneByteChannel {
    GENERATED_BODY()
public:
    FMODSTUDIO_API FFMODEventControlChannel();
};

