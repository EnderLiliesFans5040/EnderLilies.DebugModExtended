#include "ProceduralRenderMeshComponent.h"

UProceduralRenderMeshComponent::UProceduralRenderMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UProceduralRenderMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility) {
}

bool UProceduralRenderMeshComponent::IsMeshSectionVisible(int32 SectionIndex) const {
    return false;
}

int32 UProceduralRenderMeshComponent::GetNumSections() const {
    return 0;
}

void UProceduralRenderMeshComponent::ClearMeshSection(int32 SectionIndex, bool bUpdateBounds) {
}

void UProceduralRenderMeshComponent::ClearAllMeshSections() {
}


