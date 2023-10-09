#pragma once
#include "CoreMinimal.h"
#include "RecollectionItemData.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "RecollectionBossData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FRecollectionBossData : public FRecollectionItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText BossName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UPaperSprite> Sprite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle Map;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PlayerStartTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector PlayerSpawnOffset;
    
    ZENITH_API FRecollectionBossData();
};

