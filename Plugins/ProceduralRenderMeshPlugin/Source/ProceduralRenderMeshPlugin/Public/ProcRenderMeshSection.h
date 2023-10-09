#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProcRenderMeshSection.generated.h"

USTRUCT(BlueprintType)
struct FProcRenderMeshSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Positions;
    
    UPROPERTY()
    TArray<FVector> Normals;
    
    UPROPERTY()
    TArray<FColor> Colors;
    
    UPROPERTY()
    TArray<FVector2D> UVs;
    
    UPROPERTY()
    TArray<uint16> ProcIndexBuffer;
    
    UPROPERTY()
    FBox SectionLocalBox;
    
    UPROPERTY()
    bool bEnableCollision;
    
    UPROPERTY()
    bool bSectionVisible;
    
    PROCEDURALRENDERMESHPLUGIN_API FProcRenderMeshSection();
};

