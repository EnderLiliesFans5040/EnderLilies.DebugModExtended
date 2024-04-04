#pragma once
#include "CoreMinimal.h"
#include "ProfileDelegateDelegate.h"
#include "ProfileMultiDelegateDelegate.h"
#include "ZenithBaseSubsystem.h"
#include "ProfileSubsystem.generated.h"

UCLASS(Blueprintable)
class ZENITH_API UProfileSubsystem : public UZenithBaseSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileMultiDelegate OnCurrentProfileChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileMultiDelegate OnMainProfileChanged;
    
    UProfileSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseProfileSystem() const;
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrProfileAsMainProfile();
    
    UFUNCTION(BlueprintCallable)
    void OpenProfileUIWithDelegate(int32 ControllerIndex, FProfileDelegate OnProfileUIClosed);
    
    UFUNCTION(BlueprintCallable)
    void OpenProfileUI(int32 ControllerIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerControllerIDChanged(int32 OldControllerID, int32 NewControllerID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingMainProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainProfileValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainProfileUserIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMainProfileName() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMainProfile();
    
};

