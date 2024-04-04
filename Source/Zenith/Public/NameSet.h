#pragma once
#include "CoreMinimal.h"
#include "NameSet.generated.h"

USTRUCT(BlueprintType)
struct FNameSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Set;
    
    ZENITH_API FNameSet();
};

