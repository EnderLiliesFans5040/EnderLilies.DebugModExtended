#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleColorComponent.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBattleColorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LoopCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* FadeInCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* FadeOutCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FName MaterialParameterName;
    
public:
    UBattleColorComponent();
    UFUNCTION(BlueprintCallable)
    void SetBattleColorEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float NewAlpha);
    
};

