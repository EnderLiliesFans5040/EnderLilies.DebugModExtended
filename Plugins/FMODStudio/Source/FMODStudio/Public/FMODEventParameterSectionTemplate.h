#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "FMODEventParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    FMODSTUDIO_API FFMODEventParameterSectionTemplate();
};

