#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "RichTextFormatElement.h"
#include "EItemType.h"
#include "BaseItemData.generated.h"

class UPaperSprite;
class UGetItemTrigger;
class UFMODEvent;

USTRUCT(BlueprintType)
struct FBaseItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ShortExplanation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRichTextFormatElement> FormatElements;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EItemType ItemType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool AddToInventory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UPaperSprite> Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGetItemTrigger> GetItemTriggerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFMODEvent* OverrideGetSoundEvent;
    
    ZENITH_API FBaseItemData();
};

