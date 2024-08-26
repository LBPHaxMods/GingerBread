#include "VexableDuopedeSpline.h"

AVexableDuopedeSpline::AVexableDuopedeSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RespawnDeadSections = true;
    this->OneShotDuopede = true;
    this->Active = false;
    this->NumberOfNonVexableSegmentsAtEnds = 1;
    this->DespawnedSegmentParticleSystem = NULL;
    this->DespawnedSegmentAudioEvent = NULL;
}

void AVexableDuopedeSpline::RPC_SpawnDespawnedSegmentEffect_Implementation(const FVector& Location) {
}

void AVexableDuopedeSpline::OnCurrentVexedDuopedeSegmentKilled(ADuopedeSegment* pDuopedeSegment) {
}

void AVexableDuopedeSpline::AUTH_SelectVexedDuopedeSegment() {
}


