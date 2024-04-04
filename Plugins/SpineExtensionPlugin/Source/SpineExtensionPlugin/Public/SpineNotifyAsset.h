#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineNotifyAsset.generated.h"

class USpineAnimSequence;

UCLASS(Blueprintable)
class SPINEEXTENSIONPLUGIN_API USpineNotifyAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USpineAnimSequence*> AnimSequencePerAnims;
    
    USpineNotifyAsset();

};

