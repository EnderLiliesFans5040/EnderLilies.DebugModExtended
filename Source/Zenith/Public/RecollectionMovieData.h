#pragma once
#include "CoreMinimal.h"
#include "RecollectionItemData.h"
#include "RecollectionMovieData.generated.h"

class UDataTable;
class UMediaSource;
class UPaperSprite;

USTRUCT(BlueprintType)
struct FRecollectionMovieData : public FRecollectionItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MovieName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> Sprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Subtitles;
    
    ZENITH_API FRecollectionMovieData();
};

