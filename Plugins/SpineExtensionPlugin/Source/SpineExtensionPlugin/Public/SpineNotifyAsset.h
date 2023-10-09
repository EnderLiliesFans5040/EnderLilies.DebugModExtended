#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineNotifyAsset.generated.h"

class USpineAnimSequence;

UCLASS()
class SPINEEXTENSIONPLUGIN_API USpineNotifyAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, USpineAnimSequence*> AnimSequencePerAnims;
    
    USpineNotifyAsset();
};

