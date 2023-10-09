#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProcRenderMeshTangent.generated.h"

USTRUCT(BlueprintType)
struct FProcRenderMeshTangent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TangentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlipTangentY;
    
    PROCEDURALRENDERMESHPLUGIN_API FProcRenderMeshTangent();
};

