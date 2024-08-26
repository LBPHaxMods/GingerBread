#include "CutterTeleporter.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CraftCutterTargetComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

ACutterTeleporter::ACutterTeleporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->SceneRoot = (USceneComponent*)RootComponent;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->JellyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JellyMesh"));
    this->SideMeshLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SideMeshLeft"));
    this->SideMeshRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SideMeshRight"));
    this->CollisionBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBounds"));
    this->InteractBounds = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractBounds"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->Ak_CutterTeleporter = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->DeformAnimTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DeformTimeline"));
    this->RippleAnimTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RippleTimeline"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->JellyDynamicMat = NULL;
    this->Width = 3;
    this->Depth = 3;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Void;
    this->BaseMat = NULL;
    this->Spread = 4.00f;
    this->DeformConditionerParam1 = -0.01f;
    this->DeformConditionerParam2 = 0.22f;
    this->DeformConditionerParam3 = -1.10f;
    this->RippleAnimCurve = NULL;
    this->DeformAnimCurve = NULL;
    this->TeleportVFX = NULL;
    this->TeleportHitVFX = NULL;
    this->SackboyEnterAudioEvent = NULL;
    this->SackboyExitAudioEvent = NULL;
    this->TeleportActiveAudioEvent = NULL;
    this->SackboyEnterHapticsEvent = NULL;
    this->SackboyExitHapticsEvent = NULL;
    this->TeleportActiveHapticsEvent = NULL;
    this->TeleportActiveGamepadAudioEvent = NULL;
    this->CooldownDelayTime = 1.00f;
    this->DeformTimelinePlayRate = 3.00f;
    this->JellyMesh->SetupAttachment(RootComponent);
    this->SideMeshLeft->SetupAttachment(RootComponent);
    this->SideMeshRight->SetupAttachment(RootComponent);
    this->CollisionBounds->SetupAttachment(RootComponent);
    this->InteractBounds->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->Ak_CutterTeleporter->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(RootComponent);
}

void ACutterTeleporter::TeleportPlayer_Implementation(ASackboy* Sackboy, const FVector& teleportLocation, const FRotator& teleportRotation) {
}

void ACutterTeleporter::RippleTimelineUpdate(float Value) {
}

void ACutterTeleporter::PlayTeleportEffect_Implementation(const FVector& teleportLocation, const FVector& sackboyLocation) {
}

void ACutterTeleporter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACutterTeleporter::OnOverlapBegin(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACutterTeleporter::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ACutterTeleporter::OnInteractEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACutterTeleporter::OnInteractBegin(UInteractionComponent* targetPrim, AActor* SourceActor, UInteractionComponent* sourcePrim) {
}

void ACutterTeleporter::DisableTick() {
}

void ACutterTeleporter::DeformTimelineUpdate(float Value) {
}


