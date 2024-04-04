#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FMODLocalizedBankRow.generated.h"

USTRUCT(BlueprintType)
struct FMODSTUDIO_API FFMODLocalizedBankRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    FFMODLocalizedBankRow();
};

