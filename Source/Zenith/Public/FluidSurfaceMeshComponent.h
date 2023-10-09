#pragma once
#include "CoreMinimal.h"
#include "ProceduralRenderMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FluidSurfaceMeshComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFluidSurfaceMeshComponent : public UProceduralRenderMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Subdivisions;
    
    UPROPERTY(EditAnywhere)
    int32 SubdivisionsX;
    
    UPROPERTY(EditAnywhere)
    int32 SubdivisionsY;
    
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FVector> Normals;
    
    UPROPERTY()
    TArray<FColor> VertexColors;
    
    UPROPERTY()
    TArray<FVector2D> UVs;
    
public:
    UFluidSurfaceMeshComponent();
};

