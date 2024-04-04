#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FaderEventDelegate.h"
#include "Fader.generated.h"

class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class ZENITH_API AFader : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULevelSequence*, ULevelSequencePlayer*> LevelSequencePlayers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* FadeInSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* FadeOutSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaderEvent OnFadeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaderEvent OnFadeEnd;
    
    AFader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PrepareFadeIn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelSequencePlay();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void LaunchFadeIn();
    
};

