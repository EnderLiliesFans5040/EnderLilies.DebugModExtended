#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FMODAssetLookupRow.generated.h"

USTRUCT(BlueprintType)
struct FMODSTUDIO_API FFMODAssetLookupRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
    FFMODAssetLookupRow();
};

