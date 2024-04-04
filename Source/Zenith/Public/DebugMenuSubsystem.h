#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "DebugMenuSubsystem.generated.h"

class APlayerController;
class UUserWidgetMenu;

UCLASS(Blueprintable)
class ZENITH_API UDebugMenuSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMenu* DebugMenuInstance;
    
public:
    UDebugMenuSubsystem();

    UFUNCTION(BlueprintCallable)
    void ShowDebugMenu(TSubclassOf<UUserWidgetMenu> DebugMenuClass, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMenuShown() const;
    
    UFUNCTION(BlueprintCallable)
    void HideDebugMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastClose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowDebugMenu() const;
    
};

