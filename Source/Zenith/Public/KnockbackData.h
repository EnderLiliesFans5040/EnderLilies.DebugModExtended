#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "KnockbackData.generated.h"

class UState;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FKnockbackData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceRestartDamageAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bResetVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LaunchVectorGrounded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LaunchVectorAir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LaunchVectorSwim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAbsoluteLaunchVector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bKnockbackUntilGrounded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StunTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Strength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* MovementCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UState>> AdditionalStates;
    
    ZENITH_API FKnockbackData();
};

