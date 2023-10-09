#include "GameInstanceZenithBase.h"
#include "Templates/SubclassOf.h"

class USoundMatrixData;
class UUserWidget;
class UFMODVCA;
class UObject;
class UWorld;
class UGameInstanceZenithBase;
class UDataTable;

void UGameInstanceZenithBase::SetLaunchGameIntent(ELaunchGameIntent Intent) {
}

bool UGameInstanceZenithBase::IsSimulatingEarlyAccess() const {
    return false;
}

UFMODVCA* UGameInstanceZenithBase::GetSoundVCA(ESoundFamily SoundFamily) const {
    return NULL;
}

USoundMatrixData* UGameInstanceZenithBase::GetSoundEffectMatrixData() const {
    return NULL;
}

TSoftObjectPtr<UWorld> UGameInstanceZenithBase::GetPersistentGameWorld() const {
    return NULL;
}

ELaunchGameIntent UGameInstanceZenithBase::GetLaunchGameIntent() const {
    return ELaunchGameIntent::Unknown;
}

UGameInstanceZenithBase* UGameInstanceZenithBase::GetGameInstanceZenith(UObject* WorldContextObject) {
    return NULL;
}

TSubclassOf<UUserWidget> UGameInstanceZenithBase::GetErrorUserWidget() const {
    return NULL;
}

UDataTable* UGameInstanceZenithBase::GetErrorDataTable() const {
    return NULL;
}

UDataTable* UGameInstanceZenithBase::GetAchievementDataTable() const {
    return NULL;
}

UGameInstanceZenithBase::UGameInstanceZenithBase() {
    this->LaunchGameIntent = ELaunchGameIntent::Unknown;
    this->bSimulateEarlyAccess = false;
    this->SoundEffectMatrixData = NULL;
    this->VCA_BGM = NULL;
    this->VCA_SE = NULL;
    this->VCA_Ambience = NULL;
    this->AchievementTable = NULL;
    this->ErrorTable = NULL;
    this->ErrorWidgetClass = NULL;
}

