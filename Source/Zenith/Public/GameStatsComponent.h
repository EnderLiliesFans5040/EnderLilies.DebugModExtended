#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStatsComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UGameStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameStatsComponent();
    UFUNCTION(BlueprintPure)
    FString GetPlayTimeAsString() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayTime() const;
    
};

