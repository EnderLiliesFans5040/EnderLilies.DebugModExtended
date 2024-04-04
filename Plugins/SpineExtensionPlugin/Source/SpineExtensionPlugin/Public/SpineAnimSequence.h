#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSequenceBase.h"
#include "SpineAnimSequence.generated.h"

UCLASS(Blueprintable)
class SPINEEXTENSIONPLUGIN_API USpineAnimSequence : public UAnimSequenceBase {
    GENERATED_BODY()
public:
    USpineAnimSequence();
    virtual void SetPreviewMesh(USkeletalMesh* PreviewMesh, bool bMarkAsDirty = true) override;
    virtual USkeletalMesh * GetPreviewMesh() const override;
    virtual USkeletalMesh* GetPreviewMesh(bool value) override;
};

