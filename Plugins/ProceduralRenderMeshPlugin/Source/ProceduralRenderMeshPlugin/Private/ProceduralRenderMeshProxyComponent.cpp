#include "ProceduralRenderMeshProxyComponent.h"

UProceduralRenderMeshProxyComponent::UProceduralRenderMeshProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialOverride = NULL;
}

void UProceduralRenderMeshProxyComponent::OnUpdateBounds() {
}

void UProceduralRenderMeshProxyComponent::OnRefreshSection(int32 SectionIndex) {
}

void UProceduralRenderMeshProxyComponent::OnMarkRenderStateDirty() {
}


