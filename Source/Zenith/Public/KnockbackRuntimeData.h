#pragma once
#include "CoreMinimal.h"
#include "KnockbackData.h"
#include "EKnockbackEndType.h"
#include "EKnockbackTypes.h"
#include "UObject/NoExportTypes.h"
#include "KnockbackRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FKnockbackRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 KnockbackID;
    
    UPROPERTY(BlueprintReadOnly)
    FKnockbackData KnockbackData;
    
    UPROPERTY(BlueprintReadOnly)
    EKnockbackTypes KnockbackType;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Direction;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LaunchVector;
    
    UPROPERTY(BlueprintReadOnly)
    float ExecutionTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInRecovery;
    
    UPROPERTY(BlueprintReadOnly)
    EKnockbackEndType EndType;
    
    ZENITH_API FKnockbackRuntimeData();
};

