#include "RemixSpotlight.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

ARemixSpotlight::ARemixSpotlight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Scaler = CreateDefaultSubobject<USceneComponent>(TEXT("Scaler"));
    this->SpotLight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpotLight"));
    this->SpotlightBeam = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpotlightBeam"));
    this->SpotlightCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpotlightCollision"));
    this->SpotlightInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("SpotlightInteract"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->SackboyDetectionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SackboyDetectionTimeline"));
    this->PenaltyEffectsTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PenaltyEffectsTimeline"));
    this->SpotlightCollision->SetupAttachment(Scaler);
    this->SpotlightInteract->SetupAttachment(Scaler);
    this->Scaler->SetupAttachment(RootComponent);
    this->SpotLight->SetupAttachment(Scaler);
    this->SpotlightBeam->SetupAttachment(Scaler);
}

void ARemixSpotlight::RPC_OnExited_Implementation(ASackboy* Sackboy) {
}

void ARemixSpotlight::RPC_OnEntered_Implementation(ASackboy* Sackboy) {
}

void ARemixSpotlight::OnSackboyDetectionTimelineValueChanged(float PlayerDetectionValue) {
}

void ARemixSpotlight::OnPenaltyEffectsVisualScaleValueChanged(float VisualScaleValue) {
}

void ARemixSpotlight::OnPenaltyEffectsOpacityScaleValueChanged(float OpacityScaleValue) {
}


