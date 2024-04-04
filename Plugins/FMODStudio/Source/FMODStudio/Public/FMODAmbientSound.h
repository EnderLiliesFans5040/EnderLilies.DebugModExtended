#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FMODAmbientSound.generated.h"

class UFMODAudioComponent;

UCLASS(Blueprintable)
class FMODSTUDIO_API AFMODAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    AFMODAmbientSound(const FObjectInitializer& ObjectInitializer);

};

