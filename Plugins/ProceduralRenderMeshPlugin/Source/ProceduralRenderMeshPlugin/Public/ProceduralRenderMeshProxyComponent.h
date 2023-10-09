#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "Engine/EngineTypes.h"
#include "ProceduralRenderMeshProxyComponent.generated.h"

class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROCEDURALRENDERMESHPLUGIN_API UProceduralRenderMeshProxyComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FComponentReference MasterProceduralRenderMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* MaterialOverride;
    
    UProceduralRenderMeshProxyComponent();
private:
    UFUNCTION()
    void OnUpdateBounds();
    
    UFUNCTION()
    void OnRefreshSection(int32 SectionIndex);
    
    UFUNCTION()
    void OnMarkRenderStateDirty();
    
};

