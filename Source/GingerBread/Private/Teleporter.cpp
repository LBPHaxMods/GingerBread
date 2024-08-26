#include "Teleporter.h"
#include "Components/SceneComponent.h"

ATeleporter::ATeleporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Enabled = true;
    this->CutsceneComponentClass = NULL;
    this->ScreenTransitionComponentClass = NULL;
    this->TransitionType = ETeleporterTransition::Pan;
    this->TeleportOrderType = ETeleporterPlayerSequence::Default;
    this->TeleportAll = false;
    this->RemoveGloop = false;
    this->FadeInTime = 0.00f;
    this->HoldDelay = 0.00f;
    this->FadeOutTime = 0.00f;
    this->CutsceneDelay = 0.00f;
    this->LevelSequencer = NULL;
}

void ATeleporter::Server_StartCameraTransition() {
}

void ATeleporter::Multicast_TriggerStartCutscene_Implementation() {
}

void ATeleporter::Multicast_Teleport_Implementation() {
}

void ATeleporter::Multicast_ScreenTransitionOn_Implementation() {
}

void ATeleporter::Multicast_ScreenTransitionOff_Implementation() {
}

void ATeleporter::EnableOffscreenCheck() {
}

void ATeleporter::DisableOffscreenCheck() {
}

void ATeleporter::ActivateEvent(int32 PlayerIndex) {
}


