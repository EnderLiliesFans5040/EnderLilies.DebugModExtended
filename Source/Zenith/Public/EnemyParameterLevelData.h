#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "EnemyParameterLevelData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyParameterLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Attack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stamina;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DropExperience;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle DropHandle;
    
    ZENITH_API FEnemyParameterLevelData();
};

