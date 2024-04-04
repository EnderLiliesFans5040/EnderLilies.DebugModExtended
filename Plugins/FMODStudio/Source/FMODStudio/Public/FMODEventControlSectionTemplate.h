#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FMODEventControlChannel.h"
#include "FMODEventControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventControlChannel ControlKeys;
    
    FMODSTUDIO_API FFMODEventControlSectionTemplate();
};

