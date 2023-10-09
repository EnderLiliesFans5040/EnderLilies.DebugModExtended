#include "AchievementsSubsystem.h"

class UDataTable;

void UAchievementsSubsystem::UnlockAchievement(EZenithAchievement Achievement) {
}

bool UAchievementsSubsystem::ResetAchievements() {
    return false;
}

void UAchievementsSubsystem::OnMainProfileChanged() {
}

void UAchievementsSubsystem::OnGameDataLoaded() {
}

void UAchievementsSubsystem::NotifyActionPileLv3() {
}

void UAchievementsSubsystem::NotifyActionDashLv3() {
}

bool UAchievementsSubsystem::IsAchievementUnlocked(EZenithAchievement Achievement) {
    return false;
}

float UAchievementsSubsystem::GetAchievementProgress(EZenithAchievement Achievement) const {
    return 0.0f;
}

FName UAchievementsSubsystem::GetAchievementID(EZenithAchievement Achievement) const {
    return NAME_None;
}

UDataTable* UAchievementsSubsystem::GetAchievementDataTable() const {
    return NULL;
}

bool UAchievementsSubsystem::GetAchievementData(EZenithAchievement Achievement, FAchievementData& out_AchievementData) const {
    return false;
}

UAchievementsSubsystem::UAchievementsSubsystem() {
}

