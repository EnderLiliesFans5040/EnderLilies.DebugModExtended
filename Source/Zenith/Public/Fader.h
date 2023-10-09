#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FaderEventDelegate.h"
#include "Fader.generated.h"

class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class ZENITH_API AFader : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<ULevelSequence*, ULevelSequencePlayer*> LevelSequencePlayers;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ULevelSequence* FadeInSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ULevelSequence* FadeOutSequence;
    
    UPROPERTY(BlueprintAssignable)
    FFaderEvent OnFadeStart;
    
    UPROPERTY(BlueprintAssignable)
    FFaderEvent OnFadeEnd;
    
    AFader();
    UFUNCTION(BlueprintCallable)
    void PrepareFadeIn();
    
private:
    UFUNCTION()
    void OnLevelSequencePlay();
    
    UFUNCTION()
    void OnLevelSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void LaunchFadeIn();
    
};

