#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EZenithError.h"
#include "ErrorData.generated.h"

USTRUCT(BlueprintType)
struct FErrorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZenithError Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorMessage;
    
    ZENITH_API FErrorData();
};

