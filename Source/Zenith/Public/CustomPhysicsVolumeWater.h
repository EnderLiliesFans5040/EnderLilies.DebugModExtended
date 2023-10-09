#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomPhysicsVolume.h"
#include "CustomPhysicsVolumeWater.generated.h"

class UFluidMeshComponent;

UCLASS()
class ZENITH_API ACustomPhysicsVolumeWater : public ACustomPhysicsVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFluidMeshComponent* FluidMeshComponent;
    
    UPROPERTY(EditAnywhere)
    float FluidFriction;
    
public:
    ACustomPhysicsVolumeWater();
    UFUNCTION(BlueprintPure)
    bool IsSimulatingWaterLine() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeightAtLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    float GetFluidFriction() const;
    
};

