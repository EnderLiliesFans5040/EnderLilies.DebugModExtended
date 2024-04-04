#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FMODLocalizedBankTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FMODSTUDIO_API FFMODLocalizedBankTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Banks;
    
    FFMODLocalizedBankTable();
};

