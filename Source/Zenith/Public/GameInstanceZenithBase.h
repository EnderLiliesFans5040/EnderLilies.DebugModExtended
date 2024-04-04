#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ELaunchGameIntent.h"
#include "ESoundFamily.h"
#include "Templates/SubclassOf.h"
#include "GameInstanceZenithBase.generated.h"

class UDataTable;
class UFMODVCA;
class UGameInstanceZenithBase;
class UObject;
class USoundMatrixData;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class ZENITH_API UGameInstanceZenithBase : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELaunchGameIntent LaunchGameIntent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateEarlyAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMatrixData* SoundEffectMatrixData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODVCA* VCA_BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODVCA* VCA_SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODVCA* VCA_Ambience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> PersistentGameWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AchievementTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ErrorTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ErrorWidgetClass;
    
public:
    UGameInstanceZenithBase();

    UFUNCTION(BlueprintCallable)
    void SetLaunchGameIntent(ELaunchGameIntent Intent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulatingEarlyAccess() const;
    
    UFUNCTION(BlueprintCallable)
    UFMODVCA* GetSoundVCA(ESoundFamily SoundFamily) const;
    
    UFUNCTION(BlueprintCallable)
    USoundMatrixData* GetSoundEffectMatrixData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UWorld> GetPersistentGameWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELaunchGameIntent GetLaunchGameIntent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameInstanceZenithBase* GetGameInstanceZenith(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UUserWidget> GetErrorUserWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetErrorDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetAchievementDataTable() const;
    
};

