#include "AudioRollHoleLogic.h"

UAudioRollHoleLogic::UAudioRollHoleLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_sackboyRollTunnelRTPCName = TEXT("sackboy_rolltunnel_position");
    this->m_pSpline = NULL;
    this->m_pSackboy = NULL;
}


