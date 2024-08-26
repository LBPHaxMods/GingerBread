#include "GingerbreadWorldSettings.h"

AGingerbreadWorldSettings::AGingerbreadWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerManagerData = NULL;
    this->LevelSettingsData = NULL;
    this->AppearanceManagerData = NULL;
    this->SackboyRespawnManagerData = NULL;
    this->GameplayAudioManagerData = NULL;
    this->TimedChallengeData = NULL;
    this->LevelResetManagerData = NULL;
    this->m_EnabledManagerFlags = -1;
    this->m_ManagerEnabledStates[0] = 1;
    this->m_ManagerEnabledStates[1] = 1;
    this->m_ManagerEnabledStates[2] = 1;
    this->m_ManagerEnabledStates[3] = 1;
    this->m_ManagerEnabledStates[4] = 1;
    this->m_ManagerEnabledStates[5] = 1;
    this->m_ManagerEnabledStates[6] = 1;
    this->m_ManagerEnabledStates[7] = 1;
    this->m_ManagerEnabledStates[8] = 1;
    this->m_ManagerEnabledStates[9] = 1;
    this->m_ManagerEnabledStates[10] = 1;
    this->m_ManagerEnabledStates[11] = 1;
    this->m_ManagerEnabledStates[12] = 1;
    this->m_ManagerEnabledStates[13] = 1;
    this->m_ManagerEnabledStates[14] = 1;
    this->m_ManagerEnabledStates[15] = 1;
    this->m_ManagerEnabledStates[16] = 1;
    this->m_ManagerEnabledStates[17] = 1;
    this->m_ManagerEnabledStates[18] = 1;
    this->m_ManagerEnabledStates[19] = 1;
    this->m_ManagerEnabledStates[20] = 1;
    this->m_ManagerEnabledStates[21] = 1;
    this->m_ManagerEnabledStates[22] = 1;
    this->m_ManagerEnabledStates[23] = 1;
    this->m_ManagerEnabledStates[24] = 1;
    this->m_ManagerEnabledStates[25] = 1;
    this->m_ManagerEnabledStates[26] = 1;
    this->m_ManagerEnabledStates[27] = 1;
    this->m_ManagerEnabledStates[28] = 1;
    this->m_ManagerEnabledStates[29] = 1;
    this->m_ManagerEnabledStates[30] = 1;
    this->m_ManagerEnabledStates[31] = 1;
    this->m_ManagerEnabledStates[32] = 1;
    this->m_ManagerEnabledStates[33] = 1;
    this->m_ManagerEnabledStates[34] = 1;
    this->m_ManagerEnabledStates[35] = 1;
    this->m_ManagerEnabledStates[36] = 1;
    this->m_ManagerEnabledStates[37] = 1;
    this->m_ManagerEnabledStates[38] = 1;
    this->m_bAllowLevelResetOnDeath = false;
}

void AGingerbreadWorldSettings::EDITOR_ResetGameModeOverride() {
}


