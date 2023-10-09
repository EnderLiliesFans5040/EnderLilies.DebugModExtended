#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EFadeTypes.h"
#include "FadeDelegateDelegate.h"
#include "FadeSubsystem.generated.h"

class UFadeUserWidget;

UCLASS(BlueprintType)
class ZENITH_API UFadeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UFadeUserWidget> FadeWidget = nullptr;
    
    UPROPERTY(Instanced, Transient)
    TMap<TSubclassOf<UFadeUserWidget>, UFadeUserWidget*> InstanceForFadeClasses;
    
    UPROPERTY(Transient)
    FFadeDelegate OnFadeFinishedDelegate;
    
public:
    UFadeSubsystem();
    UFUNCTION(BlueprintCallable)
    void PrepareFadeInAtZOrder(TSubclassOf<UFadeUserWidget> FadeClass, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void PrepareFadeIn(TSubclassOf<UFadeUserWidget> FadeClass);
    
private:
    UFUNCTION()
    void OnFadeFinished(bool bWasFadeIn);
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchFadeOut(TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished);
    
    UFUNCTION(BlueprintCallable)
    void LaunchFadeIn(TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished);
    
    UFUNCTION(BlueprintCallable)
    void LaunchFadeAtZOrder(bool bFadeIn, TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void LaunchFade(bool bFadeIn, TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished);
    
    UFUNCTION(BlueprintPure)
    bool IsFading() const;
    
    UFUNCTION(BlueprintPure)
    EFadeTypes GetLastFadeType() const;
    
};

