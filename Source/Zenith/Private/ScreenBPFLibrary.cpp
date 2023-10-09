#include "ScreenBPFLibrary.h"

class UObject;

bool UScreenBPFLibrary::ProjectWorldToViewport(UObject* WorldContextObject, FVector WorldLocation, FVector2D& out_ViewportLocation) {
    return false;
}

bool UScreenBPFLibrary::DeprojectViewportToWorldAtDepth(UObject* WorldContextObject, FVector2D ViewportLocation, FVector& out_WorldLocation, float Depth) {
    return false;
}

UScreenBPFLibrary::UScreenBPFLibrary() {
}

