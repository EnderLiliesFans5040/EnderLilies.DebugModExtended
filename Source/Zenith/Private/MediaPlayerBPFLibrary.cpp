#include "MediaPlayerBPFLibrary.h"

UMediaPlayerBPFLibrary::UMediaPlayerBPFLibrary() {
}

bool UMediaPlayerBPFLibrary::RewindOrReopen(UMediaPlayer* MediaPlayer) {
    return false;
}

bool UMediaPlayerBPFLibrary::ParseSubtitleDataTable(UDataTable* DataTable, TArray<FSubtitleData>& out_SubtitleData) {
    return false;
}

bool UMediaPlayerBPFLibrary::IsMediaPlayerProcessing(const UMediaPlayer* MediaPlayer, float DeltaTime, float& InOut_LastProcessedTime, float& InOut_InvalidTime) {
    return false;
}

bool UMediaPlayerBPFLibrary::GetSubtitleAtTime(const TArray<FSubtitleData>& SubtitleData, float VideoTime, FText& out_SubtitleText, float& out_Alpha) {
    return false;
}

float UMediaPlayerBPFLibrary::GetLastVideoProcessedTimeInSecond(const UMediaPlayer* MediaPlayer) {
    return 0.0f;
}

float UMediaPlayerBPFLibrary::GetLastProcessedTimeInSecond(const UMediaPlayer* MediaPlayer) {
    return 0.0f;
}

float UMediaPlayerBPFLibrary::GetLastAudioProcessedTimeInSecond(const UMediaPlayer* MediaPlayer) {
    return 0.0f;
}

void UMediaPlayerBPFLibrary::DisplayMediaPlayerData(const UMediaPlayer* MediaPlayer) {
}


