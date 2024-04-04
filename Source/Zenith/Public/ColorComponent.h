#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ColorComponent.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;
class USpineSkeletonRendererComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UColorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* SpineRenderer;
    
public:
    UColorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefaultColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor Color, float LerpTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentColor() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearColor(float LerpTime);
    
};

