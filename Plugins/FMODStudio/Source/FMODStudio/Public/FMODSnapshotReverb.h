#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/ReverbEffect.h"
#include "FMODSnapshotReverb.generated.h"

UCLASS(Blueprintable)
class FMODSTUDIO_API UFMODSnapshotReverb : public UReverbEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AssetGuid;
    
    UFMODSnapshotReverb();

#if WITH_EDITORONLY_DATA
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};

