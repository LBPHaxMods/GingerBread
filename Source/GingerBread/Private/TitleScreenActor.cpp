#include "TitleScreenActor.h"

ATitleScreenActor::ATitleScreenActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceActor = NULL;
    this->World6SequenceActor = NULL;
    this->World6LoadDelay = 2.50f;
    this->CheckpointActor = NULL;
    this->ClientIntroSequences = NULL;
}

void ATitleScreenActor::StartWorld6Sequence() {
}

void ATitleScreenActor::StartIntroSequence() {
}

void ATitleScreenActor::ShowButtonPrompt() {
}

void ATitleScreenActor::ShowBasicLoadingScreen(bool Show) {
}

void ATitleScreenActor::PostSpawn(USpawnPointComponent* SpawnPoint, bool first_time) {
}

void ATitleScreenActor::OnWorld6PostUnlock() {
}

void ATitleScreenActor::OnWorld6PostCutscene() {
}

void ATitleScreenActor::OnWorld6BeginLoad() {
}

void ATitleScreenActor::OnIntroSequenceFinished() {
}

bool ATitleScreenActor::HasCompletedFinalLevel() const {
    return false;
}


