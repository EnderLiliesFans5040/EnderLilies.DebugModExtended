#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "ZenithLevelSequencePlayer.generated.h"

class AActor;
class AZenithLevelSequenceActor;
class ULevelSequence;
class UObject;
class UZenithLevelSequencePlayer;

UCLASS(Blueprintable)
class ZENITH_API UZenithLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrCameraActor;
    
    //UZenithLevelSequencePlayer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UZenithLevelSequencePlayer* CreateZenithLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* InLevelSequence, FMovieSceneSequencePlaybackSettings Settings, AZenithLevelSequenceActor*& OutActor, FViewTargetTransitionParams BlendInParams, FViewTargetTransitionParams BlendOutParams);
    
};

