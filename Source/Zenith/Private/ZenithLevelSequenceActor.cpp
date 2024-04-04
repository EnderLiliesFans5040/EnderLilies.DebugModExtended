#include "ZenithLevelSequenceActor.h"
#include "ZenithLevelSequencePlayer.h"

AZenithLevelSequenceActor::AZenithLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UZenithLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
}

void AZenithLevelSequenceActor::SetOrigin(FTransform Origin) {
}

UZenithLevelSequencePlayer* AZenithLevelSequenceActor::GetZenithSequencePlayer() const {
    return NULL;
}


