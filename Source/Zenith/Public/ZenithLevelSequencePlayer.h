#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "Camera/PlayerCameraManager.h"
#include "MovieSceneSequencePlayer.h"
#include "ZenithLevelSequencePlayer.generated.h"

class UObject;
class AZenithLevelSequenceActor;
class AActor;
class UZenithLevelSequencePlayer;
class ULevelSequence;

UCLASS()
class ZENITH_API UZenithLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* CurrCameraActor;
    
    //UZenithLevelSequencePlayer() { this->CurrCameraActor = NULL; };
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UZenithLevelSequencePlayer* CreateZenithLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* InLevelSequence, FMovieSceneSequencePlaybackSettings Settings, AZenithLevelSequenceActor*& OutActor, FViewTargetTransitionParams BlendInParams, FViewTargetTransitionParams BlendOutParams);
    
};

