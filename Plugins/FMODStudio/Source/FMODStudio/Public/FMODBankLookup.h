#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FMODBankLookup.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class FMODSTUDIO_API UFMODBankLookup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterBankPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterAssetsBankPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterStringsBankPath;
    
    UFMODBankLookup();

};

