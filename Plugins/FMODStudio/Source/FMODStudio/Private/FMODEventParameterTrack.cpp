#include "FMODEventParameterTrack.h"
#include "FMODEventControlSectionTemplate.h"

#if WITH_EDITORONLY_DATA
FText UFMODEventParameterTrack::GetDefaultDisplayName() const
{
    return FText();
}
#endif

UFMODEventParameterTrack::UFMODEventParameterTrack() {
}

UMovieSceneSection* UFMODEventParameterTrack::CreateNewSection()
{
    return nullptr;
}

void UFMODEventParameterTrack::RemoveAllAnimationData()
{
}

bool UFMODEventParameterTrack::HasSection(const UMovieSceneSection& Section) const
{
    return false;
}

void UFMODEventParameterTrack::AddSection(UMovieSceneSection& Section)
{
}

void UFMODEventParameterTrack::RemoveSection(UMovieSceneSection& Section)
{
}

bool UFMODEventParameterTrack::IsEmpty() const
{
    return false;
}

const TArray<UMovieSceneSection*>& UFMODEventParameterTrack::GetAllSections() const
{
    return Sections;
}

FMovieSceneEvalTemplatePtr UFMODEventParameterTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}
