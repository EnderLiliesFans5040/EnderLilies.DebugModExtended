#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/MeshComponent.h"
#include "ProceduralRenderMeshProxyComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROCEDURALRENDERMESHPLUGIN_API UProceduralRenderMeshProxyComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MasterProceduralRenderMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UProceduralRenderMeshProxyComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateBounds();
    
    UFUNCTION(BlueprintCallable)
    void OnRefreshSection(int32 SectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnMarkRenderStateDirty();
    
};

