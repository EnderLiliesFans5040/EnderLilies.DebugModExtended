#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SetBlackboardValue.h"
#include "SetBlackboardVectorValue.generated.h"

UCLASS(Blueprintable)
class ZENITH_API USetBlackboardVectorValue : public USetBlackboardValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ValueToSet;
    
    USetBlackboardVectorValue();

};

