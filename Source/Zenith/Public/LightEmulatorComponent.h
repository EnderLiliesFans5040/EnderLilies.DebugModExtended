#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "ELightEmulatorMode.h"
#include "UObject/NoExportTypes.h"
#include "LightEmulatorComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API ULightEmulatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bEnable;
    
    UPROPERTY(EditDefaultsOnly)
    FComponentReference TargetMaskMeshComponentReference;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxTopScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxLateralScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinLightIntensityForMaxLightScale;
    
private:
    UPROPERTY(EditDefaultsOnly)
    ELightEmulatorMode LightEmulatorMode;
    
    UPROPERTY(EditDefaultsOnly)
    FVector LightScaleCustomValues;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> MaskMaterialInstances;
    
public:
    ULightEmulatorComponent();
    UFUNCTION(BlueprintCallable)
    void SetLightEmulatorMode(ELightEmulatorMode NewLightEmulatorMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomLightScaleValues(FVector NewLightScaleCustomValues);
    
    UFUNCTION(BlueprintCallable)
    void RefreshTranslucencySortPriority();
    
private:
    UFUNCTION()
    void OnSpineMaterialsUpdated();
    
};

