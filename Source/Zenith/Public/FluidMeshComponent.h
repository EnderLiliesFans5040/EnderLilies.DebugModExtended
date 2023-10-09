#pragma once
#include "CoreMinimal.h"
#include "ProceduralRenderMeshComponent.h"
#include "FluidMeshEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FluidMeshComponent.generated.h"

class AActor;
class UShapeComponent;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UFluidMeshComponent : public UProceduralRenderMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFluidMeshEvent OnActorInteract;
    
private:
    UPROPERTY(EditAnywhere)
    bool bEnableActorInteraction;
    
    UPROPERTY(EditAnywhere)
    FVector MeshExtents;
    
    UPROPERTY(EditAnywhere)
    float CellSize;
    
    UPROPERTY(EditAnywhere)
    float ActorHeightRange;
    
    UPROPERTY(EditAnywhere)
    FVector VelocityEnterFactor;
    
    UPROPERTY(EditAnywhere)
    FVector VelocityTickFactor;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeY;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeZ;
    
    UPROPERTY(Transient)
    AActor* Owner;
    
    UPROPERTY(Instanced, Transient)
    UShapeComponent* ShapeComponent;
    
    UPROPERTY(Transient)
    TArray<AActor*> OverlappedActors;
    
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FVector> Normals;
    
    UPROPERTY()
    TArray<FColor> VertexColors;
    
    UPROPERTY()
    TArray<FVector2D> UVs;
    
public:
    UFluidMeshComponent();
private:
    UFUNCTION()
    void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActorInteractionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetInteractingActors() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeightAtLocation(const FVector& Location) const;
    
};

