#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MinimapData.h"
#include "Engine/DataTable.h"
#include "MapCompleteData.h"
#include "GameMapData.generated.h"

class UWorld;
class UFMODEvent;
class UTexture2D;

USTRUCT(BlueprintType)
struct FGameMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle AreaData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bContainsRestPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UFMODEvent> BGMEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UFMODEvent> AmbienceEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMapCompleteData MapCompleteData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> MapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FMinimapData MinimapData;
    
    ZENITH_API FGameMapData();
};

