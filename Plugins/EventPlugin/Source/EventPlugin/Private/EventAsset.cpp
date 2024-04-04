#include "EventAsset.h"
#include "EventCamera.h"

UEventAsset::UEventAsset() {
    this->EventCameraClass = AEventCamera::StaticClass();
    this->PlayerUIFadeOutTime = 0.25f;
    this->PlayerUIFadeInTime = 0.25f;
    this->CameraBlendTimeOnEventFinished = 0.00f;
    this->CameraBlendFunctionOnEventFinished = VTBlend_EaseInOut;
    this->bLockPlayerInput = true;
    this->bIsSkippable = false;
    this->SkipEventAction = NULL;
    this->bAllowPause = true;
    this->DisplayIdleSplines = true;
    this->NextNodeId = 0;
}

TArray<FEventNode> UEventAsset::GetNextNodes(FEventNode Node) {
    return TArray<FEventNode>();
}

FEventNode UEventAsset::GetFirstNode() {
    return FEventNode{};
}

FName UEventAsset::GetEventName() const {
    return NAME_None;
}

void UEventAsset::CallFunctionByName(UObject* Object, const FString& FunctionName) {
}


