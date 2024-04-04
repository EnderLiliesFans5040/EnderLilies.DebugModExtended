#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomPhysicsVolume.h"
#include "CustomPhysicsVolumeWater.generated.h"

class UFluidMeshComponent;

UCLASS(Blueprintable)
class ZENITH_API ACustomPhysicsVolumeWater : public ACustomPhysicsVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFluidMeshComponent* FluidMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluidFriction;
    
public:
    ACustomPhysicsVolumeWater(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulatingWaterLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeightAtLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFluidFriction() const;
    
};

