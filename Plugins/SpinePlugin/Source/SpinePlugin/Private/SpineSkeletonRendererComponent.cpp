#include "SpineSkeletonRendererComponent.h"

USpineSkeletonRendererComponent::USpineSkeletonRendererComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DepthOffset = 0.10f;
    this->TextureParameterName = TEXT("SpriteTexture");
    this->bCreateCollision = false;
    this->bRenderWhenOffScreen = true;
}

void USpineSkeletonRendererComponent::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void USpineSkeletonRendererComponent::SetTextureParameterValue(FName ParameterName, UTexture* Value) {
}

void USpineSkeletonRendererComponent::SetScalarParameterValue(FName ParameterName, float Value) {
}

void USpineSkeletonRendererComponent::ForceTick(float DeltaTime) {
}


