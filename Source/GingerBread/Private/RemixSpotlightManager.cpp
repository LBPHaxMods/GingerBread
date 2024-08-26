#include "RemixSpotlightManager.h"
#include "Net/UnrealNetwork.h"

ARemixSpotlightManager::ARemixSpotlightManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bAutoRegisterAllSpotlights = true;
    this->m_PenaltyType = ERemixSpotlightPenaltyType::TimeMultiplier;
    this->m_PenaltyTimeMultiplier = 2.00f;
    this->m_PenaltyTimeOffset = 2.00f;
    this->m_PenaltyTimeOffsetCooldown = 2.00f;
    this->m_bScalePenaltyForPlayerCount = false;
}

void ARemixSpotlightManager::TriggerSackboyPenaltyEffects_Implementation(ASackboy* Sackboy) {
}

void ARemixSpotlightManager::TriggerGlobalPenaltyEffects_Implementation() {
}

void ARemixSpotlightManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARemixSpotlightManager, m_SpotlightDecalSettings);
    DOREPLIFETIME(ARemixSpotlightManager, m_SpotlightPenaltyEffects);
}


