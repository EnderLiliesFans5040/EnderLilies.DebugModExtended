#pragma once
#include "CoreMinimal.h"
#include "GameplayCameraAxisLag.h"
#include "Camera/CameraTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FGameplayCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraComponentXOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WorldSpaceLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SoloForwardWorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoloForwardOffsetBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnemyLocationRadius;
    
    UPROPERTY(EditAnywhere)
    FGameplayCameraAxisLag AxisLagX;
    
    UPROPERTY(EditAnywhere)
    FGameplayCameraAxisLag AxisLagY;
    
    UPROPERTY(EditAnywhere)
    FGameplayCameraAxisLag AxisLagZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraRotationLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKeepFloorInView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloorZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ComputeOnlyTargetInCameraLock;
    
    FGameplayCameraSettings();
};

