#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "StreamingVolume.generated.h"

class UWorld;
class USceneComponent;
class UPrimitiveComponent;

UCLASS()
class ZENITH_API AStreamingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> PrimaryLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> SecondaryLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBeforeUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockOnLoad;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* SceneRootComponent;
    
    AStreamingVolume();
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

