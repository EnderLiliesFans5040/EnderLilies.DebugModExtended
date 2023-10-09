#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProcRenderMeshTangent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProcRenderMeshVertex.generated.h"

USTRUCT(BlueprintType)
struct FProcRenderMeshVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProcRenderMeshTangent Tangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV3;
    
    PROCEDURALRENDERMESHPLUGIN_API FProcRenderMeshVertex();
};

