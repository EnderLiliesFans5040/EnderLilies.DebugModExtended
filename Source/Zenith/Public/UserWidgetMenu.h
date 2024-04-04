#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuInterface.h"
#include "UserWidgetMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZENITH_API UUserWidgetMenu : public UUserWidget, public IMenuInterface {
    GENERATED_BODY()
public:
    UUserWidgetMenu();

    UFUNCTION(BlueprintCallable)
    void OpenMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    

    // Fix for true pure virtual functions not being implemented
};

