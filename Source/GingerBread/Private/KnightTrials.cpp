#include "KnightTrials.h"
#include "Net/UnrealNetwork.h"

AKnightTrials::AKnightTrials(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerPulseRadiusCm = 25.00f;
    this->OuterPulseRadiusCm = 60.00f;
    this->MinPulseIntensity = 0.00f;
    this->MaxPulseIntensity = 1.00f;
    this->PulseIntensity = 0.00f;
    this->SkeletalMesh = NULL;
    this->CurrentState = ETrialsState::Closed;
    this->TargetState = ETrialsState::Closed;
    this->AUTH_TargetState = ETrialsState::Closed;
    this->Animations = NULL;
    this->OpenAnimName = TEXT("Open");
    this->CloseAnimName = TEXT("Close");
    this->OpenIdleAnimName = TEXT("OpenIdle");
    this->EntryVFXInteraction = NULL;
    this->TrialsSpawnPoint = NULL;
    this->MinYankDurationSeconds = 1.00f;
    this->MaxYankDurationSeconds = 2.00f;
    this->MinDurationYankCurve = NULL;
    this->MaxDurationYankCurve = NULL;
    this->bUseYank = true;
}





void AKnightTrials::OnRep_TargetState() {
}

void AKnightTrials::HandleSackboyEnteredKnightTrials(ASackboy* Sackboy) {
}

void AKnightTrials::HandleKnightTrialsHasOpened() {
}

void AKnightTrials::HandleFinalSackboyEnteredKnightTrials(TArray<ASackboy*>& EnteredSackboys) {
}


void AKnightTrials::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKnightTrials, AUTH_TargetState);
}


