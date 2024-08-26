#include "TrapezeBase.h"
#include "Net/UnrealNetwork.h"

ATrapezeBase::ATrapezeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->LargeVersion = false;
    this->Moving = false;
    this->PreviousSwing = 0.00f;
    this->FreeSpinningGrab = true;
    this->PlayerOnSwing = false;
    this->WindStrength = 0.35f;
    this->WindDirection = ETimelineDirection::Forward;
    this->WindDelay = 3.00f;
    this->AngularLimit = 10.00f;
    this->SwingAngle = 0.00f;
    this->TorqueMultiplier = -3.00f;
    this->UseSqueakyAudio = false;
    this->DefaultSwingForce = 0.00f;
    this->HighPointSwingForce = 0.04f;
    this->OnIdleHandleDamping = 0.60f;
    this->WindConstant = 50.00f;
    this->DelayVariance = 0.30f;
    this->TimelineLength = 1.00f;
    this->AudioEvent = NULL;
    this->PositiveSwingHapticsEvent = NULL;
    this->NegativeSwingHapticsEvent = NULL;
    this->FloatCurve = NULL;
}

void ATrapezeBase::UpdatePhysics_Implementation() {
}

void ATrapezeBase::UpdateAudio_Implementation() {
}

void ATrapezeBase::TimelineUpdateCallback(float Value) {
}

void ATrapezeBase::TimelineFinishedCallback() {
}

void ATrapezeBase::StopAmbientMotion_Implementation() {
}

void ATrapezeBase::StartAmbientMotion_Implementation() {
}

void ATrapezeBase::OnWake_Implementation() {
}

void ATrapezeBase::OnSleep_Implementation() {
}

void ATrapezeBase::OnRep_AUTHPivotPosition() {
}

void ATrapezeBase::OnRep_AUTHHandlePosition() {
}

void ATrapezeBase::OnFirstWake_Implementation() {
}

void ATrapezeBase::HandleWakeSleep(bool Wake) {
}

void ATrapezeBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATrapezeBase, AUTHPivotPosition);
    DOREPLIFETIME(ATrapezeBase, AUTHHandlePosition);
}


