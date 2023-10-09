#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EventBlackBoard.generated.h"

class APawn;
class AController;
class AActor;
class AEventCamera;
class UUserWidget;
class UMediaSource;
class UDataTable;
class UDataAsset;

UCLASS(BlueprintType)
class EVENTPLUGIN_API UEventBlackBoard : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<APawn*, AController*> Controllers;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* GameViewTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AEventCamera* EventCamera;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<FName, bool> BoolData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, FName> NameData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, AActor*> ActorData;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient)
    TMap<FName, UUserWidget*> UserWidgetData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, FDataTableRowHandle> DataHandleData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, FTransform> TransformData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, UMediaSource*> MediaData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, UDataTable*> DataTableData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, UDataAsset*> AssetData;
    
    UEventBlackBoard();
};

