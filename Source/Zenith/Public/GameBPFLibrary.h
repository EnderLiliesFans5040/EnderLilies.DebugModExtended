#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GameBPFLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
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
    
    UFUNCTION(BlueprintPure)
    static bool IsXboxOne();
    
    UFUNCTION(BlueprintPure)
    static bool IsXboxFamilyBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsSwitchBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsSteamBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsPSFamilyBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsPS5Build();
    
    UFUNCTION(BlueprintPure)
    static bool IsPS4Build();
    
    UFUNCTION(BlueprintPure)
    static bool IsPCBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEarlyAccessBuild(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetVersion();
    
    UFUNCTION(BlueprintPure)
    static FString GetRHIInfo();
    
    UFUNCTION(BlueprintPure)
    static FString GetPreviewLanguage();
    
    UFUNCTION(BlueprintPure)
    static FIntPoint GetGameResolution();
    
    UFUNCTION(BlueprintPure)
    static FIntPoint GetDesktopResolution();
    
    UFUNCTION(BlueprintPure)
    static int32 GetBuildNumber();
    
    UFUNCTION(BlueprintPure)
    static bool DoesGameVersionMatchesPakVersion();
    
};

