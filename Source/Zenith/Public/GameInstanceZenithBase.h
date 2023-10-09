#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELaunchGameIntent.h"
#include "Engine/GameInstance.h"
#include "ESoundFamily.h"
#include "GameInstanceZenithBase.generated.h"

class USoundMatrixData;
class UUserWidget;
class UFMODVCA;
class UWorld;
class UDataTable;
class UGameInstanceZenithBase;
class UObject;

UCLASS(NonTransient)
class ZENITH_API UGameInstanceZenithBase : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ELaunchGameIntent LaunchGameIntent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSimulateEarlyAccess;
    
    UPROPERTY(EditAnywhere)
    USoundMatrixData* SoundEffectMatrixData;
    
    UPROPERTY(EditAnywhere)
    UFMODVCA* VCA_BGM;
    
    UPROPERTY(EditAnywhere)
    UFMODVCA* VCA_SE;
    
    UPROPERTY(EditAnywhere)
    UFMODVCA* VCA_Ambience;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWorld> PersistentGameWorld;
    
    UPROPERTY(EditAnywhere)
    UDataTable* AchievementTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ErrorTable;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> ErrorWidgetClass;
    
public:
    UGameInstanceZenithBase();
    UFUNCTION(BlueprintCallable)
    void SetLaunchGameIntent(ELaunchGameIntent Intent);
    
    UFUNCTION(BlueprintPure)
    bool IsSimulatingEarlyAccess() const;
    
    UFUNCTION()
    UFMODVCA* GetSoundVCA(ESoundFamily SoundFamily) const;
    
    UFUNCTION()
    USoundMatrixData* GetSoundEffectMatrixData() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UWorld> GetPersistentGameWorld() const;
    
    UFUNCTION(BlueprintPure)
    ELaunchGameIntent GetLaunchGameIntent() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameInstanceZenithBase* GetGameInstanceZenith(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UUserWidget> GetErrorUserWidget() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetErrorDataTable() const;
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetAchievementDataTable() const;
    
};

