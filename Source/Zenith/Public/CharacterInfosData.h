#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterInfosData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInfosData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    ZENITH_API FCharacterInfosData();
};

