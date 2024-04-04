#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SubtitleData.h"
#include "MediaPlayerBPFLibrary.generated.h"

class UDataTable;
class UMediaPlayer;

UCLASS(Blueprintable)
class UMediaPlayerBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMediaPlayerBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static bool RewindOrReopen(UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool ParseSubtitleDataTable(UDataTable* DataTable, TArray<FSubtitleData>& out_SubtitleData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMediaPlayerProcessing(const UMediaPlayer* MediaPlayer, float DeltaTime, UPARAM(Ref) float& InOut_LastProcessedTime, UPARAM(Ref) float& InOut_InvalidTime);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSubtitleAtTime(const TArray<FSubtitleData>& SubtitleData, float VideoTime, FText& out_SubtitleText, float& out_Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLastVideoProcessedTimeInSecond(const UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLastProcessedTimeInSecond(const UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLastAudioProcessedTimeInSecond(const UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void DisplayMediaPlayerData(const UMediaPlayer* MediaPlayer);
    
};

