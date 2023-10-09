#pragma once
#include "CoreMinimal.h"
#include "EDirectionInputTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputSnapshot.generated.h"

USTRUCT(BlueprintType)
struct FInputSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector2D InputVector;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D RightInputVector;
    
    UPROPERTY(BlueprintReadOnly)
    FVector MoveInput;
    
    UPROPERTY(BlueprintReadOnly)
    EDirectionInputTypes DirectionInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CommandInputFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RawInputs;
    
    ZENITH_API FInputSnapshot();
};

