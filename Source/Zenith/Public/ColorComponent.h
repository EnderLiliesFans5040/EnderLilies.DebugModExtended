#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ColorComponent.generated.h"

class UMeshComponent;
class UMaterialInstanceDynamic;
class USpineSkeletonRendererComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UColorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMeshComponent*> MeshComponents;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(Instanced)
    USpineSkeletonRendererComponent* SpineRenderer;
    
public:
    UColorComponent();
    UFUNCTION(BlueprintCallable)
    void SetDefaultColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor Color, float LerpTime);
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetCurrentColor() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearColor(float LerpTime);
    
};

