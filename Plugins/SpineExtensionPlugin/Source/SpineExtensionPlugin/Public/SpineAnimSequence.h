#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSequenceBase.h"
#include "SpineAnimSequence.generated.h"

UCLASS()
class SPINEEXTENSIONPLUGIN_API USpineAnimSequence : public UAnimSequenceBase {
    GENERATED_BODY()
public:
    //USpineAnimSequence() {};

	virtual void SetPreviewMesh(USkeletalMesh* PreviewMesh, bool bMarkAsDirty = true) override {};
	/** Get the preview mesh for this asset */
	virtual USkeletalMesh* GetPreviewMesh() const override { return nullptr; };
	virtual USkeletalMesh* GetPreviewMesh(bool value) override  { return nullptr; };

};

