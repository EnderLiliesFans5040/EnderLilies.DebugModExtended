#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameBPFLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UGameBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPreviewLanguage(const FString& CultureName);
    
    UFUNCTION(BlueprintCallable)
    static void PrintStringWarning(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void PrintStringError(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXboxOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXboxFamilyBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSwitchBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPSFamilyBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPS5Build();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPS4Build();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPCBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEarlyAccessBuild(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRHIInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPreviewLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetGameResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetDesktopResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBuildNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesGameVersionMatchesPakVersion();
    
};

