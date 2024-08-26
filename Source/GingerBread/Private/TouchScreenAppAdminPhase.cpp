#include "TouchScreenAppAdminPhase.h"
#include "Net/UnrealNetwork.h"

UTouchScreenAppAdminPhase::UTouchScreenAppAdminPhase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EyeMeshComponent = NULL;
    this->EyeCollision = NULL;
    this->Interaction = NULL;
    this->VirusFaceDuration = 2.50f;
    this->VirusIdleDuration = 1.00f;
    this->TimeBwConsoleShowAndNaomiShow = 0.10f;
    this->EyeStaticMesh = NULL;
    this->EyeFadeInTime = 1.00f;
    this->HitReactTime = 0.50f;
    this->AttackDelay = 1.00f;
    this->BackToIdleDelay = 1.00f;
    this->FadeOutTime = 1.00f;
    this->Speed = 60.00f;
    this->StartDirectionRandMin = -0.75f;
    this->StartDirectionRandMax = -0.25f;
    this->EdgeWidth = 10.00f;
    this->EyeAppear = NULL;
    this->EyeBounce = NULL;
    this->EyeCharge = NULL;
    this->EyeWallBounce = NULL;
    this->VirusFaceFadeIn = NULL;
    this->VirusFaceIdle = NULL;
    this->VirusFaceFadeOut = NULL;
    this->EyeFadeIn = NULL;
    this->EyeFadeOut = NULL;
    this->EyeIdle = NULL;
    this->EyeHitReact = NULL;
    this->EyeAttack = NULL;
    this->Material_EyeBounce = NULL;
    this->EyeTouch = NULL;
    this->BossPhaseForAttack = 2;
    this->ShockWave = NULL;
    this->ClientEyeMovementCorrectionFrames = 20;
    this->CurrentState = EAdminPhaseState::DEFAULT;
    this->LocalXUp = 0.00f;
    this->LocalXDown = 0.00f;
    this->LocalYLeft = 0.00f;
    this->LocalYRight = 0.00f;
}

void UTouchScreenAppAdminPhase::ShowConsoleMaterialAnim() {
}

void UTouchScreenAppAdminPhase::SetCurrentStateNextTick() {
}

void UTouchScreenAppAdminPhase::RunBounce_VFX_Implementation() {
}

void UTouchScreenAppAdminPhase::PrepareToAttack() {
}

void UTouchScreenAppAdminPhase::OnRep_CurrentState() {
}

void UTouchScreenAppAdminPhase::OnRep_Bounced() {
}

void UTouchScreenAppAdminPhase::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTouchScreenAppAdminPhase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTouchScreenAppAdminPhase::OnInteractionEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UTouchScreenAppAdminPhase::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool UTouchScreenAppAdminPhase::IsAdminModeActive() const {
    return false;
}

void UTouchScreenAppAdminPhase::CorruptionDestroyed(int32 bossPhase, int32 totalCorruption) {
}

void UTouchScreenAppAdminPhase::CloseAdminPhase() {
}

void UTouchScreenAppAdminPhase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTouchScreenAppAdminPhase, CurrentState);
    DOREPLIFETIME(UTouchScreenAppAdminPhase, EyeRelativePosition);
    DOREPLIFETIME(UTouchScreenAppAdminPhase, VelocityDir);
}


