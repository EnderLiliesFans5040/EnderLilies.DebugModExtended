#pragma once
#include "CoreMinimal.h"
#include "SetBlackboardValue.h"
#include "UObject/NoExportTypes.h"
#include "SetBlackboardVectorValue.generated.h"

UCLASS()
class ZENITH_API USetBlackboardVectorValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ValueToSet;
    
    USetBlackboardVectorValue();
};

