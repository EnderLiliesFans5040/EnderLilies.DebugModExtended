#pragma once
#include "CoreMinimal.h"
#include "ProceduralRenderMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FluidVolumeMeshComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFluidVolumeMeshComponent : public UProceduralRenderMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Subdivisions;
    
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FVector> Normals;
    
    UPROPERTY()
    TArray<FColor> VertexColors;
    
    UPROPERTY()
    TArray<FVector2D> UVs;
    
public:
    UFluidVolumeMeshComponent();
};

