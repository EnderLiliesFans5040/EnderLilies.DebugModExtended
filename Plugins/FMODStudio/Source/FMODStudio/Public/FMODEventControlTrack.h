#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "FMODEventControlTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UFMODEventControlTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> ControlSections;
    
public:
    UFMODEventControlTrack();

};

