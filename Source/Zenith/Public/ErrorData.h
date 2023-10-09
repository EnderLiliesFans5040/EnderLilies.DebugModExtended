#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EZenithError.h"
#include "ErrorData.generated.h"

USTRUCT()
struct FErrorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZenithError Error;
    
    UPROPERTY(EditAnywhere)
    FText ErrorTitle;
    
    UPROPERTY(EditAnywhere)
    FText ErrorMessage;
    
    ZENITH_API FErrorData();
};

