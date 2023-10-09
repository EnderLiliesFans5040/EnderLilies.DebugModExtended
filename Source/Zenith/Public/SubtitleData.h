#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SubtitleData.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float From;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float To;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutTime;
    
    ZENITH_API FSubtitleData();
};

