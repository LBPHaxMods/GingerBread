#include "SlapBoltScrew.h"
#include "AkComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ASlapBoltScrew::ASlapBoltScrew(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScrewMesh"));

    this->Root = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ScrewMesh = (UStaticMeshComponent*)RootComponent;
    this->MeshInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("MeshInteraction"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));

    this->SlapRescrewTimelineCurve = NULL;
    this->SlapUnscrewTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SlapUnscrewTimeline"));
    this->TimelineCurve = NULL;
    this->SparksParticleSystem = NULL;
    this->SpinParticleSystem = NULL;
    this->SlapForceFeedbackEvent = NULL;
    this->HitAkEvent = NULL;
    this->PopOutAkEvent = NULL;
    this->RewindAkEvent = NULL;
    this->RewindStopAkEvent = NULL;
    this->UnscrewedBoltZRotation = 75.00f;
    this->UnscrewedBoltHitImpulse = 15.00f;
    this->AuthState = ESlapBoltState::Screwed;
    this->AkComponent->SetupAttachment(RootComponent);
    this->MeshInteraction->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
}

void ASlapBoltScrew::SpawnPickups() {
}

void ASlapBoltScrew::OnSlapUnscrewTimelineUpdate(const float Alpha) {
}

void ASlapBoltScrew::OnSlapUnscrewTimelineFinished() {
}

void ASlapBoltScrew::OnScrewSlappedRPC_Implementation(const float StartBoltHeight, const int32 InAdjustedSlapPowerLevel, const int32 InSlapsReceivedCount, const FVector& InSlapHitLocation) {
}

void ASlapBoltScrew::OnRep_SetState() {
}

void ASlapBoltScrew::OnRep_AUTHHandlePosition() {
}

void ASlapBoltScrew::OnPopoutScrewImpulseRPC_Implementation(const FVector& InImpulseLocation, const FVector& InImpulseToAdd, const FVector& InAngularImpulseToAdd) {
}

void ASlapBoltScrew::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASlapBoltScrew, AUTHHandlePosition);
    DOREPLIFETIME(ASlapBoltScrew, AuthState);
}


