#include "SpikeyVineSingleStandaloneMamapede.h"
#include "ESpikeyVineMasterState.h"
#include "Net/UnrealNetwork.h"

ASpikeyVineSingleStandaloneMamapede::ASpikeyVineSingleStandaloneMamapede(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsShortVine = true;
    this->CurrentMasterState = ESpikeyVineMasterState::Cut;
    this->CanEverHaveCraftCutterEnabled = false;
    this->VanishingTime = 0.10f;
    this->Visiblity_LateJoinRep = false;
}

void ASpikeyVineSingleStandaloneMamapede::ToggleVineVisibility(bool visible) {
}

void ASpikeyVineSingleStandaloneMamapede::ResetVine_Implementation() {
}

void ASpikeyVineSingleStandaloneMamapede::OnRep_Visibility() {
}

void ASpikeyVineSingleStandaloneMamapede::OnClipEnded(int32 ClipIndex) {
}

void ASpikeyVineSingleStandaloneMamapede::CutDown_BP() {
}

void ASpikeyVineSingleStandaloneMamapede::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpikeyVineSingleStandaloneMamapede, Visiblity_LateJoinRep);
}


