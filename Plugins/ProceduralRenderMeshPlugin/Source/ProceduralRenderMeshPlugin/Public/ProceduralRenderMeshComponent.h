#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "ProcRenderUpdateSettings.h"
#include "ProcRenderMeshSection.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralRenderMeshComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROCEDURALRENDERMESHPLUGIN_API UProceduralRenderMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FProcRenderUpdateSettings SectionCreateSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FProcRenderUpdateSettings SectionUpdateSettings;
    
private:
    UPROPERTY()
    TArray<FProcRenderMeshSection> ProcMeshSections;
    
    UPROPERTY()
    FBoxSphereBounds LocalBounds;
    
public:
    UProceduralRenderMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    
    UFUNCTION(BlueprintPure)
    bool IsMeshSectionVisible(int32 SectionIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSections() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMeshSection(int32 SectionIndex, bool bUpdateBounds);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMeshSections();
    
};

