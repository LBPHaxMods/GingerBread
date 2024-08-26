#include "AudioNPCAlertState.h"

UAudioNPCAlertState::UAudioNPCAlertState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nEnemiesRTPCName = TEXT("num_of_enemies_in_combat_state");
    this->m_NPCStateGroup = TEXT("Npc_Global_Combat_State");
}

void UAudioNPCAlertState::OnNumberOfEnemiesInCombatChanged(int32 NumOfEnemiesInFight) {
}


