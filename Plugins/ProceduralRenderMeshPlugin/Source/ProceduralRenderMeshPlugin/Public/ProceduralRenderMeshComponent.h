#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/MeshComponent.h"
#include "ProcRenderMeshSection.h"
#include "ProcRenderUpdateSettings.h"
#include "ProceduralRenderMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROCEDURALRENDERMESHPLUGIN_API UProceduralRenderMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProcRenderUpdateSettings SectionCreateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProcRenderUpdateSettings SectionUpdateSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProcRenderMeshSection> ProcMeshSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds LocalBounds;
    
public:
    UProceduralRenderMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshSectionVisible(int32 SectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSections() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMeshSection(int32 SectionIndex, bool bUpdateBounds);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMeshSections();
    
};

