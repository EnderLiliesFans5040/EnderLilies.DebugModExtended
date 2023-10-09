#include "Box2DBPFLibrary.h"

class UBoxComponent;

bool UBox2DBPFLibrary::IsPointInside(const FBox2D Box, const FVector2D PointToCheck) {
    return false;
}

bool UBox2DBPFLibrary::IsBoxInside(const FBox2D Box, const FVector2D BoxToCheck) {
    return false;
}

FVector UBox2DBPFLibrary::GetClosestPointOnSurfaceYZ(const UBoxComponent* Box, const FVector Point, EBoxSide& BoxSide) {
    return FVector{};
}

FVector2D UBox2DBPFLibrary::GetClosestPointOnSurface(const FBox2D Box, const FVector2D Point, EBoxSide& BoxSide) {
    return FVector2D{};
}

FVector2D UBox2DBPFLibrary::ClampPointInside(const FBox2D Box, const FVector2D Point) {
    return FVector2D{};
}

UBox2DBPFLibrary::UBox2DBPFLibrary() {
}

