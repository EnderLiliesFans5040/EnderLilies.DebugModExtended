#pragma once
#include "CoreMinimal.h"
#include "DirectionInputProfile.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FDirectionInputProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDownRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDownLeft;
    
    FDirectionInputProfile();
};

