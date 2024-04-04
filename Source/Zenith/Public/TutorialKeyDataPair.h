#pragma once
#include "CoreMinimal.h"
#include "TutorialData.h"
#include "TutorialKeyDataPair.generated.h"

USTRUCT(BlueprintType)
struct FTutorialKeyDataPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialData TutorialData;
    
    ZENITH_API FTutorialKeyDataPair();
};

