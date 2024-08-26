#include "SecurityCamera.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ASecurityCamera::ASecurityCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->ArmComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arm"));
    this->HeadComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("head"));
    this->DetectionVolume = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionVolume"));
    this->InteractionVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionVolume"));
    this->SweepTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SweepTimeline"));
    this->SweepTimelineCurve = NULL;
    this->Moving = false;
    this->Tracking = false;
    this->DetectionVolumeSize = 32.00f;
    this->TrackSpeed = 3.00f;
    this->MoveSpeed = 0.20f;
    this->RestartDelay = 1.00f;
    this->State = ESecurityCameraState::Idle;
    this->DetectionVolume->SetupAttachment(RootComponent);
    this->InteractionVolume->SetupAttachment(RootComponent);
    this->ArmComponent->SetupAttachment(RootComponent);
    this->HeadComponent->SetupAttachment(ArmComponent);
}

void ASecurityCamera::OnSweepTimelineUpdate(const float Alpha) {
}

void ASecurityCamera::OnSweepTimelineFinished() {
}

void ASecurityCamera::OnRep_State() {
}

void ASecurityCamera::OnDetectionVolumeOverlapEnd(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ASecurityCamera::OnDetectionVolumeOverlap(UPrimitiveComponent* pOverlapComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ASecurityCamera::OnDetectionVolumeInteractEnd(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ASecurityCamera::OnDetectionVolumeInteract(UInteractionComponent* pOverlapComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ASecurityCamera::EDITOR_SetupFromBlutility(FSecurityCameraSetupData SetupData) {
}

void ASecurityCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASecurityCamera, State);
}


