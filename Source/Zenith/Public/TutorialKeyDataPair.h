#pragma once
#include "CoreMinimal.h"
#include "TutorialData.h"
#include "TutorialKeyDataPair.generated.h"

USTRUCT(BlueprintType)
struct FTutorialKeyDataPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName Key;
    
    UPROPERTY(BlueprintReadOnly)
    FTutorialData TutorialData;
    
    ZENITH_API FTutorialKeyDataPair();
};

