#pragma once
#include "CoreMinimal.h"
#include "ParameterComponent.h"
#include "ParameterEnemyComponent.generated.h"

class UDataTable;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UParameterEnemyComponent : public UParameterComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* LevelTable;
    
public:
    UParameterEnemyComponent();
private:
    UFUNCTION()
    void OnDifficultyLevelChanged();
    
};

