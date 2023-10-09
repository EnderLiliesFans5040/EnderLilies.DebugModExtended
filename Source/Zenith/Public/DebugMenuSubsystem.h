#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DebugMenuSubsystem.generated.h"

class UUserWidgetMenu;
class APlayerController;

UCLASS(BlueprintType)
class ZENITH_API UDebugMenuSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UUserWidgetMenu* DebugMenuInstance;
    
public:
    UDebugMenuSubsystem();
    UFUNCTION(BlueprintCallable)
    void ShowDebugMenu(TSubclassOf<UUserWidgetMenu> DebugMenuClass, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    bool IsDebugMenuShown() const;
    
    UFUNCTION(BlueprintCallable)
    void HideDebugMenu();
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceLastClose() const;
    
    UFUNCTION(BlueprintPure)
    bool CanShowDebugMenu() const;
    
};

