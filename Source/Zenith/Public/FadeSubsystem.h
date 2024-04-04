#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EFadeTypes.h"
#include "FadeDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FadeSubsystem.generated.h"

class UFadeUserWidget;

UCLASS(Blueprintable)
class ZENITH_API UFadeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFadeUserWidget> FadeWidget;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFadeUserWidget>, TWeakObjectPtr<UFadeUserWidget>> InstanceForFadeClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFadeDelegate OnFadeFinishedDelegate;
    
public:
    UFadeSubsystem();

    UFUNCTION(BlueprintCallable)
    void PrepareFadeInAtZOrder(TSubclassOf<UFadeUserWidget> FadeClass, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void PrepareFadeIn(TSubclassOf<UFadeUserWidget> FadeClass);
    
private:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFadeTypes GetLastFadeType() const;
    
};

