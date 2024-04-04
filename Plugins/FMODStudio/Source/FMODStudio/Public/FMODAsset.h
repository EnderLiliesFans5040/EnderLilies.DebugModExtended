#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FMODAsset.generated.h"

UCLASS(Blueprintable)
class FMODSTUDIO_API UFMODAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AssetGuid;
    
    UFMODAsset();

};

