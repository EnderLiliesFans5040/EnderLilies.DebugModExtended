#include "SpineWidget.h"

USpineWidget::USpineWidget() {
    this->Scale = 1.00f;
    this->Atlas = NULL;
    this->SkeletonData = NULL;
    this->TextureParameterName = TEXT("SpriteTexture");
    this->DepthOffset = 0.10f;
    this->bAutoPlaying = true;
}

void USpineWidget::UpdateWorldTransform() {
}

void USpineWidget::Tick(float DeltaTime, bool CallDelegates) {
}

void USpineWidget::SetToSetupPose() {
}

void USpineWidget::SetTimeScale(float TimeScale) {
}

void USpineWidget::SetSlotsToSetupPose() {
}

bool USpineWidget::SetSkin(const FString& SkinName) {
    return false;
}

void USpineWidget::SetScaleY(float ScaleY) {
}

void USpineWidget::SetScaleX(float ScaleX) {
}

void USpineWidget::SetPlaybackTime(float InPlaybackTime, bool bCallDelegates) {
}

UTrackEntry* USpineWidget::SetEmptyAnimation(int32 TrackIndex, float mixDuration) {
    return NULL;
}

void USpineWidget::SetBonesToSetupPose() {
}

void USpineWidget::SetAutoPlay(bool bInAutoPlays) {
}

bool USpineWidget::SetAttachment(const FString& SlotName, const FString& attachmentName) {
    return false;
}

UTrackEntry* USpineWidget::SetAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop) {
    return NULL;
}

bool USpineWidget::HasSlot(const FString& SlotName) {
    return false;
}

bool USpineWidget::HasSkin(const FString& SkinName) {
    return false;
}

bool USpineWidget::HasBone(const FString& BoneName) {
    return false;
}

bool USpineWidget::HasAnimation(const FString& AnimationName) {
    return false;
}

float USpineWidget::GetTimeScale() {
    return 0.0f;
}

void USpineWidget::GetSlots(TArray<FString>& Slots) {
}

void USpineWidget::GetSkins(TArray<FString>& Skins) {
}

float USpineWidget::GetScaleY() {
    return 0.0f;
}

float USpineWidget::GetScaleX() {
    return 0.0f;
}

UTrackEntry* USpineWidget::GetCurrent(int32 TrackIndex) {
    return NULL;
}

void USpineWidget::GetBones(TArray<FString>& Bones) {
}

void USpineWidget::GetAnimations(TArray<FString>& Animations) {
}

float USpineWidget::GetAnimationDuration(const FString& AnimationName) {
    return 0.0f;
}

void USpineWidget::ClearTracks() {
}

void USpineWidget::ClearTrack(int32 TrackIndex) {
}

UTrackEntry* USpineWidget::AddEmptyAnimation(int32 TrackIndex, float mixDuration, float Delay) {
    return NULL;
}

UTrackEntry* USpineWidget::AddAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop, float Delay) {
    return NULL;
}


