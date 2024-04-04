#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "ECommandInputTypes.h"
#include "InputSnapshot.h"
#include "InputBPFLibrary.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable)
class UInputBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputBPFLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInputModeUIOnlyForAllPlayers(UObject* WorldContextObject, UWidget* FocusTarget, EMouseLockMode MouseLockMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInputModeGameOnlyForAllPlayers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInputModeGameAndUIForAllPlayers(UObject* WorldContextObject, UWidget* FocusTarget, EMouseLockMode MouseLockModer, bool bHideCursorDuringCapture);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllUserFocus(UWidget* Widget, EFocusCause FocusCause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIValidationKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIPauseKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUINavigationUpKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUINavigationRightKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUINavigationPrevPageKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUINavigationNextPageKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUINavigationLeftKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUINavigationDownKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIMenuKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIDebugKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUIContextKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUICancelKey(UObject* WorldContextObject, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRepeatKeyEvent(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRawInputTypeSet(const FInputSnapshot& InputSnapshot, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCommandInputTypeSet(const FInputSnapshot& InputSnapshot, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRichTextFromInputChord(const FInputChord& InputChord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRichTextFromInputActionKeyMapping(const FInputActionKeyMapping& InputActionKeyMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRichTextForUIKey(TArray<FKey> Keys, bool bRequestGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetRichTextForAction(UObject* WorldContextObject, const FName ActionName, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNameForCommandInputType(ECommandInputTypes CommandInputType);
    
};

