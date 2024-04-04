#pragma once
#include "CoreMinimal.h"
#include "ParameterComponent.h"
#include "ParameterEnemyComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UParameterEnemyComponent : public UParameterComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelTable;
    
public:
    UParameterEnemyComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDifficultyLevelChanged();
    
};

