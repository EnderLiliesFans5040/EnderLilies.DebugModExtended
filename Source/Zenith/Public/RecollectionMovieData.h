#pragma once
#include "CoreMinimal.h"
#include "RecollectionItemData.h"
#include "RecollectionMovieData.generated.h"

class UMediaSource;
class UPaperSprite;
class UDataTable;

USTRUCT(BlueprintType)
struct FRecollectionMovieData : public FRecollectionItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText MovieName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UPaperSprite> Sprite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* Subtitles;
    
    ZENITH_API FRecollectionMovieData();
};

