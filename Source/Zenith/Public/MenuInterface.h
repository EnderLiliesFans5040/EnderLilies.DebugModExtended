#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MenuInterface.generated.h"

UINTERFACE(Blueprintable)
class UMenuInterface : public UInterface {
    GENERATED_BODY()
};

class IMenuInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseMenu();
    
};

