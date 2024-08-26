#include "FloatyBubble.h"
#include "AkComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RegistrationComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AFloatyBubble::AFloatyBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));

    this->SpawnSequenceEnabled = true;
    this->InitialRadius = 11.00f;
    this->DefaultBubbleVelocity = NULL;
    this->ItemBubbleVelocity = NULL;
    this->ItemInterpolateToAnchorDuration = 0.30f;
    this->ItemInterpolateToAnchorInputLockoutDuration = 0.20f;
    this->ItemInterpolateToAnchorCurve = NULL;
    this->ItemInterpolateToEdgeSpeed = 160.00f;
    this->ItemInterpolateToEdgeCurve = NULL;
    this->SackboyCollisionEnabledInBubble = false;
    this->SackboyFireAngle = 50.00f;
    this->SackboyFireSpeed = 1.00f;
    this->SackboyFireUpSpeed = 1.20f;
    this->SackboyFireDownSpeed = 0.00f;
    this->SackboyFireInheritVelocityOnlyInFireDirection = true;
    this->SackboyFireEnableAirSteer = false;
    this->SackboyFireUpEnableAirSteer = true;
    this->SackboyDisplacementSpeed = 0.50f;
    this->SackboySlapSpeedCurve = NULL;
    this->SackboyRollOnSpotDuration = 1.00f;
    this->ObjectDisplacementSpeed = 40.00f;
    this->ObjectDropSpeed = 0.50f;
    this->ObjectFirePadding = 3.00f;
    this->ObjectFireIgnoreItems = true;
    this->ObjectFireIgnoreTime = 0.50f;
    this->ObjectDisplacementMode = EFloatyBubbleDisplacementMode::Default;
    this->EnemyDisplacementSpeed = 50.00f;
    this->AudioGrappleEvent = NULL;
    this->AudioSlapEvent = NULL;
    this->AudioRollEvent = NULL;
    this->AudioBurstEvent = NULL;
    this->AudioSackboyEnterEvent = NULL;
    this->AudioSackboyExitEvent = NULL;
    this->AudioItemEnterEvent = NULL;
    this->AudioItemExitEvent = NULL;
    this->InputMode = EFloatyBubbleInputMode::UseXYPlane;
    this->ControlScheme = NULL;
    this->QuantizeMode = EFloatyBubbleQuantizeMode::Normal;
    this->QuantizeReferenceFrame = EFloatyBubbleReferenceFrame::Camera;
    this->QuantizeAngle = 45.00f;
    this->QuantizeFavourAngle = 160.00f;
    this->QuantizeBubble2DLift = 45.00f;
    this->PadVibrationEntry = NULL;
    this->PadVibrationExit = NULL;
    this->PadVibrationSlap = NULL;
    this->PadVibrationRollOnSpot = NULL;
    this->GrappleHapticEvent = NULL;
    this->EntryHapticEvent = NULL;
    this->ExitHapticEvent = NULL;
    this->SlapHapticEvent = NULL;
    this->RollOnSpotHapticEvent = NULL;
    this->BurstHapticEvent = NULL;
    this->EntryGamepadAudioEvent = NULL;
    this->ExitGamepadAudioEvent = NULL;
    this->RenderMeshScaleFactor = 0.02f;
    this->RenderMaterial = NULL;
    this->FadeRipplesCurve = NULL;
    this->DyingRipplesCurve = NULL;
    this->BubbleParticleEffect = NULL;
    this->PoppingParticleEffect = NULL;
    this->BubbleEnterIntersectionDelay = 0.00f;
    this->GrappleHookFailedAnimDistanceOffset = 4.00f;
    this->GrappleHookFailedVFXDelay = 0.20f;
    this->AnchorsAlwaysFaceCamera = true;
    this->AnchorRadius = 6.00f;
    this->AnchorSpinSpeed = 20.00f;
    this->AnchorSpinSpeedSingle = 50.00f;
    this->AnchorRotationSpeed = 1.00f;
    this->AnchorTumbleSpeedMin = 1.00f;
    this->AnchorTumbleSpeedMax = 60.00f;
    this->AnchorStickRotationSpeed = 2.00f;
    this->AnchorStickAccumulate = 10.00f;
    this->AnchorStickDecay = 0.98f;
    this->DebugDrawStickInput = false;
    this->DebugDrawBubbleTransform = false;
    this->DebugDrawAnchorTransforms = false;
    this->DebugDrawDetectionSphere = false;
    this->DebugPauseOnJump = false;
    this->RenderMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RenderMesh"));
    this->DetectionSphereComponent = (USphereComponent*)RootComponent;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoitsComponent"));
    this->RegistrationComponent = CreateDefaultSubobject<URegistrationComponent>(TEXT("registration"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->Coordinator = NULL;
    this->WobbleTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
    this->DeathWobbleTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("DeathWobbleTimeline"));
    this->EnterEffectBlendTime = 0.30f;
    this->ExitEffectBlendTime = 0.30f;
    this->RenderMaterialInstance = NULL;
    this->RenderMeshComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
}

void AFloatyBubble::WobbleAnimationCallback(float AnimationAlpha) {
}

void AFloatyBubble::SetRadius(float Radius) {
}

void AFloatyBubble::SetQuantisationMode(EFloatyBubbleQuantizeMode Mode, EFloatyBubbleReferenceFrame referenceFrame) {
}

void AFloatyBubble::SetDamageEnabled(bool Enabled) {
}

void AFloatyBubble::SetCaptureEnabled(bool Enabled) {
}

void AFloatyBubble::SetBubbleVelocity(const FVector& InVelocity) {
}

void AFloatyBubble::OnWake_Implementation() {
}

void AFloatyBubble::OnSleep_Implementation() {
}



void AFloatyBubble::OnRep_NonSackboyContents() {
}



void AFloatyBubble::OnFirstWake_Implementation() {
}

void AFloatyBubble::OnEndOverlap(UPrimitiveComponent* thisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void AFloatyBubble::OnEndInteractionOverlap(UInteractionComponent* thisComponent, AActor* OtherActor, UInteractionComponent* OtherComponent) {
}

void AFloatyBubble::OnBurstEnd(UParticleSystemComponent* Particles) {
}


void AFloatyBubble::OnBeginOverlap(UPrimitiveComponent* thisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void AFloatyBubble::OnBeginInteractionOverlap(UInteractionComponent* thisComponent, AActor* OtherActor, UInteractionComponent* OtherComponent) {
}

bool AFloatyBubble::IsBubbleMoving() const {
    return false;
}

FVector AFloatyBubble::GetBubbleVelocity() const {
    return FVector{};
}

void AFloatyBubble::Burst() {
}

void AFloatyBubble::BeginResize(const FFloatyBubbleResizeParams& resizeParams) {
}

void AFloatyBubble::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFloatyBubble, SpawnSequenceEnabled);
    DOREPLIFETIME(AFloatyBubble, InitialRadius);
    DOREPLIFETIME(AFloatyBubble, SpawnSequenceParams);
    DOREPLIFETIME(AFloatyBubble, Net_Replicated_NonSackboyContents);
}


