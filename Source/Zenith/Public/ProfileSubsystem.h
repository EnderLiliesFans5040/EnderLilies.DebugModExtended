#pragma once
#include "CoreMinimal.h"
#include "ZenithBaseSubsystem.h"
#include "ProfileMultiDelegateDelegate.h"
#include "ProfileDelegateDelegate.h"
#include "ProfileSubsystem.generated.h"

UCLASS(BlueprintType)
class ZENITH_API UProfileSubsystem : public UZenithBaseSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FProfileMultiDelegate OnCurrentProfileChanged;
    
    UPROPERTY(BlueprintAssignable)
    FProfileMultiDelegate OnMainProfileChanged;
    
    UProfileSubsystem();
    UFUNCTION(BlueprintPure)
    bool UseProfileSystem() const;
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrProfileAsMainProfile();
    
    UFUNCTION(BlueprintCallable)
    void OpenProfileUIWithDelegate(int32 ControllerIndex, FProfileDelegate OnProfileUIClosed);
    
    UFUNCTION(BlueprintCallable)
    void OpenProfileUI(int32 ControllerIndex);
    
private:
    UFUNCTION()
    void OnPlayerControllerIDChanged(int32 OldControllerID, int32 NewControllerID);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUsingMainProfile() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMainProfileValid() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMainProfileUserIndex() const;
    
    UFUNCTION(BlueprintPure)
    FString GetMainProfileName() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMainProfile();
    
};

