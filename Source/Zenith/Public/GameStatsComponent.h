#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStatsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UGameStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameStatsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayTimeAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayTime() const;
    
};

