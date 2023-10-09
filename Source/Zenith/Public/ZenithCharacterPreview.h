#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZenithCharacterPreview.generated.h"

UCLASS(Abstract)
class ZENITH_API AZenithCharacterPreview : public AActor {
    GENERATED_BODY()
public:
    AZenithCharacterPreview();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hide();
    
};

