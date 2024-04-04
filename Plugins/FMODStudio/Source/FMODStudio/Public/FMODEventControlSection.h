#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "FMODEventControlChannel.h"
#include "FMODEventControlSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFMODEventControlSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventControlChannel ControlKeys;
    
    UFMODEventControlSection();

};

