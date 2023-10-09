#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EZenithAchievement.h"
#include "AchievementData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FAchievementData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EZenithAchievement Achievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UPaperSprite> LockedIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UPaperSprite> UnlockedIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsHidden;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHideFromListInEarlyAccess;
    
    ZENITH_API FAchievementData();
};

